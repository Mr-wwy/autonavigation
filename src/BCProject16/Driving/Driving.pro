#-------------------------------------------------
#
# Project created by QtCreator 2018-08-13T20:10:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Driving
TEMPLATE = app

DESTDIR += ../BCManager16/
#DESTDIR += ./

OBJECTS_DIR = ./tmp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += /opt/ros/indigo/include ../../../include ../../../msg_gen/cpp/include ./hcnetsdk/inc
#INCLUDEPATH += /opt/ros/indigo/include ../../include ../../msg_gen/cpp/include ./hcnetsdk/inc

LIBS += -L/opt/ros/indigo/lib  \                          #  add the library file of ros
/opt/ros/indigo/lib/libdynamic_reconfigure_config_init_mutex.so \
/opt/ros/indigo/lib/libnodeletlib.so \
/opt/ros/indigo/lib/libbondcpp.so \
/opt/ros/indigo/lib/libclass_loader.so \
/opt/ros/indigo/lib/libroslib.so \
/opt/ros/indigo/lib/libtf.so \
/opt/ros/indigo/lib/libtf2_ros.so \
/opt/ros/indigo/lib/libactionlib.so \
/opt/ros/indigo/lib/libmessage_filters.so \
/opt/ros/indigo/lib/libroscpp.so \
/opt/ros/indigo/lib/libxmlrpcpp.so \
/opt/ros/indigo/lib/libtf2.so \
/opt/ros/indigo/lib/librosconsole.so \
/opt/ros/indigo/lib/librosconsole_log4cxx.so \
/opt/ros/indigo/lib/librosconsole_backend_interface.so \
/opt/ros/indigo/lib/libroscpp_serialization.so \
/opt/ros/indigo/lib/librostime.so \
/opt/ros/indigo/lib/libcpp_common.so \
/opt/ros/indigo/lib/libcv_bridge.so \
/opt/ros/indigo/lib/libimage_transport.so \
/opt/ros/indigo/lib/libimage_transport_plugins.so \
/opt/ros/indigo/lib/libimage_publisher.so \
-lpthread -lboost_filesystem -lboost_system -lboost_thread -lboost_regex -lboost_signals -llog4cxx \
-lconsole_bridge  \
-lPocoFoundation \
-ldl\
-luuid \
-lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_ml \
-ltinyxml -Wl,-rpath,/opt/ros/indigo/lib \
-L$$PWD/hcnetsdk/lib/HCNetSDKCom \                #  add the library file of hcnet
-L$$PWD/hcnetsdk/lib \
-lhcnetsdk \
-lHCCore \
-lhpr \
-lPlayCtrl \
-lSuperRender \
-lAudioRender  \
-L/usr/lib/x86_64-linux-gnu  \                               #  add the library file of md5
/usr/lib/x86_64-linux-gnu/libcrypto.so \
/usr/lib/x86_64-linux-gnu/libgnutls-openssl.so.27  \
/usr/lib/x86_64-linux-gnu/libssl.so

SOURCES += \
    dangeritem.cpp \
    drivingwidget.cpp \
    fps.cpp \
    globaldata.cpp \
    gpsmillisecond.cpp \
    leftfunction.cpp \
    localitem.cpp \
    main.cpp \
    map_localization.cpp \
    mapview.cpp \
    myindicator.cpp \
    oiltable.cpp \
    rightfunction.cpp \
    selfpositem.cpp \
    sendcmdthread.cpp \
    sensordatathread.cpp \
    speed.cpp \
    tachometer.cpp \
    taskmode.cpp \
    watertemperature.cpp \
    wheel.cpp \
    recvimagethread.cpp \
    recvlogitechthread.cpp \
    recvpingthread.cpp \
    recvwaypointsthread.cpp \
    setspeed.cpp \
    leftdisplay.cpp \
    operatehelp.cpp \
    recvgpstime.cpp \
    settime.cpp \
    recvt0thread.cpp

HEADERS  += \
    dangeritem.h \
    drivingwidget.h \
    fps.h \
    globaldata.h \
    gpsmillisecond.h \
    leftfunction.h \
    localitem.h \
    map_localization.h \
    mapview.h \
    myindicator.h \
    oiltable.h \
    rightfunction.h \
    selfpositem.h \
    sendcmdthread.h \
    sensordatathread.h \
    speed.h \
    tachometer.h \
    taskmode.h \
    watertemperature.h \
    wheel.h \
    recvimagethread.h \
    recvlogitechthread.h \
    recvpingthread.h \
    recvwaypointsthread.h \
    setspeed.h \
    leftdisplay.h \
    operatehelp.h \
    recvgpstime.h \
    settime.h \
    recvt0thread.h

FORMS    += \
    drivingwidget.ui \
    fps.ui \
    gpsmillisecond.ui \
    leftfunction.ui \
    map_localization.ui \
    oiltable.ui \
    rightfunction.ui \
    speed.ui \
    tachometer.ui \
    taskmode.ui \
    watertemperature.ui \
    setspeed.ui \
    leftdisplay.ui \
    operatehelp.ui \
    settime.ui

RESOURCES += \
    myimage.qrc \
    qss.qrc
