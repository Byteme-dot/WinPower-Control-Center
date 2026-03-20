#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->modeLabel->setText("Mode: " + monitor.getMode());
    ui->balancedActStatus->setText("(active)");
    ui->ecoActStatus->setText("");
    ui->performanceActStatus->setText("");
    updateModeUI();

    connect(ui->ecoButton, &QPushButton::clicked, this, [this]() {
        monitor.setMode("Eco");
        ui->modeLabel->setText("Mode: " + monitor.getMode());
        updateModeUI();
    });

    connect(ui->balancedButton, &QPushButton::clicked, this, [this]() {
        monitor.setMode("Balanced");
        ui->modeLabel->setText("Mode: " + monitor.getMode());
        updateModeUI();
    });

    connect(ui->performanceButton, &QPushButton::clicked, this, [this]() {
        monitor.setMode("Performance");
        ui->modeLabel->setText("Mode: " + monitor.getMode());
        updateModeUI();
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

    QString ecoSelected = "QPushButton {background-color: #11BF28; font-weight: bold}"
                          ":hover {border: 3px solid #096C17; border-radius: 8px;}";

    QString balancedSelected = "QPushButton {background-color: #12A9C4; font-weight: bold}"
                               ":hover {border: 3px solid #0A5D6B; border-radius: 8px;}";

    QString performanceSelected = "QPushButton {background-color: #D42B0F; font-weight: bold}"
                                  ":hover {border: 3px solid #6E1708; border-radius: 8px;}";
    ui->ecoButton->setStyleSheet(ecoDefault);
    ui->balancedButton->setStyleSheet(balancedDefault);
    ui->performanceButton->setStyleSheet(performanceDefault);

    if(monitor.getMode() == "Eco"){
        ui->ecoActStatus->setText("(active)");
        ui->balancedActStatus->setText("");
        ui->performanceActStatus->setText("");
        ui->ecoButton->setStyleSheet(ecoSelected);

    }else if(monitor.getMode() == "Balanced"){
        ui->ecoActStatus->setText("");
        ui->balancedActStatus->setText("(active)");
        ui->performanceActStatus->setText("");
        ui->balancedButton->setStyleSheet(balancedSelected);

    }else if(monitor.getMode() == "Performance"){
        ui->ecoActStatus->setText("");
        ui->balancedActStatus->setText("");
        ui->performanceActStatus->setText("(active)");
        ui->performanceButton->setStyleSheet(performanceSelected);

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
