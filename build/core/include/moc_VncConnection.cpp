/****************************************************************************
** Meta object code from reading C++ file 'VncConnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/VncConnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VncConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VncConnection_t {
    QByteArrayData data[24];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VncConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VncConnection_t qt_meta_stringdata_VncConnection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VncConnection"
QT_MOC_LITERAL(1, 14, 21), // "connectionEstablished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "imageUpdated"
QT_MOC_LITERAL(4, 50, 1), // "x"
QT_MOC_LITERAL(5, 52, 1), // "y"
QT_MOC_LITERAL(6, 54, 1), // "w"
QT_MOC_LITERAL(7, 56, 1), // "h"
QT_MOC_LITERAL(8, 58, 25), // "framebufferUpdateComplete"
QT_MOC_LITERAL(9, 84, 22), // "framebufferSizeChanged"
QT_MOC_LITERAL(10, 107, 16), // "cursorPosChanged"
QT_MOC_LITERAL(11, 124, 18), // "cursorShapeUpdated"
QT_MOC_LITERAL(12, 143, 11), // "cursorShape"
QT_MOC_LITERAL(13, 155, 2), // "xh"
QT_MOC_LITERAL(14, 158, 2), // "yh"
QT_MOC_LITERAL(15, 161, 6), // "gotCut"
QT_MOC_LITERAL(16, 168, 4), // "text"
QT_MOC_LITERAL(17, 173, 12), // "stateChanged"
QT_MOC_LITERAL(18, 186, 10), // "mouseEvent"
QT_MOC_LITERAL(19, 197, 10), // "buttonMask"
QT_MOC_LITERAL(20, 208, 8), // "keyEvent"
QT_MOC_LITERAL(21, 217, 3), // "key"
QT_MOC_LITERAL(22, 221, 7), // "pressed"
QT_MOC_LITERAL(23, 229, 9) // "clientCut"

    },
    "VncConnection\0connectionEstablished\0"
    "\0imageUpdated\0x\0y\0w\0h\0framebufferUpdateComplete\0"
    "framebufferSizeChanged\0cursorPosChanged\0"
    "cursorShapeUpdated\0cursorShape\0xh\0yh\0"
    "gotCut\0text\0stateChanged\0mouseEvent\0"
    "buttonMask\0keyEvent\0key\0pressed\0"
    "clientCut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VncConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    4,   70,    2, 0x06 /* Public */,
       8,    0,   79,    2, 0x06 /* Public */,
       9,    2,   80,    2, 0x06 /* Public */,
      10,    2,   85,    2, 0x06 /* Public */,
      11,    3,   90,    2, 0x06 /* Public */,
      15,    1,   97,    2, 0x06 /* Public */,
      17,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    3,  101,    2, 0x0a /* Public */,
      20,    2,  108,    2, 0x0a /* Public */,
      23,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,   19,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   21,   22,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void VncConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VncConnection *_t = static_cast<VncConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionEstablished(); break;
        case 1: _t->imageUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->framebufferUpdateComplete(); break;
        case 3: _t->framebufferSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->cursorPosChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->cursorShapeUpdated((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->gotCut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->stateChanged(); break;
        case 8: _t->mouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->keyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->clientCut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VncConnection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncConnection::connectionEstablished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VncConnection::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncConnection::imageUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VncConnection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncConnection::framebufferUpdateComplete)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VncConnection::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncConnection::framebufferSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (VncConnection::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncConnection::cursorPosChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (VncConnection::*_t)(const QPixmap & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncConnection::cursorShapeUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (VncConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncConnection::gotCut)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (VncConnection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncConnection::stateChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject VncConnection::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_VncConnection.data,
      qt_meta_data_VncConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VncConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VncConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VncConnection.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int VncConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void VncConnection::connectionEstablished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VncConnection::imageUpdated(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VncConnection::framebufferUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VncConnection::framebufferSizeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VncConnection::cursorPosChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VncConnection::cursorShapeUpdated(const QPixmap & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VncConnection::gotCut(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VncConnection::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
