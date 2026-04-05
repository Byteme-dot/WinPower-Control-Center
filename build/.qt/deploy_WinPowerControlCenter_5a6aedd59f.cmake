include("C:/Users/abhi_devnull/Documents/GitHub/WinPower-Control-Center/build/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/WinPowerControlCenter-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "C:/Users/abhi_devnull/Documents/GitHub/WinPower-Control-Center/build/WinPowerControlCenter.exe"
    GENERATE_QT_CONF
)
