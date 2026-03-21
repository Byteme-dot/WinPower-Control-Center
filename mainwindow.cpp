#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <windows.h>
#include <QCoreApplication>
#include <QMessageBox>
#include "manageadmin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    qDebug() << "NEW VERSION RUNNING";
    ui->modeLabel->setText("Mode: " + monitor.getMode());
    ui->balancedActStatus->setText("(active)");
    ui->ecoActStatus->setText("");
    ui->performanceActStatus->setText("");
    ui->ultPerformanceActStatus->setText("");

    isAdmin = isRunningAsAdmin(); //Extracting function value into a variable

    if(isRunningAsAdmin()){
        ui->adminStatus->setText("Admin Mode: ON");
        ui->runAsAdminButton->setVisible(!isAdmin);
    }else{
        ui->adminStatus->setText("Admin Mode: OFF");
        ui->runAsAdminButton->setVisible(!isAdmin);
    }



    updateModeUI();
    monitor.applyPowerMode(monitor.getMode());

    connect(ui->runAsAdminButton, &QPushButton::clicked, this, [this]() {
        relaunchAsAdmin();
    });

    connect(ui->syncPowerSchemeCheckBox, &QCheckBox::clicked, this, [this](bool checked) {
        if(isAdmin == false){
            QMessageBox msgBox;
            msgBox.setWindowTitle("Admin Required!");
            msgBox.setText("Run app as admin to enable Power Scheme Syncing!");
            QPushButton *runBtn = msgBox.addButton("Run as Admin", QMessageBox::AcceptRole);
            msgBox.addButton("Cancel", QMessageBox::RejectRole);

            msgBox.exec();

            if(msgBox.clickedButton() == runBtn){
                relaunchAsAdmin();
            }

            ui->syncPowerSchemeCheckBox->setChecked(false);
        }
    });

    connect(ui->ecoButton, &QPushButton::clicked, this, [this]() {
        monitor.setMode("Eco");
        ui->modeLabel->setText("Mode: " + monitor.getMode());
        updateModeUI();
        if(ui->syncPowerSchemeCheckBox->isChecked()){
            monitor.applyPowerMode(monitor.getMode());
        }
    });

    connect(ui->balancedButton, &QPushButton::clicked, this, [this]() {
        monitor.setMode("Balanced");
        ui->modeLabel->setText("Mode: " + monitor.getMode());
        updateModeUI();
        if(ui->syncPowerSchemeCheckBox->isChecked()){
            monitor.applyPowerMode(monitor.getMode());
        }
    });

    connect(ui->performanceButton, &QPushButton::clicked, this, [this]() {
        monitor.setMode("Performance");
        ui->modeLabel->setText("Mode: " + monitor.getMode());
        updateModeUI();
        if(ui->syncPowerSchemeCheckBox->isChecked()){
            monitor.applyPowerMode(monitor.getMode());
        }
    });

    connect(ui->ultPerformanceButton, &QPushButton::clicked, this, [this]() {
        monitor.setMode("UltimatePerformance");
        ui->modeLabel->setText("Mode: " + monitor.getMode());
        updateModeUI();
        if(ui->syncPowerSchemeCheckBox->isChecked()){
            monitor.applyPowerMode(monitor.getMode());
        }
    });

    QTimer *timer = new QTimer(this);

    connect (timer, &QTimer:: timeout, this, &MainWindow::updateStats);

    timer->start(1000);
}

void MainWindow::updateStats()
{
    // Smoothing the values variance by taking target value and current value
    targetCpuTemp = monitor.getCpuTemp();
    targetGpuTemp = monitor.getGpuTemp();
    targetCpuFan = monitor.getCpuFan();
    targetGpuFan = monitor.getCpuFan();

    cpuTempDisplay += (targetCpuTemp - cpuTempDisplay) /2 ;
    gpuTempDisplay += (targetGpuTemp - gpuTempDisplay) /2 ;
    cpuFanDisplay += (targetCpuFan - cpuFanDisplay) /2 ;
    gpuFanDisplay += (targetGpuFan - gpuFanDisplay) /2 ;

    QString displayCpuTemp = QString::number(cpuTempDisplay);  //QString::number() means to_string()
    QString displayGpuTemp = QString::number(gpuTempDisplay);  //QString is different from string
    QString displayCpuFan = QString::number(cpuFanDisplay);
    QString displayGpuFan = QString::number(gpuFanDisplay);

    ui->cpuTempLabel->setText(
        "CPU Temp: " + displayCpuTemp + " C");

    ui->gpuTempLabel->setText(
        "GPU Temp: " + displayGpuTemp + " C");

    ui->cpuFanLabel->setText(
        "CPU Fan: " + displayCpuFan + " RPM");

    ui->gpuFanLabel->setText(
        "GPU Fan: " + displayGpuFan + " RPM");
}

void MainWindow::updateModeUI(){

    QString ecoDefault = ":hover {border: 2px solid #096C17; border-radius: 8px;}";
    QString balancedDefault = ":hover {border: 2px solid #0A5D6B; border-radius: 8px;}";
    QString performanceDefault = ":hover {border: 2px solid #6E1708; border-radius: 8px;}";
    QString ultPerformanceDefault = ":hover {border: 2px solid #471093; border-radius: 8px;}";

    QString ecoSelected = "QPushButton {background-color: #11BF28; font-weight: bold}"
                          ":hover {border: 3px solid #096C17; border-radius: 8px;}";

    QString balancedSelected = "QPushButton {background-color: #12A9C4; font-weight: bold}"
                               ":hover {border: 3px solid #0A5D6B; border-radius: 8px;}";

    QString performanceSelected = "QPushButton {background-color: #D42B0F; font-weight: bold}"
                                  ":hover {border: 3px solid #6E1708; border-radius: 8px;}";

    QString ultPerformanceSelected = "QPushButton {background-color: #6918DB; font-weight: bold}"
                                  ":hover {border: 3px solid #471093; border-radius: 8px;}";


    ui->ecoButton->setStyleSheet(ecoDefault);
    ui->balancedButton->setStyleSheet(balancedDefault);
    ui->performanceButton->setStyleSheet(performanceDefault);
    ui->ultPerformanceButton->setStyleSheet(ultPerformanceDefault);

    if(monitor.getMode() == "Eco"){
        ui->ecoActStatus->setText("(active)");
        ui->balancedActStatus->setText("");
        ui->performanceActStatus->setText("");
        ui->ultPerformanceActStatus->setText("");
        ui->ecoButton->setStyleSheet(ecoSelected);

    }else if(monitor.getMode() == "Balanced"){
        ui->ecoActStatus->setText("");
        ui->balancedActStatus->setText("(active)");
        ui->performanceActStatus->setText("");
        ui->ultPerformanceActStatus->setText("");
        ui->balancedButton->setStyleSheet(balancedSelected);

    }else if(monitor.getMode() == "Performance"){
        ui->ecoActStatus->setText("");
        ui->balancedActStatus->setText("");
        ui->performanceActStatus->setText("(active)");
        ui->ultPerformanceActStatus->setText("");
        ui->performanceButton->setStyleSheet(performanceSelected);
    }else if(monitor.getMode() == "UltimatePerformance"){
        ui->ecoActStatus->setText("");
        ui->balancedActStatus->setText("");
        ui->performanceActStatus->setText("");
        ui->ultPerformanceActStatus->setText("(active)");
        ui->ultPerformanceButton->setStyleSheet(ultPerformanceSelected);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
