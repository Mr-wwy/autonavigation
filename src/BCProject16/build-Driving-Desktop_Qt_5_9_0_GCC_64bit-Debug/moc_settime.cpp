/****************************************************************************
** Meta object code from reading C++ file 'settime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Driving/settime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SetTime_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetTime_t qt_meta_stringdata_SetTime = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SetTime"
QT_MOC_LITERAL(1, 8, 15), // "settime_signals"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "set_time"
QT_MOC_LITERAL(4, 34, 18), // "on_sureBtn_clicked"
QT_MOC_LITERAL(5, 53, 20) // "on_cancelBtn_clicked"

    },
    "SetTime\0settime_signals\0\0set_time\0"
    "on_sureBtn_clicked\0on_cancelBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetTime[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SetTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetTime *_t = static_cast<SetTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settime_signals((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_sureBtn_clicked(); break;
        case 2: _t->on_cancelBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SetTime::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SetTime::settime_signals)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SetTime::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SetTime.data,
      qt_meta_data_SetTime,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SetTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetTime.stringdata0))
        return static_cast<void*>(const_cast< SetTime*>(this));
    return QWidget::qt_metacast(_clname);
}

int SetTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SetTime::settime_signals(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
