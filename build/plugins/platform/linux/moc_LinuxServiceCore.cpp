/****************************************************************************
** Meta object code from reading C++ file 'LinuxServiceCore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/platform/linux/LinuxServiceCore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinuxServiceCore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinuxServiceCore_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinuxServiceCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinuxServiceCore_t qt_meta_stringdata_LinuxServiceCore = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LinuxServiceCore"
QT_MOC_LITERAL(1, 17, 21), // "connectToLoginManager"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "startServer"
QT_MOC_LITERAL(4, 52, 15), // "login1SessionId"
QT_MOC_LITERAL(5, 68, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(6, 84, 17), // "sessionObjectPath"
QT_MOC_LITERAL(7, 102, 10), // "stopServer"
QT_MOC_LITERAL(8, 113, 11), // "sessionPath"
QT_MOC_LITERAL(9, 125, 14) // "stopAllServers"

    },
    "LinuxServiceCore\0connectToLoginManager\0"
    "\0startServer\0login1SessionId\0"
    "QDBusObjectPath\0sessionObjectPath\0"
    "stopServer\0sessionPath\0stopAllServers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinuxServiceCore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       7,    2,   45,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void LinuxServiceCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinuxServiceCore *_t = static_cast<LinuxServiceCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectToLoginManager(); break;
        case 1: _t->startServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2]))); break;
        case 2: _t->stopServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2]))); break;
        case 3: _t->stopServer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->stopAllServers(); break;
        default: ;
        }
    }
}

const QMetaObject LinuxServiceCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LinuxServiceCore.data,
      qt_meta_data_LinuxServiceCore,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LinuxServiceCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinuxServiceCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinuxServiceCore.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PlatformServiceCore"))
        return static_cast< PlatformServiceCore*>(this);
    return QObject::qt_metacast(_clname);
}

int LinuxServiceCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
