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
#include <QtWidgets/QCheckBox>
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
    QLabel *ultPerformanceActStatus;
    QPushButton *ultPerformanceButton;
    QLabel *adminStatus;
    QPushButton *runAsAdminButton;
    QCheckBox *syncPowerSchemeCheckBox;
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
        balancedButton->setGeometry(QRect(190, 370, 121, 29));
        performanceButton = new QPushButton(centralwidget);
        performanceButton->setObjectName("performanceButton");
        performanceButton->setGeometry(QRect(340, 370, 151, 29));
        ecoButton = new QPushButton(centralwidget);
        ecoButton->setObjectName("ecoButton");
        ecoButton->setGeometry(QRect(70, 370, 90, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 401, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        balancedActStatus = new QLabel(centralwidget);
        balancedActStatus->setObjectName("balancedActStatus");
        balancedActStatus->setGeometry(QRect(220, 400, 51, 20));
        ecoActStatus = new QLabel(centralwidget);
        ecoActStatus->setObjectName("ecoActStatus");
        ecoActStatus->setGeometry(QRect(90, 400, 51, 20));
        performanceActStatus = new QLabel(centralwidget);
        performanceActStatus->setObjectName("performanceActStatus");
        performanceActStatus->setGeometry(QRect(390, 400, 51, 20));
        ultPerformanceActStatus = new QLabel(centralwidget);
        ultPerformanceActStatus->setObjectName("ultPerformanceActStatus");
        ultPerformanceActStatus->setGeometry(QRect(590, 400, 51, 20));
        ultPerformanceButton = new QPushButton(centralwidget);
        ultPerformanceButton->setObjectName("ultPerformanceButton");
        ultPerformanceButton->setGeometry(QRect(520, 370, 201, 29));
        adminStatus = new QLabel(centralwidget);
        adminStatus->setObjectName("adminStatus");
        adminStatus->setGeometry(QRect(640, 50, 131, 20));
        runAsAdminButton = new QPushButton(centralwidget);
        runAsAdminButton->setObjectName("runAsAdminButton");
        runAsAdminButton->setGeometry(QRect(680, 10, 101, 29));
        syncPowerSchemeCheckBox = new QCheckBox(centralwidget);
        syncPowerSchemeCheckBox->setObjectName("syncPowerSchemeCheckBox");
        syncPowerSchemeCheckBox->setGeometry(QRect(100, 270, 161, 25));
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
        ultPerformanceActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ultPerformanceButton->setText(QCoreApplication::translate("MainWindow", "Ultimate Performance Mode", nullptr));
        adminStatus->setText(QCoreApplication::translate("MainWindow", "Admin Status:", nullptr));
        runAsAdminButton->setText(QCoreApplication::translate("MainWindow", "Run As Admin", nullptr));
        syncPowerSchemeCheckBox->setText(QCoreApplication::translate("MainWindow", "Sync Power Scheme", nullptr));
        menuOMEN_HW_MONITOR->setTitle(QCoreApplication::translate("MainWindow", "OMEN HW MONITOR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
