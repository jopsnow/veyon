/****************************************************************************
** Meta object code from reading C++ file 'DesktopServicesConfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/desktopservices/DesktopServicesConfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DesktopServicesConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DesktopServicesConfiguration_t {
    QByteArrayData data[4];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DesktopServicesConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DesktopServicesConfiguration_t qt_meta_stringdata_DesktopServicesConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 28), // "DesktopServicesConfiguration"
QT_MOC_LITERAL(1, 29, 21), // "setPredefinedPrograms"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 21) // "setPredefinedWebsites"

    },
    "DesktopServicesConfiguration\0"
    "setPredefinedPrograms\0\0setPredefinedWebsites"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DesktopServicesConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       3,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonArray,    2,
    QMetaType::Void, QMetaType::QJsonArray,    2,

       0        // eod
};

void DesktopServicesConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DesktopServicesConfiguration *_t = static_cast<DesktopServicesConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPredefinedPrograms((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 1: _t->setPredefinedWebsites((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DesktopServicesConfiguration::staticMetaObject = {
    { &Configuration::Proxy::staticMetaObject, qt_meta_stringdata_DesktopServicesConfiguration.data,
      qt_meta_data_DesktopServicesConfiguration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DesktopServicesConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesktopServicesConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DesktopServicesConfiguration.stringdata0))
        return static_cast<void*>(this);
    return Configuration::Proxy::qt_metacast(_clname);
}

int DesktopServicesConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Configuration::Proxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
