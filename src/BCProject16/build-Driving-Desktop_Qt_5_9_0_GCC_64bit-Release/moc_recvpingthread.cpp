/****************************************************************************
** Meta object code from reading C++ file 'recvpingthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Driving/recvpingthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recvpingthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RecvPingThread_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecvPingThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecvPingThread_t qt_meta_stringdata_RecvPingThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RecvPingThread"
QT_MOC_LITERAL(1, 15, 11), // "Ping_readed"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 30), // "autonavigation::Ping::ConstPtr"
QT_MOC_LITERAL(4, 59, 4) // "ping"

    },
    "RecvPingThread\0Ping_readed\0\0"
    "autonavigation::Ping::ConstPtr\0ping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecvPingThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void RecvPingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RecvPingThread *_t = static_cast<RecvPingThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Ping_readed((*reinterpret_cast< const autonavigation::Ping::ConstPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RecvPingThread::*_t)(const autonavigation::Ping::ConstPtr & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RecvPingThread::Ping_readed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RecvPingThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_RecvPingThread.data,
      qt_meta_data_RecvPingThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RecvPingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecvPingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecvPingThread.stringdata0))
        return static_cast<void*>(const_cast< RecvPingThread*>(this));
    return QThread::qt_metacast(_clname);
}

int RecvPingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RecvPingThread::Ping_readed(const autonavigation::Ping::ConstPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
