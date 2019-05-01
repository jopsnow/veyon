/****************************************************************************
** Meta object code from reading C++ file 'VeyonMaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../master/src/VeyonMaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VeyonMaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VeyonMaster_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VeyonMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VeyonMaster_t qt_meta_stringdata_VeyonMaster = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VeyonMaster"
QT_MOC_LITERAL(1, 12, 10), // "runFeature"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "Feature"
QT_MOC_LITERAL(4, 32, 7), // "feature"
QT_MOC_LITERAL(5, 40, 21), // "enforceDesignatedMode"
QT_MOC_LITERAL(6, 62, 5), // "index"
QT_MOC_LITERAL(7, 68, 19), // "stopAllModeFeatures"
QT_MOC_LITERAL(8, 88, 28), // "ComputerControlInterfaceList"
QT_MOC_LITERAL(9, 117, 25) // "computerControlInterfaces"

    },
    "VeyonMaster\0runFeature\0\0Feature\0feature\0"
    "enforceDesignatedMode\0index\0"
    "stopAllModeFeatures\0ComputerControlInterfaceList\0"
    "computerControlInterfaces"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VeyonMaster[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void VeyonMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VeyonMaster *_t = static_cast<VeyonMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runFeature((*reinterpret_cast< const Feature(*)>(_a[1]))); break;
        case 1: _t->enforceDesignatedMode((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->stopAllModeFeatures((*reinterpret_cast< const ComputerControlInterfaceList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject VeyonMaster::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VeyonMaster.data,
      qt_meta_data_VeyonMaster,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VeyonMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VeyonMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VeyonMaster.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "VeyonMasterInterface"))
        return static_cast< VeyonMasterInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int VeyonMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
