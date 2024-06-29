#include <ros/ros.h>
#include <ros/network.h>
#include <std_msgs/Int32.h>
#include "home/ros_task.h"
#include <iostream>
using namespace std;

namespace home {
  
    bool moving_close = 0;    // moving -> home (back)

    //moving에서 받는 callback 함수
    void sub_moving_callback(const std_msgs::Int32::ConstPtr& msg) {
      ROS_INFO("moving Window_close");
      ROS_INFO("This is a HOME Window");
      moving_close = 1; 
    }

    bool take_close = 0;    // take -> home (reset) 

    //take에서 받는 callback 함수
    void sub_take_callback(const std_msgs::Int32::ConstPtr& msg) {
      ROS_INFO("take Window_close");
      ROS_INFO("This is a HOME Window");
      take_close = 1; 
    }

    //=========================================
    ros_task::ros_task(int argc, char** argv) :
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
      ros::init(init_argc,init_argv,"home");
      if ( ! ros::master::check() )  //로스 마스터와의 연결상태 확인 
      {
        return false;
      }
      init_nh();
      ros::start(); // 노드 시작 
      start();  // 노드 작업 시작
      return true;
    }

    void ros_task::init_nh()
      {
        nh = new ros::NodeHandle("home");

        //================================
        pub_moving = nh->advertise<std_msgs::Int32>("/moving", 10);

        sub_moving_mode = nh->subscribe("/back", 10, sub_moving_callback);
        sub_take_mode = nh->subscribe("/reset", 10, sub_take_callback);
        //================================
        isConnected = true;
      }

    void ros_task::run()
    {
      ros::Rate loop_rate(10);
      while(ros::ok())
      {
        //===============================
        if (moving_close == 1)      //moving -> home
        {
          Q_EMIT moving_ui();
          cout<<"From move to home"<<endl;
          moving_close = 0;
        }

        if (take_close == 1)        //take -> home
        {
          Q_EMIT take_ui();
          cout<<"From take to home"<<endl;
          take_close = 0;
        }
        //===============================
        ros::spinOnce();
        loop_rate.sleep();
      }
      ros::shutdown();
      std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }

    // publish moving
    void ros_task::send_moving()
    {
      pub_moving.publish(num_moving);
    }

    // publish data 1
    void ros_task::publishCheckMessage()
    {   
      std_msgs::Int32 msg;
      msg.data = 1;
      pub_moving.publish(msg);
    }

}// namespace 