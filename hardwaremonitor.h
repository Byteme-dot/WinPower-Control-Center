#ifndef HARDWAREMONITOR_H
#define HARDWAREMONITOR_H

#include <QObject>
#include <QString>
#include <QList>
#include <QFutureWatcher>

class HardwareMonitor : public QObject
{
    Q_OBJECT

public:
    explicit HardwareMonitor(QObject *parent = nullptr);
    struct CpuStats {
        QString name;
        double temp = 0;
        double speed = 0;
        double usage = 0;
        double fan = 0;
    };

    struct GpuStats {
        QString name;
        double temp = 0;
        double speed = 0;
        double usage = 0;
        double fan = 0;
    };

    struct SystemStats {
        CpuStats cpu;
        QList<GpuStats> gpus;
    };


    SystemStats getSystemStats();

    QString getMode();
    QString detectPowerMode();
    QString detectOverlayMode();

    bool isUltimateSupported();

    int getCpuTemp();
    int getCpuFan();
    int getGpuTemp();
    int getGpuFan();

    void fetchStatsAsync();
    void tryEnablingUltimateMode();
    void applyPowerMode(QString);
    void setMode(QString);

    void setOverlayMode(QString newMode);
    QString getOverlayMode();
    void applyPowerOverlay(QString powerMode);

    QString currentMode;
    QString currentOverlayMode;
signals:
    void statsReady(HardwareMonitor::SystemStats);

private:
    QFutureWatcher<SystemStats> *watcher;

};

#endif
