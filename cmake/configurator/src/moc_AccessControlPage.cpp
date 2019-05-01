/****************************************************************************
** Meta object code from reading C++ file 'AccessControlPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../configurator/src/AccessControlPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccessControlPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccessControlPage_t {
    QByteArrayData data[12];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccessControlPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccessControlPage_t qt_meta_stringdata_AccessControlPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AccessControlPage"
QT_MOC_LITERAL(1, 18, 14), // "addAccessGroup"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "removeAccessGroup"
QT_MOC_LITERAL(4, 52, 23), // "updateAccessGroupsLists"
QT_MOC_LITERAL(5, 76, 20), // "addAccessControlRule"
QT_MOC_LITERAL(6, 97, 23), // "removeAccessControlRule"
QT_MOC_LITERAL(7, 121, 21), // "editAccessControlRule"
QT_MOC_LITERAL(8, 143, 25), // "moveAccessControlRuleDown"
QT_MOC_LITERAL(9, 169, 23), // "moveAccessControlRuleUp"
QT_MOC_LITERAL(10, 193, 27), // "testUserGroupsAccessControl"
QT_MOC_LITERAL(11, 221, 22) // "testAccessControlRules"

    },
    "AccessControlPage\0addAccessGroup\0\0"
    "removeAccessGroup\0updateAccessGroupsLists\0"
    "addAccessControlRule\0removeAccessControlRule\0"
    "editAccessControlRule\0moveAccessControlRuleDown\0"
    "moveAccessControlRuleUp\0"
    "testUserGroupsAccessControl\0"
    "testAccessControlRules"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccessControlPage[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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

void AccessControlPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccessControlPage *_t = static_cast<AccessControlPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addAccessGroup(); break;
        case 1: _t->removeAccessGroup(); break;
        case 2: _t->updateAccessGroupsLists(); break;
        case 3: _t->addAccessControlRule(); break;
        case 4: _t->removeAccessControlRule(); break;
        case 5: _t->editAccessControlRule(); break;
        case 6: _t->moveAccessControlRuleDown(); break;
        case 7: _t->moveAccessControlRuleUp(); break;
        case 8: _t->testUserGroupsAccessControl(); break;
        case 9: _t->testAccessControlRules(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AccessControlPage::staticMetaObject = {
    { &ConfigurationPage::staticMetaObject, qt_meta_stringdata_AccessControlPage.data,
      qt_meta_data_AccessControlPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccessControlPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccessControlPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccessControlPage.stringdata0))
        return static_cast<void*>(this);
    return ConfigurationPage::qt_metacast(_clname);
}

int AccessControlPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigurationPage::qt_metacall(_c, _id, _a);
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
