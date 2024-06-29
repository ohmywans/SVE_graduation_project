/********************************************************************************
** Form generated from reading UI file 'moving.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVING_H
#define UI_MOVING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_moving
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pb_back;
    QPushButton *pb_arrived;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *moving)
    {
        if (moving->objectName().isEmpty())
            moving->setObjectName(QString::fromUtf8("moving"));
        moving->resize(1920, 1080);
        centralWidget = new QWidget(moving);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(330, 890, 1261, 121));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_back = new QPushButton(gridLayoutWidget);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(30);
        font.setBold(false);
        font.setWeight(50);
        pb_back->setFont(font);

        gridLayout_2->addWidget(pb_back, 0, 0, 1, 1);

        pb_arrived = new QPushButton(gridLayoutWidget);
        pb_arrived->setObjectName(QString::fromUtf8("pb_arrived"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font1.setPointSize(30);
        font1.setItalic(false);
        pb_arrived->setFont(font1);

        gridLayout_2->addWidget(pb_arrived, 0, 1, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(330, 10, 1261, 111));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit->setFont(font2);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(330, 130, 1261, 761));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        moving->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(moving);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        moving->setStatusBar(statusBar);
        menuBar = new QMenuBar(moving);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 48));
        moving->setMenuBar(menuBar);

        retranslateUi(moving);

        QMetaObject::connectSlotsByName(moving);
    } // setupUi

    void retranslateUi(QMainWindow *moving)
    {
        moving->setWindowTitle(QApplication::translate("moving", "moving", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pb_back->setToolTip(QApplication::translate("moving", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:600;\">Deliver</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pb_back->setText(QApplication::translate("moving", "Back to home", 0, QApplication::UnicodeUTF8));
        pb_arrived->setText(QApplication::translate("moving", "Arrived ", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("moving", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:18pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">Robot is moving . . .</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class moving: public Ui_moving {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVING_H
