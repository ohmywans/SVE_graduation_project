#include <ros/ros.h>
#include <ros/network.h>
#include <std_msgs/Int32.h>
#include "moving/ros_task.h"
#include <iostream>
using namespace std;

namespace moving{

  bool home_close = 0;

    // home로부터 받는 콜백함수
    void sub_home_callback(const std_msgs::Int32::ConstPtr& msg)
    {
      ROS_INFO("home Window_close");
      ROS_INFO("This is move Window");
      home_close = 1; 
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
      ros::init(init_argc,init_argv,"move_mode");
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
        nh = new ros::NodeHandle("move_mode");

        // home by Enter 버튼 -> move_mode
        sub_move_mode =nh->subscribe("/moving", 10, sub_home_callback);
        //=====================================
        pub_back = nh->advertise<std_msgs::Int32>("/back", 10);
        pub_take = nh->advertise<std_msgs::Int32>("/take", 10);
        
        isConnected = true;
      }

    void ros_task::run()
    {
      ros::Rate loop_rate(10);
      while(ros::ok())
      {
        // home by Enter 버튼 -> move_mode
        if (home_close == 1)
        {
          Q_EMIT home_ui();
          cout<<"From home to move"<<endl;
          home_close = 0;
        }

        ros::spinOnce();
        loop_rate.sleep();
      }
      ros::shutdown();
      std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }
    //===================================
    void ros_task::send_back(){
      pub_back.publish(num_back);
    }
    //===================================
    void ros_task::send_take(){
      pub_take.publish(num_take);
    }

}// namespace 