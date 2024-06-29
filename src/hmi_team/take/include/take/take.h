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
#include "take/ros_task.h"
#include "take/ui_take.h"

using namespace std;

#endif

namespace take {

	class take : public QMainWindow
	{
	    Q_OBJECT

	public:
	    explicit take(int argc, char** argv, QWidget *parent = 0);
	    ~take();
	    void shownoROSmaster();

	public Q_SLOTS:
	    void open_take();
		void close_take();

		void on_pb_reset_clicked();
	//==================================
	private:
	    Ui::take *ui;
	    ros_task qnode;
	    bool isConnected;
		
	public:
		int reset;
		//==============================
	};
}
#endif // MERRY_WIN_H