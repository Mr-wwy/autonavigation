/****************************************************************************
** Meta object code from reading C++ file 'map_localization.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Driving/map_localization.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'map_localization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Map_Localization_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Map_Localization_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Map_Localization_t qt_meta_stringdata_Map_Localization = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Map_Localization"
QT_MOC_LITERAL(1, 17, 22), // "modifyfilename_signals"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "newfilename"
QT_MOC_LITERAL(4, 53, 29), // "mousedoubleclick_centeronslot"
QT_MOC_LITERAL(5, 83, 31), // "customContextMenuRequested_slot"
QT_MOC_LITERAL(6, 115, 1), // "p"
QT_MOC_LITERAL(7, 117, 15) // "openaction_slot"

    },
    "Map_Localization\0modifyfilename_signals\0"
    "\0newfilename\0mousedoubleclick_centeronslot\0"
    "customContextMenuRequested_slot\0p\0"
    "openaction_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Map_Localization[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Map_Localization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Map_Localization *_t = static_cast<Map_Localization *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modifyfilename_signals((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->mousedoubleclick_centeronslot(); break;
        case 2: _t->customContextMenuRequested_slot((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->openaction_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Map_Localization::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Map_Localization::modifyfilename_signals)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Map_Localization::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Map_Localization.data,
      qt_meta_data_Map_Localization,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Map_Localization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Map_Localization::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Map_Localization.stringdata0))
        return static_cast<void*>(const_cast< Map_Localization*>(this));
    return QWidget::qt_metacast(_clname);
}

int Map_Localization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Map_Localization::modifyfilename_signals(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
