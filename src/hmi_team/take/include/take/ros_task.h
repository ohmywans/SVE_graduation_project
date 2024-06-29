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

namespace take {

class ros_task : public QThread{
    Q_OBJECT

public:
    ros_task(int argc, char **argv);
    virtual ~ros_task();
    bool init();
    void init_nh();
    void run();
    //================================
    void send_reset();
    std_msgs::Int32 num_reset;
    //================================

Q_SIGNALS:
    void moving_ui();
    void home_ui();

private:
    int init_argc;
    char** init_argv;
    
    // arrived버튼 -> take 
    ros::Subscriber sub_take_mode;
    //=====================
    ros::Publisher pub_reset;
    //=====================

    ros::NodeHandle *nh;
    bool isConnected;

	};
}

#endif 