/****************************************************************************
** Meta object code from reading C++ file 'VeyonConnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/VeyonConnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VeyonConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VeyonConnection_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VeyonConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VeyonConnection_t qt_meta_stringdata_VeyonConnection = {
    {
QT_MOC_LITERAL(0, 0, 15), // "VeyonConnection"
QT_MOC_LITERAL(1, 16, 22), // "featureMessageReceived"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "FeatureMessage"
QT_MOC_LITERAL(4, 55, 18), // "registerConnection"
QT_MOC_LITERAL(5, 74, 20) // "unregisterConnection"

    },
    "VeyonConnection\0featureMessageReceived\0"
    "\0FeatureMessage\0registerConnection\0"
    "unregisterConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VeyonConnection[] = {

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
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VeyonConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VeyonConnection *_t = static_cast<VeyonConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->featureMessageReceived((*reinterpret_cast< const FeatureMessage(*)>(_a[1]))); break;
        case 1: _t->registerConnection(); break;
        case 2: _t->unregisterConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VeyonConnection::*_t)(const FeatureMessage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VeyonConnection::featureMessageReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VeyonConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VeyonConnection.data,
      qt_meta_data_VeyonConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VeyonConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VeyonConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VeyonConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VeyonConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void VeyonConnection::featureMessageReceived(const FeatureMessage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
