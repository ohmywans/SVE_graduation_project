#ifndef MERRY_WIN_H
#define MERRY_WIN_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>
#include <iostream>
#include <sstream>

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include "moving/ros_task.h"
#include "moving/ui_moving.h"

using namespace std;

#endif

namespace moving {

	class moving : public QMainWindow
	{
	    Q_OBJECT

	public:
	    explicit moving(int argc, char** argv, QWidget *parent = 0);
	    ~moving();
	    void shownoROSmaster();

	public Q_SLOTS:
	    void close_w1();
	    void open_w1();

		void on_pb_back_clicked();
		void on_pb_arrived_clicked();
	//==================================
	private:
	    Ui::moving *ui;
	    ros_task qnode;
	    bool isConnected;
		
	public:
		int back;
		int take;
		//==============================
	};
}
#endif // MERRY_WIN_H