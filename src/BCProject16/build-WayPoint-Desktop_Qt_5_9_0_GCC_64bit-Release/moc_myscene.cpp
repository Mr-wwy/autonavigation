/****************************************************************************
** Meta object code from reading C++ file 'myscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WayPoint/myscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myscene_t {
    QByteArrayData data[11];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myscene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myscene_t qt_meta_stringdata_myscene = {
    {
QT_MOC_LITERAL(0, 0, 7), // "myscene"
QT_MOC_LITERAL(1, 8, 14), // "setsmaxminpeed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "min"
QT_MOC_LITERAL(4, 28, 3), // "max"
QT_MOC_LITERAL(5, 32, 15), // "deleteItem_slot"
QT_MOC_LITERAL(6, 48, 5), // "_type"
QT_MOC_LITERAL(7, 54, 4), // "_num"
QT_MOC_LITERAL(8, 59, 4), // "_row"
QT_MOC_LITERAL(9, 64, 9), // "_line_num"
QT_MOC_LITERAL(10, 74, 19) // "deleteItem_overslot"

    },
    "myscene\0setsmaxminpeed\0\0min\0max\0"
    "deleteItem_slot\0_type\0_num\0_row\0"
    "_line_num\0deleteItem_overslot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myscene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       5,    4,   34,    2, 0x0a /* Public */,
      10,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    6,    7,    8,    9,
    QMetaType::Void,

       0        // eod
};

void myscene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myscene *_t = static_cast<myscene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setsmaxminpeed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->deleteItem_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->deleteItem_overslot(); break;
        default: ;
        }
    }
}

const QMetaObject myscene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_myscene.data,
      qt_meta_data_myscene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *myscene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myscene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myscene.stringdata0))
        return static_cast<void*>(const_cast< myscene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int myscene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
