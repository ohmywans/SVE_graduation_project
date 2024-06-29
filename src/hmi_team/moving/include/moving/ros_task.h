#ifndef ROS_TASK
#define ROS_TASK
#ifndef Q_MOC_RUN
// ROS_TASK

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

namespace moving {

class ros_task : public QThread{
    Q_OBJECT

public:
    ros_task(int argc, char **argv);
    virtual ~ros_task();
    bool init();
    void init_nh();
    void run();
    //================================
    void send_back();
    std_msgs::Int32 num_back;
    //================================
    void send_take();
    std_msgs::Int32 num_take;

Q_SIGNALS:
    void home_ui();
    void take_ui();

private:
    int init_argc;
    char** init_argv;
    
    // home by Check 버튼 -> move mode
    ros::Subscriber sub_move_mode;
    //=====================
    ros::Publisher pub_back;
    ros::Publisher pub_take;
    //=====================

    ros::NodeHandle *nh;
    bool isConnected;

	};
}

#endif 