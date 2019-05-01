/****************************************************************************
** Meta object code from reading C++ file 'BuiltinDirectoryConfigurationPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/builtindirectory/BuiltinDirectoryConfigurationPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BuiltinDirectoryConfigurationPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BuiltinDirectoryConfigurationPage_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BuiltinDirectoryConfigurationPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BuiltinDirectoryConfigurationPage_t qt_meta_stringdata_BuiltinDirectoryConfigurationPage = {
    {
QT_MOC_LITERAL(0, 0, 33), // "BuiltinDirectoryConfiguration..."
QT_MOC_LITERAL(1, 34, 7), // "addRoom"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10), // "updateRoom"
QT_MOC_LITERAL(4, 54, 10), // "removeRoom"
QT_MOC_LITERAL(5, 65, 11), // "addComputer"
QT_MOC_LITERAL(6, 77, 14), // "updateComputer"
QT_MOC_LITERAL(7, 92, 14) // "removeComputer"

    },
    "BuiltinDirectoryConfigurationPage\0"
    "addRoom\0\0updateRoom\0removeRoom\0"
    "addComputer\0updateComputer\0removeComputer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BuiltinDirectoryConfigurationPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BuiltinDirectoryConfigurationPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BuiltinDirectoryConfigurationPage *_t = static_cast<BuiltinDirectoryConfigurationPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRoom(); break;
        case 1: _t->updateRoom(); break;
        case 2: _t->removeRoom(); break;
        case 3: _t->addComputer(); break;
        case 4: _t->updateComputer(); break;
        case 5: _t->removeComputer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BuiltinDirectoryConfigurationPage::staticMetaObject = {
    { &ConfigurationPage::staticMetaObject, qt_meta_stringdata_BuiltinDirectoryConfigurationPage.data,
      qt_meta_data_BuiltinDirectoryConfigurationPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BuiltinDirectoryConfigurationPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuiltinDirectoryConfigurationPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BuiltinDirectoryConfigurationPage.stringdata0))
        return static_cast<void*>(this);
    return ConfigurationPage::qt_metacast(_clname);
}

int BuiltinDirectoryConfigurationPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigurationPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
