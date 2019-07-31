/****************************************************************************
** Meta object code from reading C++ file 'weapon_navigation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Weapon_navigation/weapon_navigation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weapon_navigation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Weapon_navigation_t {
    QByteArrayData data[17];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Weapon_navigation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Weapon_navigation_t qt_meta_stringdata_Weapon_navigation = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Weapon_navigation"
QT_MOC_LITERAL(1, 18, 17), // "thread1_save_slot"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "_save"
QT_MOC_LITERAL(4, 43, 17), // "thread1_open_slot"
QT_MOC_LITERAL(5, 61, 5), // "_open"
QT_MOC_LITERAL(6, 67, 21), // "deal_VideoImage_data1"
QT_MOC_LITERAL(7, 89, 5), // "image"
QT_MOC_LITERAL(8, 95, 33), // "label1_customContextMenuReque..."
QT_MOC_LITERAL(9, 129, 3), // "pos"
QT_MOC_LITERAL(10, 133, 24), // "action_camera1_open_slot"
QT_MOC_LITERAL(11, 158, 25), // "action_camera1_close_slot"
QT_MOC_LITERAL(12, 184, 24), // "action_camera1_save_slot"
QT_MOC_LITERAL(13, 209, 7), // "ischeck"
QT_MOC_LITERAL(14, 217, 8), // "Joy_data"
QT_MOC_LITERAL(15, 226, 26), // "sensor_msgs::Joy::ConstPtr"
QT_MOC_LITERAL(16, 253, 3) // "msg"

    },
    "Weapon_navigation\0thread1_save_slot\0"
    "\0_save\0thread1_open_slot\0_open\0"
    "deal_VideoImage_data1\0image\0"
    "label1_customContextMenuRequested\0pos\0"
    "action_camera1_open_slot\0"
    "action_camera1_close_slot\0"
    "action_camera1_save_slot\0ischeck\0"
    "Joy_data\0sensor_msgs::Joy::ConstPtr\0"
    "msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Weapon_navigation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
      10,    0,   66,    2, 0x0a /* Public */,
      11,    0,   67,    2, 0x0a /* Public */,
      12,    1,   68,    2, 0x0a /* Public */,
      14,    1,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QImage,    7,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void Weapon_navigation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Weapon_navigation *_t = static_cast<Weapon_navigation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->thread1_save_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->thread1_open_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->deal_VideoImage_data1((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->label1_customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->action_camera1_open_slot(); break;
        case 5: _t->action_camera1_close_slot(); break;
        case 6: _t->action_camera1_save_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->Joy_data((*reinterpret_cast< const sensor_msgs::Joy::ConstPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Weapon_navigation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Weapon_navigation.data,
      qt_meta_data_Weapon_navigation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Weapon_navigation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Weapon_navigation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Weapon_navigation.stringdata0))
        return static_cast<void*>(const_cast< Weapon_navigation*>(this));
    return QWidget::qt_metacast(_clname);
}

int Weapon_navigation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
