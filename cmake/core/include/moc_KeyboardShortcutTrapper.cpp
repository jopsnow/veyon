/****************************************************************************
** Meta object code from reading C++ file 'KeyboardShortcutTrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/KeyboardShortcutTrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyboardShortcutTrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KeyboardShortcutTrapper_t {
    QByteArrayData data[12];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyboardShortcutTrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyboardShortcutTrapper_t qt_meta_stringdata_KeyboardShortcutTrapper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KeyboardShortcutTrapper"
QT_MOC_LITERAL(1, 24, 15), // "shortcutTrapped"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "Shortcut"
QT_MOC_LITERAL(4, 50, 10), // "NoShortcut"
QT_MOC_LITERAL(5, 61, 6), // "AltTab"
QT_MOC_LITERAL(6, 68, 6), // "AltEsc"
QT_MOC_LITERAL(7, 75, 8), // "AltSpace"
QT_MOC_LITERAL(8, 84, 5), // "AltF4"
QT_MOC_LITERAL(9, 90, 7), // "CtrlEsc"
QT_MOC_LITERAL(10, 98, 12), // "SuperKeyDown"
QT_MOC_LITERAL(11, 111, 10) // "SuperKeyUp"

    },
    "KeyboardShortcutTrapper\0shortcutTrapped\0"
    "\0Shortcut\0NoShortcut\0AltTab\0AltEsc\0"
    "AltSpace\0AltF4\0CtrlEsc\0SuperKeyDown\0"
    "SuperKeyUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyboardShortcutTrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // enums: name, flags, count, data
       3, 0x0,    8,   26,

 // enum data: key, value
       4, uint(KeyboardShortcutTrapper::NoShortcut),
       5, uint(KeyboardShortcutTrapper::AltTab),
       6, uint(KeyboardShortcutTrapper::AltEsc),
       7, uint(KeyboardShortcutTrapper::AltSpace),
       8, uint(KeyboardShortcutTrapper::AltF4),
       9, uint(KeyboardShortcutTrapper::CtrlEsc),
      10, uint(KeyboardShortcutTrapper::SuperKeyDown),
      11, uint(KeyboardShortcutTrapper::SuperKeyUp),

       0        // eod
};

void KeyboardShortcutTrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyboardShortcutTrapper *_t = static_cast<KeyboardShortcutTrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shortcutTrapped((*reinterpret_cast< Shortcut(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (KeyboardShortcutTrapper::*_t)(Shortcut );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardShortcutTrapper::shortcutTrapped)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject KeyboardShortcutTrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KeyboardShortcutTrapper.data,
      qt_meta_data_KeyboardShortcutTrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KeyboardShortcutTrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyboardShortcutTrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KeyboardShortcutTrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeyboardShortcutTrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KeyboardShortcutTrapper::shortcutTrapped(Shortcut _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
