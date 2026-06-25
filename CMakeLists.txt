cmake_minimum_required(VERSION 3.19)
project(WinPowerControlCenter LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets LinguistTools Concurrent)

qt_standard_project_setup()

qt_add_executable(WinPowerControlCenter WIN32
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    hardwaremonitor.h hardwaremonitor.cpp
    manageadmin.h manageadmin.cpp
)

qt_add_translations(
    TARGETS WinPowerControlCenter
    TS_FILES WinPowerControlCenter_en_US.ts
)

target_link_libraries(WinPowerControlCenter
    PRIVATE
        Qt6::Core
        Qt6::Widgets
        Qt6::Concurrent
)

include(GNUInstallDirs)

install(TARGETS WinPowerControlCenter
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET WinPowerControlCenter
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
