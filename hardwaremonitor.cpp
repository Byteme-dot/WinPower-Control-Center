#include "hardwaremonitor.h"
#include <qprocess.h>
#include <QDebug>
HardwareMonitor::HardwareMonitor(QObject *parent)
    : QObject(parent)
{
}

int HardwareMonitor::getCpuTemp(){
    if(currentMode == "UltimatePerformance"){
        return 72 + rand() % 13;
    }else if(currentMode == "Performance"){
        return 70 + rand() % 10;
    }else if(currentMode == "Balanced"){
        return 55 + rand() % 20;
    }else{
        return 35 + rand() % 10;
    }
}

int HardwareMonitor::getGpuTemp(){
    if(currentMode == "UltimatePerformance"){
        return 67 + rand() % 13;
    }else if(currentMode == "Performance"){
        return 65 + rand() % 15;
    }else if(currentMode == "Balanced"){
        return 42 + rand() % 20;
    }else{
        return 30 + rand() % 10;
    }
}

int HardwareMonitor::getCpuFan(){
    if(currentMode == "UltimatePerformance"){
        return 4300 + rand() % 1000;
    }else if(currentMode == "Performance"){
        return 4000 + rand() % 1800;
    }else if(currentMode == "Balanced"){
        return 2800 + rand() % 1500;
    }else{
        return 1000 + rand() % 1200;
    }
}

int HardwareMonitor::getGpuFan(){
    if(currentMode == "UltimatePerformance"){
        return 4800 + rand() % 1400;
    }else if(currentMode == "Performance"){
        return 4300 + rand() % 2000;
    }else if(currentMode == "Balanced"){
        return 3000 + rand() % 1500;
    }else{
        return 1200 + rand() % 1200;
    }
}

void HardwareMonitor::setMode(QString newMode){
    currentMode = newMode;
}

QString HardwareMonitor::getMode(){
    return currentMode;
}

void HardwareMonitor::applyPowerMode(QString powerMode){
    QString guid;
    if(powerMode == "Eco"){
        guid = "a1841308-3541-4fab-bc81-f71556f20b4a";
    }else if(powerMode == "Balanced"){
        guid = "381b4222-f694-41f0-9685-ff5bb260df2e";
    }else if(powerMode == "Performance"){
        guid = "8c5e7fda-e8bf-4a96-9a85-a6e23a8c635c";
    }else if(powerMode == "UltimatePerformance"){
        guid = "e9a42b02-d5df-448d-aa00-03f14749eb61";
    }

    QProcess process;
    process.start("powercfg",QStringList() << "/setactive"<<guid);
    process.waitForFinished();
}
