/****************************************************************************
** Meta object code from reading C++ file 'savethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WayPoint/savethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_savethread_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_savethread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_savethread_t qt_meta_stringdata_savethread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "savethread"
QT_MOC_LITERAL(1, 11, 14), // "savefile_start"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "file_row"
QT_MOC_LITERAL(4, 36, 9), // "file_size"
QT_MOC_LITERAL(5, 46, 13), // "savefile_stop"
QT_MOC_LITERAL(6, 60, 15), // "savefile_runing"
QT_MOC_LITERAL(7, 76, 10) // "currentrow"

    },
    "savethread\0savefile_start\0\0file_row\0"
    "file_size\0savefile_stop\0savefile_runing\0"
    "currentrow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_savethread[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void savethread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        savethread *_t = static_cast<savethread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->savefile_start((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->savefile_stop(); break;
        case 2: _t->savefile_runing((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (savethread::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&savethread::savefile_start)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (savethread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&savethread::savefile_stop)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (savethread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&savethread::savefile_runing)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject savethread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_savethread.data,
      qt_meta_data_savethread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *savethread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *savethread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_savethread.stringdata0))
        return static_cast<void*>(const_cast< savethread*>(this));
    return QThread::qt_metacast(_clname);
}

int savethread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void savethread::savefile_start(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void savethread::savefile_stop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void savethread::savefile_runing(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
