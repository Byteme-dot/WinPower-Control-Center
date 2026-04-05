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
    QCheckBox *autoSyncWithWindows;
    QPushButton *autoSyncInfo;
    QPushButton *powerSchemeInfo;
    QPushButton *tryEnableUltimateButton;
    QMenuBar *menubar;
    QMenu *menuOMEN_HW_MONITOR;
    QMenu *menuv0_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setBold(false);
        font.setKerning(false);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
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
        balancedButton->setGeometry(QRect(190, 350, 131, 41));
        performanceButton = new QPushButton(centralwidget);
        performanceButton->setObjectName("performanceButton");
        performanceButton->setGeometry(QRect(340, 350, 161, 41));
        ecoButton = new QPushButton(centralwidget);
        ecoButton->setObjectName("ecoButton");
        ecoButton->setGeometry(QRect(60, 350, 101, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 401, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setKerning(false);
        label->setFont(font1);
        balancedActStatus = new QLabel(centralwidget);
        balancedActStatus->setObjectName("balancedActStatus");
        balancedActStatus->setGeometry(QRect(230, 390, 51, 20));
        balancedActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ecoActStatus = new QLabel(centralwidget);
        ecoActStatus->setObjectName("ecoActStatus");
        ecoActStatus->setGeometry(QRect(85, 390, 51, 20));
        ecoActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);
        performanceActStatus = new QLabel(centralwidget);
        performanceActStatus->setObjectName("performanceActStatus");
        performanceActStatus->setGeometry(QRect(390, 390, 51, 20));
        performanceActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ultPerformanceActStatus = new QLabel(centralwidget);
        ultPerformanceActStatus->setObjectName("ultPerformanceActStatus");
        ultPerformanceActStatus->setGeometry(QRect(540, 390, 181, 20));
        ultPerformanceActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ultPerformanceButton = new QPushButton(centralwidget);
        ultPerformanceButton->setObjectName("ultPerformanceButton");
        ultPerformanceButton->setGeometry(QRect(520, 350, 221, 41));
        adminStatus = new QLabel(centralwidget);
        adminStatus->setObjectName("adminStatus");
        adminStatus->setGeometry(QRect(640, 50, 131, 20));
        runAsAdminButton = new QPushButton(centralwidget);
        runAsAdminButton->setObjectName("runAsAdminButton");
        runAsAdminButton->setGeometry(QRect(680, 10, 101, 29));
        syncPowerSchemeCheckBox = new QCheckBox(centralwidget);
        syncPowerSchemeCheckBox->setObjectName("syncPowerSchemeCheckBox");
        syncPowerSchemeCheckBox->setGeometry(QRect(100, 270, 161, 25));
        autoSyncWithWindows = new QCheckBox(centralwidget);
        autoSyncWithWindows->setObjectName("autoSyncWithWindows");
        autoSyncWithWindows->setGeometry(QRect(100, 300, 91, 25));
        autoSyncInfo = new QPushButton(centralwidget);
        autoSyncInfo->setObjectName("autoSyncInfo");
        autoSyncInfo->setGeometry(QRect(70, 303, 21, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(autoSyncInfo->sizePolicy().hasHeightForWidth());
        autoSyncInfo->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setBold(true);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        autoSyncInfo->setFont(font2);
        autoSyncInfo->setAutoFillBackground(false);
        powerSchemeInfo = new QPushButton(centralwidget);
        powerSchemeInfo->setObjectName("powerSchemeInfo");
        powerSchemeInfo->setGeometry(QRect(70, 272, 21, 20));
        sizePolicy.setHeightForWidth(powerSchemeInfo->sizePolicy().hasHeightForWidth());
        powerSchemeInfo->setSizePolicy(sizePolicy);
        powerSchemeInfo->setFont(font2);
        powerSchemeInfo->setAcceptDrops(false);
        powerSchemeInfo->setAutoFillBackground(false);
        tryEnableUltimateButton = new QPushButton(centralwidget);
        tryEnableUltimateButton->setObjectName("tryEnableUltimateButton");
        tryEnableUltimateButton->setGeometry(QRect(580, 325, 91, 21));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(true);
        font3.setUnderline(false);
        font3.setKerning(false);
        tryEnableUltimateButton->setFont(font3);
        tryEnableUltimateButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuOMEN_HW_MONITOR = new QMenu(menubar);
        menuOMEN_HW_MONITOR->setObjectName("menuOMEN_HW_MONITOR");
        menuv0_3 = new QMenu(menubar);
        menuv0_3->setObjectName("menuv0_3");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOMEN_HW_MONITOR->menuAction());
        menubar->addAction(menuv0_3->menuAction());

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
        label->setText(QCoreApplication::translate("MainWindow", "WinPower Control Center", nullptr));
        balancedActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ecoActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        performanceActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ultPerformanceActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ultPerformanceButton->setText(QCoreApplication::translate("MainWindow", "Ultimate Performance Mode", nullptr));
        adminStatus->setText(QCoreApplication::translate("MainWindow", "Admin Status:", nullptr));
        runAsAdminButton->setText(QCoreApplication::translate("MainWindow", "Run As Admin", nullptr));
        syncPowerSchemeCheckBox->setText(QCoreApplication::translate("MainWindow", "Sync Power Scheme", nullptr));
        autoSyncWithWindows->setText(QCoreApplication::translate("MainWindow", "Auto Sync", nullptr));
        autoSyncInfo->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        powerSchemeInfo->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        tryEnableUltimateButton->setText(QCoreApplication::translate("MainWindow", "Try Enabling", nullptr));
        menuOMEN_HW_MONITOR->setTitle(QCoreApplication::translate("MainWindow", "OMEN HW MONITOR", nullptr));
        menuv0_3->setTitle(QCoreApplication::translate("MainWindow", "v0.3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
