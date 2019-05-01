/****************************************************************************
** Meta object code from reading C++ file 'FeatureManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/FeatureManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FeatureManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FeatureManager_t {
    QByteArrayData data[13];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FeatureManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FeatureManager_t qt_meta_stringdata_FeatureManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FeatureManager"
QT_MOC_LITERAL(1, 15, 20), // "handleFeatureMessage"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "VeyonMasterInterface&"
QT_MOC_LITERAL(4, 59, 6), // "master"
QT_MOC_LITERAL(5, 66, 14), // "FeatureMessage"
QT_MOC_LITERAL(6, 81, 7), // "message"
QT_MOC_LITERAL(7, 89, 33), // "ComputerControlInterface::Poi..."
QT_MOC_LITERAL(8, 123, 24), // "computerControlInterface"
QT_MOC_LITERAL(9, 148, 21), // "VeyonServerInterface&"
QT_MOC_LITERAL(10, 170, 6), // "server"
QT_MOC_LITERAL(11, 177, 21), // "VeyonWorkerInterface&"
QT_MOC_LITERAL(12, 199, 6) // "worker"

    },
    "FeatureManager\0handleFeatureMessage\0"
    "\0VeyonMasterInterface&\0master\0"
    "FeatureMessage\0message\0"
    "ComputerControlInterface::Pointer\0"
    "computerControlInterface\0VeyonServerInterface&\0"
    "server\0VeyonWorkerInterface&\0worker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FeatureManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x0a /* Public */,
       1,    2,   36,    2, 0x0a /* Public */,
       1,    2,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 5,   10,    6,
    QMetaType::Bool, 0x80000000 | 11, 0x80000000 | 5,   12,    6,

       0        // eod
};

void FeatureManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FeatureManager *_t = static_cast<FeatureManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->handleFeatureMessage((*reinterpret_cast< VeyonMasterInterface(*)>(_a[1])),(*reinterpret_cast< const FeatureMessage(*)>(_a[2])),(*reinterpret_cast< ComputerControlInterface::Pointer(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->handleFeatureMessage((*reinterpret_cast< VeyonServerInterface(*)>(_a[1])),(*reinterpret_cast< const FeatureMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->handleFeatureMessage((*reinterpret_cast< VeyonWorkerInterface(*)>(_a[1])),(*reinterpret_cast< const FeatureMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject FeatureManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FeatureManager.data,
      qt_meta_data_FeatureManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FeatureManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FeatureManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FeatureManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FeatureManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
