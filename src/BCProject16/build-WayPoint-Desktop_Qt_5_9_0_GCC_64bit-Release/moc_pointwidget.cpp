/****************************************************************************
** Meta object code from reading C++ file 'pointwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WayPoint/pointwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pointwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PointWidget_t {
    QByteArrayData data[23];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PointWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PointWidget_t qt_meta_stringdata_PointWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PointWidget"
QT_MOC_LITERAL(1, 12, 18), // "tablechange_signal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "BeginGrabButt_clicked"
QT_MOC_LITERAL(4, 54, 22), // "ExportFileButt_clicked"
QT_MOC_LITERAL(5, 77, 20), // "SendFileButt_clicked"
QT_MOC_LITERAL(6, 98, 14), // "OkButt_clicked"
QT_MOC_LITERAL(7, 113, 15), // "OkButt2_clicked"
QT_MOC_LITERAL(8, 129, 20), // "SaveFileButt_clicked"
QT_MOC_LITERAL(9, 150, 16), // "tablechange_slot"
QT_MOC_LITERAL(10, 167, 5), // "index"
QT_MOC_LITERAL(11, 173, 19), // "fptWidget_destoryed"
QT_MOC_LITERAL(12, 193, 18), // "loadfile_startslot"
QT_MOC_LITERAL(13, 212, 8), // "file_row"
QT_MOC_LITERAL(14, 221, 9), // "file_size"
QT_MOC_LITERAL(15, 231, 17), // "loadfile_stopslot"
QT_MOC_LITERAL(16, 249, 19), // "loadfile_runingslot"
QT_MOC_LITERAL(17, 269, 10), // "currentrow"
QT_MOC_LITERAL(18, 280, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(19, 302, 9), // "list_item"
QT_MOC_LITERAL(20, 312, 18), // "savefile_startslot"
QT_MOC_LITERAL(21, 331, 17), // "savefile_stopslot"
QT_MOC_LITERAL(22, 349, 19) // "savefile_runingslot"

    },
    "PointWidget\0tablechange_signal\0\0"
    "BeginGrabButt_clicked\0ExportFileButt_clicked\0"
    "SendFileButt_clicked\0OkButt_clicked\0"
    "OkButt2_clicked\0SaveFileButt_clicked\0"
    "tablechange_slot\0index\0fptWidget_destoryed\0"
    "loadfile_startslot\0file_row\0file_size\0"
    "loadfile_stopslot\0loadfile_runingslot\0"
    "currentrow\0QList<QStandardItem*>\0"
    "list_item\0savefile_startslot\0"
    "savefile_stopslot\0savefile_runingslot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PointWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   92,    2, 0x08 /* Private */,
       4,    0,   93,    2, 0x08 /* Private */,
       5,    0,   94,    2, 0x08 /* Private */,
       6,    0,   95,    2, 0x08 /* Private */,
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x0a /* Public */,
      12,    2,  104,    2, 0x0a /* Public */,
      15,    0,  109,    2, 0x0a /* Public */,
      16,    2,  110,    2, 0x0a /* Public */,
      20,    2,  115,    2, 0x0a /* Public */,
      21,    0,  120,    2, 0x0a /* Public */,
      22,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   17,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void PointWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PointWidget *_t = static_cast<PointWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tablechange_signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->BeginGrabButt_clicked(); break;
        case 2: _t->ExportFileButt_clicked(); break;
        case 3: _t->SendFileButt_clicked(); break;
        case 4: _t->OkButt_clicked(); break;
        case 5: _t->OkButt2_clicked(); break;
        case 6: _t->SaveFileButt_clicked(); break;
        case 7: _t->tablechange_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->fptWidget_destoryed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 9: _t->loadfile_startslot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->loadfile_stopslot(); break;
        case 11: _t->loadfile_runingslot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QStandardItem*>(*)>(_a[2]))); break;
        case 12: _t->savefile_startslot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->savefile_stopslot(); break;
        case 14: _t->savefile_runingslot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PointWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PointWidget::tablechange_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PointWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PointWidget.data,
      qt_meta_data_PointWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PointWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PointWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PointWidget.stringdata0))
        return static_cast<void*>(const_cast< PointWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PointWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PointWidget::tablechange_signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
