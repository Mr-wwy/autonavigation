/****************************************************************************
** Meta object code from reading C++ file 'emulation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WayPoint/emulation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_emulation_t {
    QByteArrayData data[20];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_emulation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_emulation_t qt_meta_stringdata_emulation = {
    {
QT_MOC_LITERAL(0, 0, 9), // "emulation"
QT_MOC_LITERAL(1, 10, 10), // "emitrotate"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "settable_slot"
QT_MOC_LITERAL(4, 36, 11), // "table_index"
QT_MOC_LITERAL(5, 48, 9), // "resetView"
QT_MOC_LITERAL(6, 58, 11), // "setupMatrix"
QT_MOC_LITERAL(7, 70, 21), // "setResetButtonEnabled"
QT_MOC_LITERAL(8, 92, 17), // "togglePointerMode"
QT_MOC_LITERAL(9, 110, 10), // "rotateLeft"
QT_MOC_LITERAL(10, 121, 11), // "rotateRight"
QT_MOC_LITERAL(11, 133, 6), // "zoomIn"
QT_MOC_LITERAL(12, 140, 5), // "level"
QT_MOC_LITERAL(13, 146, 7), // "zoomOut"
QT_MOC_LITERAL(14, 154, 2), // "go"
QT_MOC_LITERAL(15, 157, 7), // "openmap"
QT_MOC_LITERAL(16, 165, 8), // "closemap"
QT_MOC_LITERAL(17, 174, 22), // "animation_valuechanged"
QT_MOC_LITERAL(18, 197, 5), // "value"
QT_MOC_LITERAL(19, 203, 18) // "animation_finished"

    },
    "emulation\0emitrotate\0\0settable_slot\0"
    "table_index\0resetView\0setupMatrix\0"
    "setResetButtonEnabled\0togglePointerMode\0"
    "rotateLeft\0rotateRight\0zoomIn\0level\0"
    "zoomOut\0go\0openmap\0closemap\0"
    "animation_valuechanged\0value\0"
    "animation_finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_emulation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  104,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    0,  108,    2, 0x0a /* Public */,
       7,    0,  109,    2, 0x0a /* Public */,
       8,    0,  110,    2, 0x0a /* Public */,
       9,    0,  111,    2, 0x0a /* Public */,
      10,    0,  112,    2, 0x0a /* Public */,
      11,    1,  113,    2, 0x0a /* Public */,
      11,    0,  116,    2, 0x2a /* Public | MethodCloned */,
      13,    1,  117,    2, 0x0a /* Public */,
      13,    0,  120,    2, 0x2a /* Public | MethodCloned */,
      14,    0,  121,    2, 0x0a /* Public */,
      15,    0,  122,    2, 0x0a /* Public */,
      16,    0,  123,    2, 0x0a /* Public */,
      17,    1,  124,    2, 0x0a /* Public */,
      19,    0,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QReal,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   18,
    QMetaType::Void,

       0        // eod
};

void emulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        emulation *_t = static_cast<emulation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitrotate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 1: _t->settable_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->resetView(); break;
        case 3: _t->setupMatrix(); break;
        case 4: _t->setResetButtonEnabled(); break;
        case 5: _t->togglePointerMode(); break;
        case 6: _t->rotateLeft(); break;
        case 7: _t->rotateRight(); break;
        case 8: _t->zoomIn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->zoomIn(); break;
        case 10: _t->zoomOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->zoomOut(); break;
        case 12: _t->go(); break;
        case 13: _t->openmap(); break;
        case 14: _t->closemap(); break;
        case 15: _t->animation_valuechanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 16: _t->animation_finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (emulation::*_t)(int , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&emulation::emitrotate)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject emulation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_emulation.data,
      qt_meta_data_emulation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *emulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *emulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_emulation.stringdata0))
        return static_cast<void*>(const_cast< emulation*>(this));
    return QWidget::qt_metacast(_clname);
}

int emulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void emulation::emitrotate(int _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
