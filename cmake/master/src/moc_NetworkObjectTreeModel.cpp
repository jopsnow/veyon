/****************************************************************************
** Meta object code from reading C++ file 'NetworkObjectTreeModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../master/src/NetworkObjectTreeModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkObjectTreeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkObjectTreeModel_t {
    QByteArrayData data[11];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkObjectTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkObjectTreeModel_t qt_meta_stringdata_NetworkObjectTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "NetworkObjectTreeModel"
QT_MOC_LITERAL(1, 23, 18), // "beginInsertObjects"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "NetworkObject"
QT_MOC_LITERAL(4, 57, 6), // "parent"
QT_MOC_LITERAL(5, 64, 5), // "index"
QT_MOC_LITERAL(6, 70, 5), // "count"
QT_MOC_LITERAL(7, 76, 16), // "endInsertObjects"
QT_MOC_LITERAL(8, 93, 18), // "beginRemoveObjects"
QT_MOC_LITERAL(9, 112, 16), // "endRemoveObjects"
QT_MOC_LITERAL(10, 129, 12) // "updateObject"

    },
    "NetworkObjectTreeModel\0beginInsertObjects\0"
    "\0NetworkObject\0parent\0index\0count\0"
    "endInsertObjects\0beginRemoveObjects\0"
    "endRemoveObjects\0updateObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkObjectTreeModel[] = {

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
       1,    3,   39,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    3,   47,    2, 0x08 /* Private */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    2,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

       0        // eod
};

void NetworkObjectTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkObjectTreeModel *_t = static_cast<NetworkObjectTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beginInsertObjects((*reinterpret_cast< const NetworkObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->endInsertObjects(); break;
        case 2: _t->beginRemoveObjects((*reinterpret_cast< const NetworkObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->endRemoveObjects(); break;
        case 4: _t->updateObject((*reinterpret_cast< const NetworkObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject NetworkObjectTreeModel::staticMetaObject = {
    { &NetworkObjectModel::staticMetaObject, qt_meta_stringdata_NetworkObjectTreeModel.data,
      qt_meta_data_NetworkObjectTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetworkObjectTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkObjectTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkObjectTreeModel.stringdata0))
        return static_cast<void*>(this);
    return NetworkObjectModel::qt_metacast(_clname);
}

int NetworkObjectTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NetworkObjectModel::qt_metacall(_c, _id, _a);
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
