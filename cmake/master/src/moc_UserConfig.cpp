/****************************************************************************
** Meta object code from reading C++ file 'UserConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../master/src/UserConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserConfig_t {
    QByteArrayData data[12];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserConfig_t qt_meta_stringdata_UserConfig = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UserConfig"
QT_MOC_LITERAL(1, 11, 24), // "setCheckedNetworkObjects"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "setComputerPositions"
QT_MOC_LITERAL(4, 58, 29), // "setUseCustomComputerPositions"
QT_MOC_LITERAL(5, 88, 27), // "setFilterPoweredOnComputers"
QT_MOC_LITERAL(6, 116, 23), // "setMonitoringScreenSize"
QT_MOC_LITERAL(7, 140, 14), // "setDefaultRole"
QT_MOC_LITERAL(8, 155, 25), // "setToolButtonIconOnlyMode"
QT_MOC_LITERAL(9, 181, 13), // "setNoToolTips"
QT_MOC_LITERAL(10, 195, 14), // "setWindowState"
QT_MOC_LITERAL(11, 210, 17) // "setWindowGeometry"

    },
    "UserConfig\0setCheckedNetworkObjects\0"
    "\0setComputerPositions\0"
    "setUseCustomComputerPositions\0"
    "setFilterPoweredOnComputers\0"
    "setMonitoringScreenSize\0setDefaultRole\0"
    "setToolButtonIconOnlyMode\0setNoToolTips\0"
    "setWindowState\0setWindowGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       3,    1,   67,    2, 0x0a /* Public */,
       4,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       6,    1,   76,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
       9,    1,   85,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonArray,    2,
    QMetaType::Void, QMetaType::QJsonArray,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void UserConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserConfig *_t = static_cast<UserConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCheckedNetworkObjects((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 1: _t->setComputerPositions((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 2: _t->setUseCustomComputerPositions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFilterPoweredOnComputers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setMonitoringScreenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setDefaultRole((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setToolButtonIconOnlyMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setNoToolTips((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setWindowState((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setWindowGeometry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UserConfig::staticMetaObject = {
    { &Configuration::Object::staticMetaObject, qt_meta_stringdata_UserConfig.data,
      qt_meta_data_UserConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UserConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserConfig.stringdata0))
        return static_cast<void*>(this);
    return Configuration::Object::qt_metacast(_clname);
}

int UserConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Configuration::Object::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
