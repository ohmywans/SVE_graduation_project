/********************************************************************************
** Form generated from reading UI file 'take.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKE_H
#define UI_TAKE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_take
{
public:
    QWidget *centralWidget;
    QPushButton *pb_reset;
    QLineEdit *lineEdit_24;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *take)
    {
        if (take->objectName().isEmpty())
            take->setObjectName(QString::fromUtf8("take"));
        take->resize(1920, 1080);
        centralWidget = new QWidget(take);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pb_reset = new QPushButton(centralWidget);
        pb_reset->setObjectName(QString::fromUtf8("pb_reset"));
        pb_reset->setGeometry(QRect(70, 0, 1781, 991));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(100);
        font.setBold(true);
        font.setWeight(75);
        pb_reset->setFont(font);
        lineEdit_24 = new QLineEdit(centralWidget);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(230, 860, 1491, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(30);
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit_24->setFont(font1);
        lineEdit_24->setAlignment(Qt::AlignCenter);
        take->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(take);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        take->setStatusBar(statusBar);
        menuBar = new QMenuBar(take);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 37));
        take->setMenuBar(menuBar);

        retranslateUi(take);

        QMetaObject::connectSlotsByName(take);
    } // setupUi

    void retranslateUi(QMainWindow *take)
    {
        take->setWindowTitle(QApplication::translate("take", "take", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pb_reset->setToolTip(QApplication::translate("take", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:600;\">Deliver</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pb_reset->setText(QApplication::translate("take", "Thank you for your order ! ", 0, QApplication::UnicodeUTF8));
        lineEdit_24->setText(QApplication::translate("take", "Please touch the screen to confirm receipt and return.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class take: public Ui_take {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKE_H
