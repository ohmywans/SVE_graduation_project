#include "moving/moving.h"
#include "moving/ros_task.h"
#include "moving/ui_moving.h"

#include <ros/ros.h>
#include <std_msgs/Int32.h>

#include <iostream>
#include <QMessageBox>
#include <sstream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <QtGui>
#include <QCoreApplication>

using namespace std;

namespace moving{

	moving::moving(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::moving)
	{
        if(qnode.init()) isConnected = true;

        // home by enter 버튼 -> move_mode 
        // ------home 에서 moving open 
        QObject::connect(&qnode, SIGNAL(home_ui()),this,SLOT(open_w1()));
        
        ui->setupUi(this);
        //QMainWindow::show();
        //QMainWindow::showFullScreen();
	}

	moving::~moving()
	{
	    delete ui;
	}
	void moving::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}

void moving::moving::close_w1()
{
    cout<< "in close_w1" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    //this->showFullScreen();
} 

// home by enter 버튼 -> move_mode 뜨게 하는 함수
// home -> move 
void moving::moving::open_w1()
{
    cout<< "in open_window 1, MOVE" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    //this->showFullScreen();
} 
// ======================================
// move -> home
void moving::moving::on_pb_back_clicked()
{
    moving::back = 1;
    qnode.num_back.data = moving::back;
    qnode.send_back();
    this->hide();
}

// ======================================
// move -> take
void moving::moving::on_pb_arrived_clicked()
{
    moving::take = 1;
    qnode.num_take.data = moving::take;
    qnode.send_take();
    this->hide();
}
// ======================================
