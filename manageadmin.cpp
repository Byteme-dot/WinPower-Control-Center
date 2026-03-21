#include "manageadmin.h"
#include <QString>
#include <QCoreApplication>
#include <QDebug>
#include <windows.h>
#include <QMessageBox>

bool isRunningAsAdmin(){
    BOOL isAdmin = false;
    PSID adminGroup = NULL;
    SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;

    if (AllocateAndInitializeSid(
            &NtAuthority,
            2,
            SECURITY_BUILTIN_DOMAIN_RID,
            DOMAIN_ALIAS_RID_ADMINS,
            0, 0, 0, 0, 0, 0,
            &adminGroup))
    {
        CheckTokenMembership(NULL, adminGroup, &isAdmin);
        FreeSid(adminGroup);
    }

    return isAdmin;
}

void relaunchAsAdmin()
{
    QString appPath = QCoreApplication::applicationFilePath();

    SHELLEXECUTEINFO sei = { sizeof(sei) };
    sei.lpVerb = L"runas";
    sei.lpFile = reinterpret_cast<LPCWSTR>(appPath.utf16());
    sei.nShow = SW_NORMAL;

    if (!ShellExecuteEx(&sei)) {
        qDebug() << "Failed to relaunch as admin";
        return;
    }

    QCoreApplication::quit();
}
