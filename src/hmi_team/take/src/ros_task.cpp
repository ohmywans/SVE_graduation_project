#include <ros/ros.h>
#include <ros/network.h>
#include <std_msgs/Int32.h>
#include "take/ros_task.h" 
#include <iostream>
using namespace std;

namespace take {

  bool moving_close = 0;

    // moving로부터 받는 콜백함수
    void sub_moving_callback(const std_msgs::Int32::ConstPtr& msg)
    {
      ROS_INFO("moving Window_close");
      ROS_INFO("This is take Window");
      moving_close = 1; 
    }

    ros_task::ros_task(int argc, char** argv ) :
      init_argc(argc),
      init_argv(argv),
      isConnected(false)
    {
      //need space
    }

    ros_task::~ros_task() 
    {
      if(ros::isStarted()) 
      {
        ros::shutdown();
        ros::waitForShutdown();
      }
      delete nh;
      wait();
    }

    bool ros_task::init() 
    {
      //cout <<"init is here" <<endl;
      ros::init(init_argc,init_argv,"take_mode");
      if ( ! ros::master::check() ) 
      {
        return false;
      }
      init_nh();
      ros::start();
      start();
      return true;
    }

    void ros_task::init_nh()
      {
        nh = new ros::NodeHandle("take_mode");

        sub_take_mode =nh->subscribe("/take", 10, sub_moving_callback);
        //=====================================
        pub_reset = nh->advertise<std_msgs::Int32>("/reset", 10);
        isConnected = true;
      }

    void ros_task::run()
    {
      ros::Rate loop_rate(10);
      while(ros::ok())
      {
        // home by Enter 버튼 -> take_mode
        if (moving_close == 1)
        {
          Q_EMIT moving_ui();
          cout<<"From moving to take"<<endl;
          moving_close = 0;
        }

        ros::spinOnce();
        loop_rate.sleep();
      }
      ros::shutdown();
      std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }
    //===================================
    void ros_task::send_reset(){
      pub_reset.publish(num_reset);
    }

}// namespace 