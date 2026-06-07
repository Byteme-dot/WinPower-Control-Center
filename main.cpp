#include "mainwindow.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <windows.h>
#include "manageadmin.h"

int main(int argc, char *argv[])
{
    // Check for --elevated flag to prevent infinite loop
    bool alreadyElevated = false;
    for (int i = 1; i < argc; i++) {
        if (QString(argv[i]) == "--elevated") {
            alreadyElevated = true;
            break;
        }
    }

    // Relaunch as admin if needed
    if (!alreadyElevated && !isRunningAsAdmin()) {
        relaunchAsAdmin();
        return 0;
    }

    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "WinPowerControlCenter_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    MainWindow w;
    w.show();
    return a.exec();
}
