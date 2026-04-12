#include "hardwaremonitor.h"
#include <QProcess>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QCoreApplication>
#include <windows.h>

HardwareMonitor::HardwareMonitor(QObject *parent)
    : QObject(parent)
{
    currentMode = detectPowerMode();
}

HardwareMonitor::SystemStats HardwareMonitor::getSystemStats()
{
    SystemStats stats;

    QProcess process;
    QString path = QCoreApplication::applicationDirPath() + "/SensorBridge.exe";
    process.start(path);

    if (!process.waitForFinished(3000)) {
        return stats;
    }

    QString output = process.readAllStandardOutput().trimmed();

    QJsonDocument doc = QJsonDocument::fromJson(output.toUtf8());
    if (doc.isNull() || !doc.isObject()) {
        return stats;
    }

    QJsonObject obj = doc.object();

    // ================= CPU =================
    if (obj.contains("cpu") && obj["cpu"].isObject()) {
        QJsonObject cpuObj = obj["cpu"].toObject();

        stats.cpu.name  = cpuObj["name"].toString();
        stats.cpu.temp  = cpuObj["temp"].toDouble();
        stats.cpu.usage = cpuObj["usage"].toDouble();
        stats.cpu.speed = cpuObj["speed"].toDouble();
    }

    // ================= GPU =================
    if (obj.contains("gpus") && obj["gpus"].isArray()) {
        QJsonArray gpuArray = obj["gpus"].toArray();

        for (const QJsonValue &val : gpuArray) {
            if (!val.isObject()) continue;

            QJsonObject g = val.toObject();

            GpuStats gpu;
            gpu.name  = g["name"].toString();
            gpu.temp  = g["temp"].toDouble();
            gpu.usage = g["usage"].toDouble();
            gpu.speed = g["speed"].toDouble();

            stats.gpus.append(gpu);
        }
    }

    return stats;
}

// ================= POWER MODE =================

void HardwareMonitor::setMode(QString newMode){
    currentMode = newMode;
}

QString HardwareMonitor::getMode(){
    return currentMode;
}

void HardwareMonitor::applyPowerMode(QString powerMode){
    QString guid;

    if(powerMode == "Eco")
        guid = "a1841308-3541-4fab-bc81-f71556f20b4a";
    else if(powerMode == "Balanced")
        guid = "381b4222-f694-41f0-9685-ff5bb260df2e";
    else if(powerMode == "Performance")
        guid = "8c5e7fda-e8bf-4a96-9a85-a6e23a8c635c";
    else if(powerMode == "UltimatePerformance")
        guid = "e9a42b02-d5df-448d-aa00-03f14749eb61";

    QProcess process;
    process.start("powercfg", QStringList() << "/setactive" << guid);
    process.waitForFinished();
}

QString HardwareMonitor::detectPowerMode(){
    QProcess process;
    process.start("powercfg", QStringList() << "/getactivescheme");
    process.waitForFinished();

    QString output = process.readAllStandardOutput();

    if(output.contains("a1841308")) return "Eco";
    if(output.contains("381b4222")) return "Balanced";
    if(output.contains("8c5e7fda")) return "Performance";
    if(output.contains("e9a42b02")) return "UltimatePerformance";

    return "InvalidScheme";
}

bool HardwareMonitor::isUltimateSupported(){
    QProcess process;
    process.start("powercfg", QStringList() << "/list");
    process.waitForFinished();

    QString output = process.readAllStandardOutput().toLower();
    return output.contains("ultimate performance");
}

void HardwareMonitor::tryEnablingUltimateMode(){
    QProcess process;
    process.start("powercfg", QStringList() << "-duplicatescheme"
                                            << "e9a42b02-d5df-448d-aa00-03f14749eb61");
    process.waitForFinished();
}
