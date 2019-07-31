/****************************************************************************
** Meta object code from reading C++ file 'udpsenderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UDPCommunication/udpsenderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpsenderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UDPSenderWidget_t {
    QByteArrayData data[19];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPSenderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPSenderWidget_t qt_meta_stringdata_UDPSenderWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UDPSenderWidget"
QT_MOC_LITERAL(1, 16, 18), // "VehicleStatus_data"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 39), // "autonavigation::VehicleStatus..."
QT_MOC_LITERAL(4, 76, 2), // "vs"
QT_MOC_LITERAL(5, 79, 19), // "ControlCommand_data"
QT_MOC_LITERAL(6, 99, 40), // "autonavigation::ControlComman..."
QT_MOC_LITERAL(7, 140, 2), // "cc"
QT_MOC_LITERAL(8, 143, 12), // "GpsTime_data"
QT_MOC_LITERAL(9, 156, 33), // "autonavigation::GpsTime::Cons..."
QT_MOC_LITERAL(10, 190, 3), // "gps"
QT_MOC_LITERAL(11, 194, 17), // "stateChanged_slot"
QT_MOC_LITERAL(12, 212, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(13, 241, 20), // "on_ConnetBtn_clicked"
QT_MOC_LITERAL(14, 262, 17), // "udpServerReadData"
QT_MOC_LITERAL(15, 280, 18), // "udpServerReadError"
QT_MOC_LITERAL(16, 299, 23), // "on_btnUdpListen_clicked"
QT_MOC_LITERAL(17, 323, 28), // "on_btnClearUdpServer_clicked"
QT_MOC_LITERAL(18, 352, 14) // "timersend_slot"

    },
    "UDPSenderWidget\0VehicleStatus_data\0\0"
    "autonavigation::VehicleStatus::ConstPtr\0"
    "vs\0ControlCommand_data\0"
    "autonavigation::ControlCommand::ConstPtr\0"
    "cc\0GpsTime_data\0autonavigation::GpsTime::ConstPtr\0"
    "gps\0stateChanged_slot\0"
    "QAbstractSocket::SocketState\0"
    "on_ConnetBtn_clicked\0udpServerReadData\0"
    "udpServerReadError\0on_btnUdpListen_clicked\0"
    "on_btnClearUdpServer_clicked\0"
    "timersend_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPSenderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,
      15,    0,   78,    2, 0x08 /* Private */,
      16,    0,   79,    2, 0x08 /* Private */,
      17,    0,   80,    2, 0x08 /* Private */,
      18,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UDPSenderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPSenderWidget *_t = static_cast<UDPSenderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VehicleStatus_data((*reinterpret_cast< const autonavigation::VehicleStatus::ConstPtr(*)>(_a[1]))); break;
        case 1: _t->ControlCommand_data((*reinterpret_cast< const autonavigation::ControlCommand::ConstPtr(*)>(_a[1]))); break;
        case 2: _t->GpsTime_data((*reinterpret_cast< const autonavigation::GpsTime::ConstPtr(*)>(_a[1]))); break;
        case 3: _t->stateChanged_slot((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->on_ConnetBtn_clicked(); break;
        case 5: _t->udpServerReadData(); break;
        case 6: _t->udpServerReadError(); break;
        case 7: _t->on_btnUdpListen_clicked(); break;
        case 8: _t->on_btnClearUdpServer_clicked(); break;
        case 9: _t->timersend_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject UDPSenderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UDPSenderWidget.data,
      qt_meta_data_UDPSenderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UDPSenderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPSenderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDPSenderWidget.stringdata0))
        return static_cast<void*>(const_cast< UDPSenderWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UDPSenderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
