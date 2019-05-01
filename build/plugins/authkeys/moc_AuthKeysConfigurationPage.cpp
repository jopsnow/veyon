/****************************************************************************
** Meta object code from reading C++ file 'AuthKeysConfigurationPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/authkeys/AuthKeysConfigurationPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthKeysConfigurationPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuthKeysConfigurationPage_t {
    QByteArrayData data[10];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuthKeysConfigurationPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuthKeysConfigurationPage_t qt_meta_stringdata_AuthKeysConfigurationPage = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AuthKeysConfigurationPage"
QT_MOC_LITERAL(1, 26, 20), // "openPublicKeyBaseDir"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "openPrivateKeyBaseDir"
QT_MOC_LITERAL(4, 70, 13), // "createKeyPair"
QT_MOC_LITERAL(5, 84, 9), // "deleteKey"
QT_MOC_LITERAL(6, 94, 9), // "importKey"
QT_MOC_LITERAL(7, 104, 9), // "exportKey"
QT_MOC_LITERAL(8, 114, 14), // "setAccessGroup"
QT_MOC_LITERAL(9, 129, 14) // "reloadKeyTable"

    },
    "AuthKeysConfigurationPage\0"
    "openPublicKeyBaseDir\0\0openPrivateKeyBaseDir\0"
    "createKeyPair\0deleteKey\0importKey\0"
    "exportKey\0setAccessGroup\0reloadKeyTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuthKeysConfigurationPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AuthKeysConfigurationPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AuthKeysConfigurationPage *_t = static_cast<AuthKeysConfigurationPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openPublicKeyBaseDir(); break;
        case 1: _t->openPrivateKeyBaseDir(); break;
        case 2: _t->createKeyPair(); break;
        case 3: _t->deleteKey(); break;
        case 4: _t->importKey(); break;
        case 5: _t->exportKey(); break;
        case 6: _t->setAccessGroup(); break;
        case 7: _t->reloadKeyTable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AuthKeysConfigurationPage::staticMetaObject = {
    { &ConfigurationPage::staticMetaObject, qt_meta_stringdata_AuthKeysConfigurationPage.data,
      qt_meta_data_AuthKeysConfigurationPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AuthKeysConfigurationPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthKeysConfigurationPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuthKeysConfigurationPage.stringdata0))
        return static_cast<void*>(this);
    return ConfigurationPage::qt_metacast(_clname);
}

int AuthKeysConfigurationPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigurationPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
