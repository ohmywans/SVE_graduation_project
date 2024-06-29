#ifndef ROS_TASK
#define ROS_TASK
#ifndef Q_MOC_RUN

#include <ros/ros.h>
#include <ros/node_handle.h>

#include <QThread>
#include <QStringListModel>
#include <string>
#include <vector>

#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>

#endif

namespace home{

class ros_task : public QThread{
    Q_OBJECT

public:
    ros_task(int argc, char **argv);
    virtual ~ros_task();
    bool init();
    void init_nh();
    void run();

    //===========================
    void send_moving();
    std_msgs::Int32 num_moving;

    // checkmessage 추가 
    void publishCheckMessage();

Q_SIGNALS:

    void moving_ui(); 
    void take_ui();
    void qt_map_rviz_ros_ui(); 

private:
    int init_argc;
    char** init_argv;

    ros::Publisher pub_moving;

    ros::Subscriber sub_moving_mode;
    ros::Subscriber sub_take_mode;

    ros::NodeHandle *nh;
    bool isConnected;
	};
}

#endif 