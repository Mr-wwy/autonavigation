/****************************************************************************
** Meta object code from reading C++ file 'recvvehiclestatusthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UDPCommunication/recvvehiclestatusthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recvvehiclestatusthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RecvVehicleStatusThread_t {
    QByteArrayData data[11];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecvVehicleStatusThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecvVehicleStatusThread_t qt_meta_stringdata_RecvVehicleStatusThread = {
    {
QT_MOC_LITERAL(0, 0, 23), // "RecvVehicleStatusThread"
QT_MOC_LITERAL(1, 24, 20), // "VehicleStatus_readed"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 39), // "autonavigation::VehicleStatus..."
QT_MOC_LITERAL(4, 86, 2), // "gp"
QT_MOC_LITERAL(5, 89, 21), // "ControlCommand_readed"
QT_MOC_LITERAL(6, 111, 40), // "autonavigation::ControlComman..."
QT_MOC_LITERAL(7, 152, 2), // "cc"
QT_MOC_LITERAL(8, 155, 14), // "GpsTime_readed"
QT_MOC_LITERAL(9, 170, 33), // "autonavigation::GpsTime::Cons..."
QT_MOC_LITERAL(10, 204, 3) // "gps"

    },
    "RecvVehicleStatusThread\0VehicleStatus_readed\0"
    "\0autonavigation::VehicleStatus::ConstPtr\0"
    "gp\0ControlCommand_readed\0"
    "autonavigation::ControlCommand::ConstPtr\0"
    "cc\0GpsTime_readed\0autonavigation::GpsTime::ConstPtr\0"
    "gps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecvVehicleStatusThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       8,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void RecvVehicleStatusThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RecvVehicleStatusThread *_t = static_cast<RecvVehicleStatusThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VehicleStatus_readed((*reinterpret_cast< const autonavigation::VehicleStatus::ConstPtr(*)>(_a[1]))); break;
        case 1: _t->ControlCommand_readed((*reinterpret_cast< const autonavigation::ControlCommand::ConstPtr(*)>(_a[1]))); break;
        case 2: _t->GpsTime_readed((*reinterpret_cast< const autonavigation::GpsTime::ConstPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RecvVehicleStatusThread::*_t)(const autonavigation::VehicleStatus::ConstPtr & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RecvVehicleStatusThread::VehicleStatus_readed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RecvVehicleStatusThread::*_t)(const autonavigation::ControlCommand::ConstPtr & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RecvVehicleStatusThread::ControlCommand_readed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RecvVehicleStatusThread::*_t)(const autonavigation::GpsTime::ConstPtr & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RecvVehicleStatusThread::GpsTime_readed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject RecvVehicleStatusThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_RecvVehicleStatusThread.data,
      qt_meta_data_RecvVehicleStatusThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RecvVehicleStatusThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecvVehicleStatusThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecvVehicleStatusThread.stringdata0))
        return static_cast<void*>(const_cast< RecvVehicleStatusThread*>(this));
    return QThread::qt_metacast(_clname);
}

int RecvVehicleStatusThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void RecvVehicleStatusThread::VehicleStatus_readed(const autonavigation::VehicleStatus::ConstPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RecvVehicleStatusThread::ControlCommand_readed(const autonavigation::ControlCommand::ConstPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RecvVehicleStatusThread::GpsTime_readed(const autonavigation::GpsTime::ConstPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
