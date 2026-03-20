/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *cpuTempLabel;
    QLabel *gpuTempLabel;
    QLabel *cpuFanLabel;
    QLabel *gpuFanLabel;
    QLabel *modeLabel;
    QPushButton *balancedButton;
    QPushButton *performanceButton;
    QPushButton *ecoButton;
    QLabel *label;
    QLabel *balancedActStatus;
    QLabel *ecoActStatus;
    QLabel *performanceActStatus;
    QMenuBar *menubar;
    QMenu *menuOMEN_HW_MONITOR;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        cpuTempLabel = new QLabel(centralwidget);
        cpuTempLabel->setObjectName("cpuTempLabel");
        cpuTempLabel->setGeometry(QRect(100, 90, 91, 20));
        gpuTempLabel = new QLabel(centralwidget);
        gpuTempLabel->setObjectName("gpuTempLabel");
        gpuTempLabel->setGeometry(QRect(100, 120, 91, 20));
        cpuFanLabel = new QLabel(centralwidget);
        cpuFanLabel->setObjectName("cpuFanLabel");
        cpuFanLabel->setGeometry(QRect(100, 150, 111, 20));
        gpuFanLabel = new QLabel(centralwidget);
        gpuFanLabel->setObjectName("gpuFanLabel");
        gpuFanLabel->setGeometry(QRect(100, 180, 111, 20));
        modeLabel = new QLabel(centralwidget);
        modeLabel->setObjectName("modeLabel");
        modeLabel->setGeometry(QRect(100, 240, 151, 20));
        balancedButton = new QPushButton(centralwidget);
        balancedButton->setObjectName("balancedButton");
        balancedButton->setGeometry(QRect(280, 370, 121, 29));
        performanceButton = new QPushButton(centralwidget);
        performanceButton->setObjectName("performanceButton");
        performanceButton->setGeometry(QRect(430, 370, 151, 29));
        ecoButton = new QPushButton(centralwidget);
        ecoButton->setObjectName("ecoButton");
        ecoButton->setGeometry(QRect(160, 370, 90, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 401, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        balancedActStatus = new QLabel(centralwidget);
        balancedActStatus->setObjectName("balancedActStatus");
        balancedActStatus->setGeometry(QRect(310, 400, 51, 20));
        ecoActStatus = new QLabel(centralwidget);
        ecoActStatus->setObjectName("ecoActStatus");
        ecoActStatus->setGeometry(QRect(180, 400, 51, 20));
        performanceActStatus = new QLabel(centralwidget);
        performanceActStatus->setObjectName("performanceActStatus");
        performanceActStatus->setGeometry(QRect(480, 400, 51, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuOMEN_HW_MONITOR = new QMenu(menubar);
        menuOMEN_HW_MONITOR->setObjectName("menuOMEN_HW_MONITOR");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOMEN_HW_MONITOR->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        cpuTempLabel->setText(QCoreApplication::translate("MainWindow", "CPU Temp: ", nullptr));
        gpuTempLabel->setText(QCoreApplication::translate("MainWindow", "GPU Temp: ", nullptr));
        cpuFanLabel->setText(QCoreApplication::translate("MainWindow", "CPU Fan: ", nullptr));
        gpuFanLabel->setText(QCoreApplication::translate("MainWindow", "GPU Fan: ", nullptr));
        modeLabel->setText(QCoreApplication::translate("MainWindow", "Mode: ", nullptr));
        balancedButton->setText(QCoreApplication::translate("MainWindow", "Balanced Mode", nullptr));
        performanceButton->setText(QCoreApplication::translate("MainWindow", "Performance Mode", nullptr));
        ecoButton->setText(QCoreApplication::translate("MainWindow", "Eco Mode", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "OMEN CONTROL CENTER", nullptr));
        balancedActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ecoActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        performanceActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        menuOMEN_HW_MONITOR->setTitle(QCoreApplication::translate("MainWindow", "OMEN HW MONITOR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
