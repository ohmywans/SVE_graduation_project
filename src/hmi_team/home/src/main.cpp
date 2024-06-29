#include "home/home.h"
#include "ui_admin_ui.h"
#include "home/ros_task.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    home::home w(argc,argv);
    w.show();

    return a.exec();
}