/****************************************************************************
** Meta object code from reading C++ file 'result.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../result.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'result.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_result_t {
    QByteArrayData data[10];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_result_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_result_t qt_meta_stringdata_result = {
    {
QT_MOC_LITERAL(0, 0, 6), // "result"
QT_MOC_LITERAL(1, 7, 18), // "QcellDoubleClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "row"
QT_MOC_LITERAL(4, 31, 6), // "column"
QT_MOC_LITERAL(5, 38, 7), // "refresh"
QT_MOC_LITERAL(6, 46, 11), // "doubleClick"
QT_MOC_LITERAL(7, 58, 11), // "show_result"
QT_MOC_LITERAL(8, 70, 12), // "show_refresh"
QT_MOC_LITERAL(9, 83, 21) // "on_pushButton_clicked"

    },
    "result\0QcellDoubleClicked\0\0row\0column\0"
    "refresh\0doubleClick\0show_result\0"
    "show_refresh\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_result[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   50,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void result::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        result *_t = static_cast<result *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->QcellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->doubleClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->show_result(); break;
        case 4: _t->show_refresh(); break;
        case 5: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (result::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&result::QcellDoubleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (result::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&result::refresh)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject result::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_result.data,
      qt_meta_data_result,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *result::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *result::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_result.stringdata0))
        return static_cast<void*>(const_cast< result*>(this));
    return QWidget::qt_metacast(_clname);
}

int result::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void result::QcellDoubleClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void result::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
