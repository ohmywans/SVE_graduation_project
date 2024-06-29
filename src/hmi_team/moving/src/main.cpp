#include "moving/moving.h"
#include "moving/ui_moving.h"
#include "moving/ros_task.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    moving::moving w(argc,argv);
    //w.show();
    //w.showFullScreen();

    return a.exec();
}