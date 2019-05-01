/****************************************************************************
** Meta object code from reading C++ file 'NetworkObjectDirectory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/NetworkObjectDirectory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkObjectDirectory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkObjectDirectory_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkObjectDirectory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkObjectDirectory_t qt_meta_stringdata_NetworkObjectDirectory = {
    {
QT_MOC_LITERAL(0, 0, 22), // "NetworkObjectDirectory"
QT_MOC_LITERAL(1, 23, 24), // "objectsAboutToBeInserted"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 13), // "NetworkObject"
QT_MOC_LITERAL(4, 63, 6), // "parent"
QT_MOC_LITERAL(5, 70, 5), // "index"
QT_MOC_LITERAL(6, 76, 5), // "count"
QT_MOC_LITERAL(7, 82, 15), // "objectsInserted"
QT_MOC_LITERAL(8, 98, 23), // "objectsAboutToBeRemoved"
QT_MOC_LITERAL(9, 122, 14), // "objectsRemoved"
QT_MOC_LITERAL(10, 137, 13), // "objectChanged"
QT_MOC_LITERAL(11, 151, 6) // "update"

    },
    "NetworkObjectDirectory\0objectsAboutToBeInserted\0"
    "\0NetworkObject\0parent\0index\0count\0"
    "objectsInserted\0objectsAboutToBeRemoved\0"
    "objectsRemoved\0objectChanged\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkObjectDirectory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    0,   51,    2, 0x06 /* Public */,
       8,    3,   52,    2, 0x06 /* Public */,
       9,    0,   59,    2, 0x06 /* Public */,
      10,    2,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void NetworkObjectDirectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkObjectDirectory *_t = static_cast<NetworkObjectDirectory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectsAboutToBeInserted((*reinterpret_cast< const NetworkObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->objectsInserted(); break;
        case 2: _t->objectsAboutToBeRemoved((*reinterpret_cast< const NetworkObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->objectsRemoved(); break;
        case 4: _t->objectChanged((*reinterpret_cast< const NetworkObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NetworkObjectDirectory::*_t)(const NetworkObject & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkObjectDirectory::objectsAboutToBeInserted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NetworkObjectDirectory::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkObjectDirectory::objectsInserted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NetworkObjectDirectory::*_t)(const NetworkObject & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkObjectDirectory::objectsAboutToBeRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NetworkObjectDirectory::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkObjectDirectory::objectsRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NetworkObjectDirectory::*_t)(const NetworkObject & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkObjectDirectory::objectChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject NetworkObjectDirectory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkObjectDirectory.data,
      qt_meta_data_NetworkObjectDirectory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetworkObjectDirectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkObjectDirectory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkObjectDirectory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkObjectDirectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void NetworkObjectDirectory::objectsAboutToBeInserted(const NetworkObject & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkObjectDirectory::objectsInserted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkObjectDirectory::objectsAboutToBeRemoved(const NetworkObject & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkObjectDirectory::objectsRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetworkObjectDirectory::objectChanged(const NetworkObject & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
