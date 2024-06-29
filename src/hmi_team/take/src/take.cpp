#include "take/take.h"
#include "take/ros_task.h"
#include "take/ui_take.h"

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

namespace take{

	take::take(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::take)
	{
        if(qnode.init()) isConnected = true;

        // ------moving 에서 take open 
        QObject::connect(&qnode, SIGNAL(moving_ui()),this,SLOT(open_take()));

        
        ui->setupUi(this);
        //QMainWindow::show();
        //QMainWindow::showFullScreen();
	}

	take::~take()
	{
	    delete ui;
	}
	void take::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}

void take::take::close_take()
{
    cout<< "in close_take" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    //this->showFullScreen();
} 

// move -> take 
void take::take::open_take()
{
    cout<< "in open_take, MOVE" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    //this->showFullScreen();
} 

// ======================================

// take -> home
void take::take::on_pb_reset_clicked()
{
    take::reset = 1;
    qnode.num_reset.data = take::reset;
    qnode.send_reset();
    this->hide();
}


