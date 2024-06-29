#include "home/home.h"
#include "home/ros_task.h"
#include "home/ui_home.h"

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

namespace home{

	home::home(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::home)
	{
		if(qnode.init()) isConnected = true;

		QObject::connect(&qnode, SIGNAL(moving_ui()),this,SLOT(open_home()));   // moving -> home (back)
        QObject::connect(&qnode, SIGNAL(take_ui()),this,SLOT(open_home()));     // take -> home (reset)
		
		ui->setupUi(this);
   	}

	home::~home()
	{
	    delete ui;
	}
	void home::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}
//=================================================
void home::home::open_home(){
	cout << "in home window" << endl;
    this->show();
}
//================================================
// floor button 클릭하면 text 표시 
void home::home::on_pb_B1F_clicked()
{
    ui->floor_status->setText("B1F"); 
}
void home::home::on_pb_1F_clicked()
{
    ui->floor_status->setText("1F");
}
void home::home::on_pb_2F_clicked()
{
    ui->floor_status->setText("2F");
}
void home::home::on_pb_3F_clicked()
{
    ui->floor_status->setText("3F");
}
void home::home::on_pb_4F_clicked()
{
    ui->floor_status->setText("4F");
}
void home::home::on_pb_5F_clicked()
{
    ui->floor_status->setText("5F");
}
void home::home::on_pb_6F_clicked()
{
    ui->floor_status->setText("6F");
}
void home::home::on_pb_7F_clicked()
{
    ui->floor_status->setText("7F");
}
void home::home::on_pb_8F_clicked()
{
    ui->floor_status->setText("8F");
}
void home::home::on_pb_9F_clicked()
{
    ui->floor_status->setText("9F");
}
void home::home::on_pb_10F_clicked()
{
    ui->floor_status->setText("10F");
}
void home::home::on_pb_11F_clicked()
{
    ui->floor_status->setText("11F");
}
// ================================== 
// door button 클릭하면 text 표시 
void home::home::on_pb_01_clicked()
{
    ui->door_status->setText("B101");
}
void home::home::on_pb_02_clicked()
{
    ui->door_status->setText("B102");
}
void home::home::on_pb_03_clicked()
{
    ui->door_status->setText("B103");
}
void home::home::on_pb_04_clicked()
{
    ui->door_status->setText("B104");
}
void home::home::on_pb_05_clicked()
{
    ui->door_status->setText("B105");
}
void home::home::on_pb_06_clicked()
{
    ui->door_status->setText("B106");
}
// ================================== 
void home::home::on_pb_check_clicked()
{
    QString floor = ui->floor_status->text();
	QString door = ui->door_status->text();

	if (floor == "B1F" && door == "B106") {     // B1F && B106 이면 moving ui로 전환 
		home::moving = 1;
		qnode.num_moving.data = home::moving;
		qnode.send_moving();
		this->hide();  
	}

	ui->floor_status->setText("");
	ui->door_status->setText("");

    qnode.publishCheckMessage();    // check 버튼 누르면 토픽에 메시지 발행

}