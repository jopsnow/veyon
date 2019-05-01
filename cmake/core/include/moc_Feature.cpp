/****************************************************************************
** Meta object code from reading C++ file 'Feature.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/Feature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Feature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Feature_t {
    QByteArrayData data[13];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Feature_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Feature_t qt_meta_stringdata_Feature = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Feature"
QT_MOC_LITERAL(1, 8, 5), // "Flags"
QT_MOC_LITERAL(2, 14, 7), // "NoFlags"
QT_MOC_LITERAL(3, 22, 4), // "Mode"
QT_MOC_LITERAL(4, 27, 6), // "Action"
QT_MOC_LITERAL(5, 34, 7), // "Session"
QT_MOC_LITERAL(6, 42, 9), // "Operation"
QT_MOC_LITERAL(7, 52, 6), // "Dialog"
QT_MOC_LITERAL(8, 59, 6), // "Master"
QT_MOC_LITERAL(9, 66, 7), // "Service"
QT_MOC_LITERAL(10, 74, 6), // "Worker"
QT_MOC_LITERAL(11, 81, 7), // "Builtin"
QT_MOC_LITERAL(12, 89, 13) // "AllComponents"

    },
    "Feature\0Flags\0NoFlags\0Mode\0Action\0"
    "Session\0Operation\0Dialog\0Master\0Service\0"
    "Worker\0Builtin\0AllComponents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Feature[] = {

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
       1, 0x1,   11,   18,

 // enum data: key, value
       2, uint(Feature::NoFlags),
       3, uint(Feature::Mode),
       4, uint(Feature::Action),
       5, uint(Feature::Session),
       6, uint(Feature::Operation),
       7, uint(Feature::Dialog),
       8, uint(Feature::Master),
       9, uint(Feature::Service),
      10, uint(Feature::Worker),
      11, uint(Feature::Builtin),
      12, uint(Feature::AllComponents),

       0        // eod
};

const QMetaObject Feature::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Feature.data,
      qt_meta_data_Feature,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
