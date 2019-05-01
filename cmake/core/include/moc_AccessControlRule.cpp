/****************************************************************************
** Meta object code from reading C++ file 'AccessControlRule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/AccessControlRule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccessControlRule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccessControlRule_t {
    QByteArrayData data[12];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccessControlRule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccessControlRule_t qt_meta_stringdata_AccessControlRule = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AccessControlRule"
QT_MOC_LITERAL(1, 18, 9), // "Condition"
QT_MOC_LITERAL(2, 28, 13), // "ConditionNone"
QT_MOC_LITERAL(3, 42, 26), // "ConditionMemberOfUserGroup"
QT_MOC_LITERAL(4, 69, 23), // "ConditionGroupsInCommon"
QT_MOC_LITERAL(5, 93, 22), // "ConditionLocatedInRoom"
QT_MOC_LITERAL(6, 116, 26), // "ConditionLocatedInSameRoom"
QT_MOC_LITERAL(7, 143, 28), // "ConditionAccessFromLocalHost"
QT_MOC_LITERAL(8, 172, 28), // "ConditionAccessFromLocalUser"
QT_MOC_LITERAL(9, 201, 39), // "ConditionAccessFromAlreadyCon..."
QT_MOC_LITERAL(10, 241, 23), // "ConditionNoUserLoggedOn"
QT_MOC_LITERAL(11, 265, 14) // "ConditionCount"

    },
    "AccessControlRule\0Condition\0ConditionNone\0"
    "ConditionMemberOfUserGroup\0"
    "ConditionGroupsInCommon\0ConditionLocatedInRoom\0"
    "ConditionLocatedInSameRoom\0"
    "ConditionAccessFromLocalHost\0"
    "ConditionAccessFromLocalUser\0"
    "ConditionAccessFromAlreadyConnectedUser\0"
    "ConditionNoUserLoggedOn\0ConditionCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccessControlRule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   10,   18,

 // enum data: key, value
       2, uint(AccessControlRule::ConditionNone),
       3, uint(AccessControlRule::ConditionMemberOfUserGroup),
       4, uint(AccessControlRule::ConditionGroupsInCommon),
       5, uint(AccessControlRule::ConditionLocatedInRoom),
       6, uint(AccessControlRule::ConditionLocatedInSameRoom),
       7, uint(AccessControlRule::ConditionAccessFromLocalHost),
       8, uint(AccessControlRule::ConditionAccessFromLocalUser),
       9, uint(AccessControlRule::ConditionAccessFromAlreadyConnectedUser),
      10, uint(AccessControlRule::ConditionNoUserLoggedOn),
      11, uint(AccessControlRule::ConditionCount),

       0        // eod
};

const QMetaObject AccessControlRule::staticMetaObject = {
    { nullptr, qt_meta_stringdata_AccessControlRule.data,
      qt_meta_data_AccessControlRule,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
