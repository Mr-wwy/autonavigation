/****************************************************************************
** Meta object code from reading C++ file 'mapview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Driving/mapview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapView_t {
    QByteArrayData data[12];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapView_t qt_meta_stringdata_MapView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MapView"
QT_MOC_LITERAL(1, 8, 25), // "mousedoubleclick_centeron"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "zoomIn"
QT_MOC_LITERAL(4, 42, 7), // "zoomOut"
QT_MOC_LITERAL(5, 50, 4), // "zoom"
QT_MOC_LITERAL(6, 55, 11), // "scaleFactor"
QT_MOC_LITERAL(7, 67, 13), // "key_translate"
QT_MOC_LITERAL(8, 81, 5), // "delta"
QT_MOC_LITERAL(9, 87, 13), // "horizontalBar"
QT_MOC_LITERAL(10, 101, 5), // "value"
QT_MOC_LITERAL(11, 107, 12) // "verticallBar"

    },
    "MapView\0mousedoubleclick_centeron\0\0"
    "zoomIn\0zoomOut\0zoom\0scaleFactor\0"
    "key_translate\0delta\0horizontalBar\0"
    "value\0verticallBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QPointF,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void MapView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapView *_t = static_cast<MapView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousedoubleclick_centeron(); break;
        case 1: _t->zoomIn(); break;
        case 2: _t->zoomOut(); break;
        case 3: _t->zoom((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->key_translate((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 5: _t->horizontalBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->verticallBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MapView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapView::mousedoubleclick_centeron)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MapView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_MapView.data,
      qt_meta_data_MapView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapView.stringdata0))
        return static_cast<void*>(const_cast< MapView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int MapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MapView::mousedoubleclick_centeron()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
