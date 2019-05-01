/****************************************************************************
** Meta object code from reading C++ file 'ComputerMonitoringView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../master/src/ComputerMonitoringView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComputerMonitoringView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComputerMonitoringView_t {
    QByteArrayData data[19];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComputerMonitoringView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComputerMonitoringView_t qt_meta_stringdata_ComputerMonitoringView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ComputerMonitoringView"
QT_MOC_LITERAL(1, 23, 26), // "computerScreenSizeAdjusted"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 4), // "size"
QT_MOC_LITERAL(4, 56, 15), // "setSearchFilter"
QT_MOC_LITERAL(5, 72, 12), // "searchFilter"
QT_MOC_LITERAL(6, 85, 27), // "setFilterPoweredOnComputers"
QT_MOC_LITERAL(7, 113, 7), // "enabled"
QT_MOC_LITERAL(8, 121, 21), // "setComputerScreenSize"
QT_MOC_LITERAL(9, 143, 28), // "autoAdjustComputerScreenSize"
QT_MOC_LITERAL(10, 172, 29), // "setUseCustomComputerPositions"
QT_MOC_LITERAL(11, 202, 14), // "alignComputers"
QT_MOC_LITERAL(12, 217, 21), // "runDoubleClickFeature"
QT_MOC_LITERAL(13, 239, 5), // "index"
QT_MOC_LITERAL(14, 245, 15), // "showContextMenu"
QT_MOC_LITERAL(15, 261, 3), // "pos"
QT_MOC_LITERAL(16, 265, 10), // "runFeature"
QT_MOC_LITERAL(17, 276, 7), // "Feature"
QT_MOC_LITERAL(18, 284, 7) // "feature"

    },
    "ComputerMonitoringView\0"
    "computerScreenSizeAdjusted\0\0size\0"
    "setSearchFilter\0searchFilter\0"
    "setFilterPoweredOnComputers\0enabled\0"
    "setComputerScreenSize\0"
    "autoAdjustComputerScreenSize\0"
    "setUseCustomComputerPositions\0"
    "alignComputers\0runDoubleClickFeature\0"
    "index\0showContextMenu\0pos\0runFeature\0"
    "Feature\0feature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputerMonitoringView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      16,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void ComputerMonitoringView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComputerMonitoringView *_t = static_cast<ComputerMonitoringView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->computerScreenSizeAdjusted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setSearchFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFilterPoweredOnComputers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setComputerScreenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->autoAdjustComputerScreenSize(); break;
        case 5: _t->setUseCustomComputerPositions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->alignComputers(); break;
        case 7: _t->runDoubleClickFeature((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->runFeature((*reinterpret_cast< const Feature(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ComputerMonitoringView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerMonitoringView::computerScreenSizeAdjusted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ComputerMonitoringView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ComputerMonitoringView.data,
      qt_meta_data_ComputerMonitoringView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ComputerMonitoringView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputerMonitoringView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComputerMonitoringView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ComputerMonitoringView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ComputerMonitoringView::computerScreenSizeAdjusted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
