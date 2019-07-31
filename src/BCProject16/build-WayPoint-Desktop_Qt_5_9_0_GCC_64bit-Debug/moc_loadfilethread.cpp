/****************************************************************************
** Meta object code from reading C++ file 'loadfilethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WayPoint/loadfilethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loadfilethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_loadfilethread_t {
    QByteArrayData data[10];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_loadfilethread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_loadfilethread_t qt_meta_stringdata_loadfilethread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "loadfilethread"
QT_MOC_LITERAL(1, 15, 14), // "loadfile_start"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "file_row"
QT_MOC_LITERAL(4, 40, 9), // "file_size"
QT_MOC_LITERAL(5, 50, 13), // "loadfile_stop"
QT_MOC_LITERAL(6, 64, 15), // "loadfile_runing"
QT_MOC_LITERAL(7, 80, 10), // "currentrow"
QT_MOC_LITERAL(8, 91, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(9, 113, 9) // "list_item"

    },
    "loadfilethread\0loadfile_start\0\0file_row\0"
    "file_size\0loadfile_stop\0loadfile_runing\0"
    "currentrow\0QList<QStandardItem*>\0"
    "list_item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loadfilethread[] = {

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
       6,    2,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,

       0        // eod
};

void loadfilethread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        loadfilethread *_t = static_cast<loadfilethread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadfile_start((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->loadfile_stop(); break;
        case 2: _t->loadfile_runing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QStandardItem*>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (loadfilethread::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&loadfilethread::loadfile_start)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (loadfilethread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&loadfilethread::loadfile_stop)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (loadfilethread::*_t)(int , QList<QStandardItem*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&loadfilethread::loadfile_runing)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject loadfilethread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_loadfilethread.data,
      qt_meta_data_loadfilethread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *loadfilethread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loadfilethread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_loadfilethread.stringdata0))
        return static_cast<void*>(const_cast< loadfilethread*>(this));
    return QThread::qt_metacast(_clname);
}

int loadfilethread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void loadfilethread::loadfile_start(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void loadfilethread::loadfile_stop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void loadfilethread::loadfile_runing(int _t1, QList<QStandardItem*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
