TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

TARGET = LogitechG29-1

DESTDIR += ../../../../bin/
OBJECTS_DIR = ./tmp

SOURCES += main.cpp \
    logitech.cpp

HEADERS += \
    logitech.h
INCLUDEPATH += /opt/ros/indigo/include/ ../../include ../../msg_gen/cpp/include

LIBS += -L/opt/ros/indigo/lib  \
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
/opt/ros/indigo/lib/libroslz4.so \
/opt/ros/indigo/lib/libtopic_tools.so \
/opt/ros/indigo/lib/librosbag.so \
/opt/ros/indigo/lib/librosbag_storage.so \
-lpthread -lboost_filesystem -lboost_system -lboost_thread -lboost_regex -lboost_signals -llog4cxx \
-lconsole_bridge  \
-lPocoFoundation \
-ldl\
-luuid \
-lbz2 \
-ltinyxml -Wl,-rpath,/opt/ros/indigo/lib

HEADERS += \
    bitmaskros.h

FORMS +=
