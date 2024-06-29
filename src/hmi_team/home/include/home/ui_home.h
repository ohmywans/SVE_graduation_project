/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLineEdit *floor_status;
    QLineEdit *door_status;
    QWidget *formLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QPushButton *pb_04;
    QPushButton *pb_01;
    QPushButton *pb_03;
    QPushButton *pb_02;
    QPushButton *pb_06;
    QPushButton *pb_05;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_food;
    QRadioButton *rb_package;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pb_2F;
    QPushButton *pb_3F;
    QPushButton *pb_6F;
    QPushButton *pb_B1F;
    QPushButton *pb_4F;
    QPushButton *pb_11F;
    QPushButton *pb_5F;
    QPushButton *pb_10F;
    QPushButton *pb_9F;
    QPushButton *pb_1F;
    QPushButton *pb_8F;
    QPushButton *pb_7F;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pb_check;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QString::fromUtf8("home"));
        home->resize(1920, 1080);
        centralWidget = new QWidget(home);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(200, 100, 1521, 101));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        floor_status = new QLineEdit(gridLayoutWidget);
        floor_status->setObjectName(QString::fromUtf8("floor_status"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(floor_status->sizePolicy().hasHeightForWidth());
        floor_status->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(28);
        floor_status->setFont(font);
        floor_status->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(floor_status, 0, 0, 1, 1);

        door_status = new QLineEdit(gridLayoutWidget);
        door_status->setObjectName(QString::fromUtf8("door_status"));
        sizePolicy.setHeightForWidth(door_status->sizePolicy().hasHeightForWidth());
        door_status->setSizePolicy(sizePolicy);
        door_status->setFont(font);
        door_status->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(door_status, 0, 1, 1, 1);

        formLayoutWidget_3 = new QWidget(centralWidget);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(970, 210, 751, 671));
        gridLayout_4 = new QGridLayout(formLayoutWidget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pb_04 = new QPushButton(formLayoutWidget_3);
        pb_04->setObjectName(QString::fromUtf8("pb_04"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_04->sizePolicy().hasHeightForWidth());
        pb_04->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(30);
        font1.setBold(false);
        font1.setWeight(50);
        pb_04->setFont(font1);
        pb_04->setAutoFillBackground(false);
        pb_04->setAutoExclusive(false);
        pb_04->setAutoDefault(false);
        pb_04->setDefault(false);
        pb_04->setFlat(false);

        gridLayout_4->addWidget(pb_04, 1, 1, 1, 1);

        pb_01 = new QPushButton(formLayoutWidget_3);
        pb_01->setObjectName(QString::fromUtf8("pb_01"));
        sizePolicy1.setHeightForWidth(pb_01->sizePolicy().hasHeightForWidth());
        pb_01->setSizePolicy(sizePolicy1);
        pb_01->setFont(font1);
        pb_01->setAutoFillBackground(false);
        pb_01->setAutoExclusive(false);
        pb_01->setAutoDefault(false);
        pb_01->setDefault(false);
        pb_01->setFlat(false);

        gridLayout_4->addWidget(pb_01, 0, 0, 1, 1);

        pb_03 = new QPushButton(formLayoutWidget_3);
        pb_03->setObjectName(QString::fromUtf8("pb_03"));
        sizePolicy1.setHeightForWidth(pb_03->sizePolicy().hasHeightForWidth());
        pb_03->setSizePolicy(sizePolicy1);
        pb_03->setFont(font1);
        pb_03->setAutoFillBackground(false);
        pb_03->setAutoExclusive(false);
        pb_03->setAutoDefault(false);
        pb_03->setDefault(false);
        pb_03->setFlat(false);

        gridLayout_4->addWidget(pb_03, 1, 0, 1, 1);

        pb_02 = new QPushButton(formLayoutWidget_3);
        pb_02->setObjectName(QString::fromUtf8("pb_02"));
        sizePolicy1.setHeightForWidth(pb_02->sizePolicy().hasHeightForWidth());
        pb_02->setSizePolicy(sizePolicy1);
        pb_02->setFont(font1);
        pb_02->setAutoFillBackground(false);
        pb_02->setAutoExclusive(false);
        pb_02->setAutoDefault(false);
        pb_02->setDefault(false);
        pb_02->setFlat(false);

        gridLayout_4->addWidget(pb_02, 0, 1, 1, 1);

        pb_06 = new QPushButton(formLayoutWidget_3);
        pb_06->setObjectName(QString::fromUtf8("pb_06"));
        sizePolicy1.setHeightForWidth(pb_06->sizePolicy().hasHeightForWidth());
        pb_06->setSizePolicy(sizePolicy1);
        pb_06->setFont(font1);
        pb_06->setAutoFillBackground(false);
        pb_06->setAutoExclusive(false);
        pb_06->setAutoDefault(false);
        pb_06->setDefault(false);
        pb_06->setFlat(false);

        gridLayout_4->addWidget(pb_06, 2, 1, 1, 1);

        pb_05 = new QPushButton(formLayoutWidget_3);
        pb_05->setObjectName(QString::fromUtf8("pb_05"));
        sizePolicy1.setHeightForWidth(pb_05->sizePolicy().hasHeightForWidth());
        pb_05->setSizePolicy(sizePolicy1);
        pb_05->setFont(font1);
        pb_05->setAutoFillBackground(false);
        pb_05->setAutoExclusive(false);
        pb_05->setAutoDefault(false);
        pb_05->setDefault(false);
        pb_05->setFlat(false);

        gridLayout_4->addWidget(pb_05, 2, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 10, 1521, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rb_food = new QRadioButton(horizontalLayoutWidget);
        rb_food->setObjectName(QString::fromUtf8("rb_food"));
        QFont font2;
        font2.setPointSize(32);
        rb_food->setFont(font2);
        rb_food->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(rb_food, 0, Qt::AlignHCenter);

        rb_package = new QRadioButton(horizontalLayoutWidget);
        rb_package->setObjectName(QString::fromUtf8("rb_package"));
        rb_package->setFont(font2);

        horizontalLayout->addWidget(rb_package, 0, Qt::AlignHCenter);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(200, 210, 761, 801));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_2F = new QPushButton(gridLayoutWidget_2);
        pb_2F->setObjectName(QString::fromUtf8("pb_2F"));
        sizePolicy1.setHeightForWidth(pb_2F->sizePolicy().hasHeightForWidth());
        pb_2F->setSizePolicy(sizePolicy1);
        pb_2F->setMinimumSize(QSize(287, 54));
        pb_2F->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setWeight(50);
        pb_2F->setFont(font3);
        pb_2F->setAutoFillBackground(false);
        pb_2F->setAutoExclusive(false);
        pb_2F->setAutoDefault(false);
        pb_2F->setDefault(false);
        pb_2F->setFlat(false);

        gridLayout_2->addWidget(pb_2F, 1, 0, 1, 1);

        pb_3F = new QPushButton(gridLayoutWidget_2);
        pb_3F->setObjectName(QString::fromUtf8("pb_3F"));
        sizePolicy1.setHeightForWidth(pb_3F->sizePolicy().hasHeightForWidth());
        pb_3F->setSizePolicy(sizePolicy1);
        pb_3F->setMinimumSize(QSize(287, 54));
        pb_3F->setMaximumSize(QSize(16777215, 16777215));
        pb_3F->setFont(font3);
        pb_3F->setAutoFillBackground(false);
        pb_3F->setAutoExclusive(false);
        pb_3F->setAutoDefault(false);
        pb_3F->setDefault(false);
        pb_3F->setFlat(false);

        gridLayout_2->addWidget(pb_3F, 1, 1, 1, 1);

        pb_6F = new QPushButton(gridLayoutWidget_2);
        pb_6F->setObjectName(QString::fromUtf8("pb_6F"));
        sizePolicy1.setHeightForWidth(pb_6F->sizePolicy().hasHeightForWidth());
        pb_6F->setSizePolicy(sizePolicy1);
        pb_6F->setMinimumSize(QSize(287, 54));
        pb_6F->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("DejaVu Sans"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        pb_6F->setFont(font4);
        pb_6F->setAutoFillBackground(false);
        pb_6F->setAutoExclusive(false);
        pb_6F->setAutoDefault(false);
        pb_6F->setDefault(false);
        pb_6F->setFlat(false);

        gridLayout_2->addWidget(pb_6F, 3, 0, 1, 1);

        pb_B1F = new QPushButton(gridLayoutWidget_2);
        pb_B1F->setObjectName(QString::fromUtf8("pb_B1F"));
        sizePolicy1.setHeightForWidth(pb_B1F->sizePolicy().hasHeightForWidth());
        pb_B1F->setSizePolicy(sizePolicy1);
        pb_B1F->setMinimumSize(QSize(286, 54));
        pb_B1F->setMaximumSize(QSize(16777215, 16777215));
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans"));
        font5.setPointSize(25);
        font5.setBold(false);
        font5.setWeight(50);
        pb_B1F->setFont(font5);
        pb_B1F->setAutoFillBackground(false);
        pb_B1F->setAutoExclusive(false);
        pb_B1F->setAutoDefault(false);
        pb_B1F->setDefault(false);
        pb_B1F->setFlat(false);

        gridLayout_2->addWidget(pb_B1F, 0, 0, 1, 1);

        pb_4F = new QPushButton(gridLayoutWidget_2);
        pb_4F->setObjectName(QString::fromUtf8("pb_4F"));
        sizePolicy1.setHeightForWidth(pb_4F->sizePolicy().hasHeightForWidth());
        pb_4F->setSizePolicy(sizePolicy1);
        pb_4F->setMinimumSize(QSize(287, 54));
        pb_4F->setMaximumSize(QSize(16777215, 16777215));
        pb_4F->setFont(font3);
        pb_4F->setAutoFillBackground(false);
        pb_4F->setAutoExclusive(false);
        pb_4F->setAutoDefault(false);
        pb_4F->setDefault(false);
        pb_4F->setFlat(false);

        gridLayout_2->addWidget(pb_4F, 2, 0, 1, 1);

        pb_11F = new QPushButton(gridLayoutWidget_2);
        pb_11F->setObjectName(QString::fromUtf8("pb_11F"));
        sizePolicy1.setHeightForWidth(pb_11F->sizePolicy().hasHeightForWidth());
        pb_11F->setSizePolicy(sizePolicy1);
        pb_11F->setMinimumSize(QSize(286, 54));
        pb_11F->setMaximumSize(QSize(16777215, 16777215));
        pb_11F->setFont(font3);
        pb_11F->setAutoFillBackground(false);
        pb_11F->setAutoExclusive(false);
        pb_11F->setAutoDefault(false);
        pb_11F->setDefault(false);
        pb_11F->setFlat(false);

        gridLayout_2->addWidget(pb_11F, 5, 1, 1, 1);

        pb_5F = new QPushButton(gridLayoutWidget_2);
        pb_5F->setObjectName(QString::fromUtf8("pb_5F"));
        sizePolicy1.setHeightForWidth(pb_5F->sizePolicy().hasHeightForWidth());
        pb_5F->setSizePolicy(sizePolicy1);
        pb_5F->setMinimumSize(QSize(286, 54));
        pb_5F->setMaximumSize(QSize(16777215, 16777215));
        pb_5F->setFont(font3);
        pb_5F->setAutoFillBackground(false);
        pb_5F->setAutoExclusive(false);
        pb_5F->setAutoDefault(false);
        pb_5F->setDefault(false);
        pb_5F->setFlat(false);

        gridLayout_2->addWidget(pb_5F, 2, 1, 1, 1);

        pb_10F = new QPushButton(gridLayoutWidget_2);
        pb_10F->setObjectName(QString::fromUtf8("pb_10F"));
        sizePolicy1.setHeightForWidth(pb_10F->sizePolicy().hasHeightForWidth());
        pb_10F->setSizePolicy(sizePolicy1);
        pb_10F->setMinimumSize(QSize(287, 54));
        pb_10F->setMaximumSize(QSize(16777215, 16777215));
        pb_10F->setFont(font3);
        pb_10F->setAutoFillBackground(false);
        pb_10F->setAutoExclusive(false);
        pb_10F->setAutoDefault(false);
        pb_10F->setDefault(false);
        pb_10F->setFlat(false);

        gridLayout_2->addWidget(pb_10F, 5, 0, 1, 1);

        pb_9F = new QPushButton(gridLayoutWidget_2);
        pb_9F->setObjectName(QString::fromUtf8("pb_9F"));
        sizePolicy1.setHeightForWidth(pb_9F->sizePolicy().hasHeightForWidth());
        pb_9F->setSizePolicy(sizePolicy1);
        pb_9F->setMinimumSize(QSize(286, 54));
        pb_9F->setMaximumSize(QSize(16777215, 16777215));
        pb_9F->setFont(font3);
        pb_9F->setAutoFillBackground(false);
        pb_9F->setAutoExclusive(false);
        pb_9F->setAutoDefault(false);
        pb_9F->setDefault(false);
        pb_9F->setFlat(false);

        gridLayout_2->addWidget(pb_9F, 4, 1, 1, 1);

        pb_1F = new QPushButton(gridLayoutWidget_2);
        pb_1F->setObjectName(QString::fromUtf8("pb_1F"));
        sizePolicy1.setHeightForWidth(pb_1F->sizePolicy().hasHeightForWidth());
        pb_1F->setSizePolicy(sizePolicy1);
        pb_1F->setMinimumSize(QSize(287, 54));
        pb_1F->setMaximumSize(QSize(16777215, 16777215));
        pb_1F->setFont(font5);
        pb_1F->setAutoFillBackground(false);
        pb_1F->setAutoExclusive(false);
        pb_1F->setAutoDefault(false);
        pb_1F->setDefault(false);
        pb_1F->setFlat(false);

        gridLayout_2->addWidget(pb_1F, 0, 1, 1, 1);

        pb_8F = new QPushButton(gridLayoutWidget_2);
        pb_8F->setObjectName(QString::fromUtf8("pb_8F"));
        sizePolicy1.setHeightForWidth(pb_8F->sizePolicy().hasHeightForWidth());
        pb_8F->setSizePolicy(sizePolicy1);
        pb_8F->setMinimumSize(QSize(287, 54));
        pb_8F->setMaximumSize(QSize(16777215, 16777215));
        pb_8F->setFont(font3);
        pb_8F->setAutoFillBackground(false);
        pb_8F->setAutoExclusive(false);
        pb_8F->setAutoDefault(false);
        pb_8F->setDefault(false);
        pb_8F->setFlat(false);

        gridLayout_2->addWidget(pb_8F, 4, 0, 1, 1);

        pb_7F = new QPushButton(gridLayoutWidget_2);
        pb_7F->setObjectName(QString::fromUtf8("pb_7F"));
        sizePolicy1.setHeightForWidth(pb_7F->sizePolicy().hasHeightForWidth());
        pb_7F->setSizePolicy(sizePolicy1);
        pb_7F->setMinimumSize(QSize(286, 54));
        pb_7F->setMaximumSize(QSize(16777215, 16777215));
        pb_7F->setFont(font4);
        pb_7F->setAutoFillBackground(false);
        pb_7F->setAutoExclusive(false);
        pb_7F->setAutoDefault(false);
        pb_7F->setDefault(false);
        pb_7F->setFlat(false);

        gridLayout_2->addWidget(pb_7F, 3, 1, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(970, 880, 751, 131));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_check = new QPushButton(horizontalLayoutWidget_2);
        pb_check->setObjectName(QString::fromUtf8("pb_check"));
        sizePolicy1.setHeightForWidth(pb_check->sizePolicy().hasHeightForWidth());
        pb_check->setSizePolicy(sizePolicy1);
        pb_check->setMinimumSize(QSize(287, 54));
        pb_check->setMaximumSize(QSize(16777215, 16777215));
        pb_check->setFont(font1);
        pb_check->setAutoFillBackground(false);
        pb_check->setAutoExclusive(false);
        pb_check->setAutoDefault(false);
        pb_check->setDefault(false);
        pb_check->setFlat(false);

        horizontalLayout_2->addWidget(pb_check);

        home->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(home);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 20));
        home->setMenuBar(menuBar);
        mainToolBar = new QToolBar(home);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        home->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(home);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        home->setStatusBar(statusBar);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QApplication::translate("home", "home", 0, QApplication::UnicodeUTF8));
        pb_04->setText(QApplication::translate("home", "B104", 0, QApplication::UnicodeUTF8));
        pb_01->setText(QApplication::translate("home", "B101", 0, QApplication::UnicodeUTF8));
        pb_03->setText(QApplication::translate("home", "B103", 0, QApplication::UnicodeUTF8));
        pb_02->setText(QApplication::translate("home", "B102", 0, QApplication::UnicodeUTF8));
        pb_06->setText(QApplication::translate("home", "B106", 0, QApplication::UnicodeUTF8));
        pb_05->setText(QApplication::translate("home", "B105", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rb_food->setToolTip(QApplication::translate("home", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600;\">Food</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rb_food->setText(QApplication::translate("home", "Food", 0, QApplication::UnicodeUTF8));
        rb_package->setText(QApplication::translate("home", "Package", 0, QApplication::UnicodeUTF8));
        pb_2F->setText(QApplication::translate("home", "2F\n"
" Mechanical Engineering", 0, QApplication::UnicodeUTF8));
        pb_3F->setText(QApplication::translate("home", "3F\n"
" Mechanical Engineering", 0, QApplication::UnicodeUTF8));
        pb_6F->setText(QApplication::translate("home", "6F\n"
" Electrical&&Electronic Engineering", 0, QApplication::UnicodeUTF8));
        pb_B1F->setText(QApplication::translate("home", "B1F", 0, QApplication::UnicodeUTF8));
        pb_4F->setText(QApplication::translate("home", "4F\n"
" Mechanical Engineering", 0, QApplication::UnicodeUTF8));
        pb_11F->setText(QApplication::translate("home", "11F\n"
" Computer Engineering", 0, QApplication::UnicodeUTF8));
        pb_5F->setText(QApplication::translate("home", "5F \n"
"Mechanical Engineering", 0, QApplication::UnicodeUTF8));
        pb_10F->setText(QApplication::translate("home", "10F\n"
" Industrial Engineering", 0, QApplication::UnicodeUTF8));
        pb_9F->setText(QApplication::translate("home", "9F \n"
" Chemical Engineering", 0, QApplication::UnicodeUTF8));
        pb_1F->setText(QApplication::translate("home", "1F Lobby", 0, QApplication::UnicodeUTF8));
        pb_8F->setText(QApplication::translate("home", "8F\n"
" Chemical Engineering", 0, QApplication::UnicodeUTF8));
        pb_7F->setText(QApplication::translate("home", "7F \n"
" Electrical&&Electronic Engineering", 0, QApplication::UnicodeUTF8));
        pb_check->setText(QApplication::translate("home", "CHECK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
