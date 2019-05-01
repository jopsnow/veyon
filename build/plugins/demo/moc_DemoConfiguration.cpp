/****************************************************************************
** Meta object code from reading C++ file 'DemoConfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/demo/DemoConfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DemoConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DemoConfiguration_t {
    QByteArrayData data[6];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DemoConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DemoConfiguration_t qt_meta_stringdata_DemoConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DemoConfiguration"
QT_MOC_LITERAL(1, 18, 24), // "setMultithreadingEnabled"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 28), // "setFramebufferUpdateInterval"
QT_MOC_LITERAL(4, 73, 19), // "setKeyFrameInterval"
QT_MOC_LITERAL(5, 93, 14) // "setMemoryLimit"

    },
    "DemoConfiguration\0setMultithreadingEnabled\0"
    "\0setFramebufferUpdateInterval\0"
    "setKeyFrameInterval\0setMemoryLimit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DemoConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       3,    1,   37,    2, 0x0a /* Public */,
       4,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void DemoConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DemoConfiguration *_t = static_cast<DemoConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMultithreadingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setFramebufferUpdateInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setKeyFrameInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMemoryLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DemoConfiguration::staticMetaObject = {
    { &Configuration::Proxy::staticMetaObject, qt_meta_stringdata_DemoConfiguration.data,
      qt_meta_data_DemoConfiguration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DemoConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DemoConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DemoConfiguration.stringdata0))
        return static_cast<void*>(this);
    return Configuration::Proxy::qt_metacast(_clname);
}

int DemoConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Configuration::Proxy::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
