/****************************************************************************
** Meta object code from reading C++ file 'FeatureWorkerManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/FeatureWorkerManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FeatureWorkerManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FeatureWorkerManager_t {
    QByteArrayData data[17];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FeatureWorkerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FeatureWorkerManager_t qt_meta_stringdata_FeatureWorkerManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FeatureWorkerManager"
QT_MOC_LITERAL(1, 21, 16), // "acceptConnection"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "processConnection"
QT_MOC_LITERAL(4, 57, 11), // "QTcpSocket*"
QT_MOC_LITERAL(5, 69, 6), // "socket"
QT_MOC_LITERAL(6, 76, 15), // "closeConnection"
QT_MOC_LITERAL(7, 92, 19), // "sendPendingMessages"
QT_MOC_LITERAL(8, 112, 11), // "startWorker"
QT_MOC_LITERAL(9, 124, 7), // "Feature"
QT_MOC_LITERAL(10, 132, 7), // "feature"
QT_MOC_LITERAL(11, 140, 17), // "WorkerProcessMode"
QT_MOC_LITERAL(12, 158, 17), // "workerProcessMode"
QT_MOC_LITERAL(13, 176, 10), // "stopWorker"
QT_MOC_LITERAL(14, 187, 11), // "sendMessage"
QT_MOC_LITERAL(15, 199, 14), // "FeatureMessage"
QT_MOC_LITERAL(16, 214, 7) // "message"

    },
    "FeatureWorkerManager\0acceptConnection\0"
    "\0processConnection\0QTcpSocket*\0socket\0"
    "closeConnection\0sendPendingMessages\0"
    "startWorker\0Feature\0feature\0"
    "WorkerProcessMode\0workerProcessMode\0"
    "stopWorker\0sendMessage\0FeatureMessage\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FeatureWorkerManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    2,   57,    2, 0x02 /* Public */,
      13,    1,   62,    2, 0x02 /* Public */,
      14,    1,   65,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void FeatureWorkerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FeatureWorkerManager *_t = static_cast<FeatureWorkerManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptConnection(); break;
        case 1: _t->processConnection((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 2: _t->closeConnection((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->sendPendingMessages(); break;
        case 4: _t->startWorker((*reinterpret_cast< const Feature(*)>(_a[1])),(*reinterpret_cast< WorkerProcessMode(*)>(_a[2]))); break;
        case 5: _t->stopWorker((*reinterpret_cast< const Feature(*)>(_a[1]))); break;
        case 6: _t->sendMessage((*reinterpret_cast< const FeatureMessage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FeatureWorkerManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FeatureWorkerManager.data,
      qt_meta_data_FeatureWorkerManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FeatureWorkerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FeatureWorkerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FeatureWorkerManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FeatureWorkerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
