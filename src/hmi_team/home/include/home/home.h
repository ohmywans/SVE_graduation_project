#ifndef HOME_H
#define HOME_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <iostream>
#include <sstream>
#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>

#include "home/ros_task.h"
#include "home/ui_home.h"

using namespace std;
#endif

namespace home {

    class home : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit home(int argc, char** argv, QWidget *parent = 0);
        ~home();
        void shownoROSmaster();

    private Q_SLOTS:

    public Q_SLOTS:
        void open_home();
        
        void on_pb_B1F_clicked();
		void on_pb_1F_clicked();
		void on_pb_2F_clicked();
		void on_pb_3F_clicked();
		void on_pb_4F_clicked();
		void on_pb_5F_clicked();
		void on_pb_6F_clicked();
		void on_pb_7F_clicked();
		void on_pb_8F_clicked();
		void on_pb_9F_clicked();
        void on_pb_10F_clicked();
        void on_pb_11F_clicked();

        void on_pb_01_clicked();
        void on_pb_02_clicked();
        void on_pb_03_clicked();
        void on_pb_04_clicked();
        void on_pb_05_clicked();
        void on_pb_06_clicked();

		void on_pb_check_clicked();

    private:
        Ui::home *ui;
        ros_task qnode;
        bool isConnected;   
        
    public:
        int moving;       
        
    };
}
#endif // HOME_H