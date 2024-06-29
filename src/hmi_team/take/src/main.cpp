#include "take/take.h"
#include "take/ui_take.h"
#include "take/ros_task.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    take::take w(argc,argv);
    //w.show();
    //w.showFullScreen();

    return a.exec();
}