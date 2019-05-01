/****************************************************************************
** Meta object code from reading C++ file 'MasterConfigurationPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../configurator/src/MasterConfigurationPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MasterConfigurationPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MasterConfigurationPage_t {
    QByteArrayData data[6];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasterConfigurationPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasterConfigurationPage_t qt_meta_stringdata_MasterConfigurationPage = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MasterConfigurationPage"
QT_MOC_LITERAL(1, 24, 30), // "openUserConfigurationDirectory"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 23), // "openScreenshotDirectory"
QT_MOC_LITERAL(4, 80, 13), // "enableFeature"
QT_MOC_LITERAL(5, 94, 14) // "disableFeature"

    },
    "MasterConfigurationPage\0"
    "openUserConfigurationDirectory\0\0"
    "openScreenshotDirectory\0enableFeature\0"
    "disableFeature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasterConfigurationPage[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasterConfigurationPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasterConfigurationPage *_t = static_cast<MasterConfigurationPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openUserConfigurationDirectory(); break;
        case 1: _t->openScreenshotDirectory(); break;
        case 2: _t->enableFeature(); break;
        case 3: _t->disableFeature(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MasterConfigurationPage::staticMetaObject = {
    { &ConfigurationPage::staticMetaObject, qt_meta_stringdata_MasterConfigurationPage.data,
      qt_meta_data_MasterConfigurationPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MasterConfigurationPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasterConfigurationPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasterConfigurationPage.stringdata0))
        return static_cast<void*>(this);
    return ConfigurationPage::qt_metacast(_clname);
}

int MasterConfigurationPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigurationPage::qt_metacall(_c, _id, _a);
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
