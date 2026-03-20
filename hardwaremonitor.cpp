#include "hardwaremonitor.h"

HardwareMonitor::HardwareMonitor(QObject *parent)
    : QObject(parent)
{
}

int HardwareMonitor::getCpuTemp(){
    if(currentMode == "Performance"){
        return 70 + rand() % 10;
    }else if(currentMode == "Balanced"){
        return 55 + rand() % 20;
    }else{
        return 35 + rand() % 10;
    }
}

int HardwareMonitor::getGpuTemp(){
    if(currentMode == "Performance"){
        return 65 + rand() % 15;
    }else if(currentMode == "Balanced"){
        return 42 + rand() % 20;
    }else{
        return 30 + rand() % 10;
    }
}

int HardwareMonitor::getCpuFan(){
    if(currentMode == "Performance"){
        return 4000 + rand() % 2000;
    }else if(currentMode == "Balanced"){
        return 2800 + rand() % 1500;
    }else{
        return 1000 + rand() % 1200;
    }

}

int HardwareMonitor::getGpuFan(){
    if(currentMode == "Performance"){
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
