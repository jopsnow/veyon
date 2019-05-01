/****************************************************************************
** Meta object code from reading C++ file 'VncView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/include/VncView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VncView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VncView_t {
    QByteArrayData data[26];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VncView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VncView_t qt_meta_stringdata_VncView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "VncView"
QT_MOC_LITERAL(1, 8, 13), // "mouseAtBorder"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "keyEvent"
QT_MOC_LITERAL(4, 32, 15), // "startConnection"
QT_MOC_LITERAL(5, 48, 21), // "connectionEstablished"
QT_MOC_LITERAL(6, 70, 15), // "sizeHintChanged"
QT_MOC_LITERAL(7, 86, 11), // "setViewOnly"
QT_MOC_LITERAL(8, 98, 8), // "viewOnly"
QT_MOC_LITERAL(9, 107, 12), // "sendShortcut"
QT_MOC_LITERAL(10, 120, 8), // "Shortcut"
QT_MOC_LITERAL(11, 129, 8), // "shortcut"
QT_MOC_LITERAL(12, 138, 14), // "handleShortcut"
QT_MOC_LITERAL(13, 153, 33), // "KeyboardShortcutTrapper::Shor..."
QT_MOC_LITERAL(14, 187, 15), // "updateCursorPos"
QT_MOC_LITERAL(15, 203, 1), // "x"
QT_MOC_LITERAL(16, 205, 1), // "y"
QT_MOC_LITERAL(17, 207, 17), // "updateCursorShape"
QT_MOC_LITERAL(18, 225, 11), // "cursorShape"
QT_MOC_LITERAL(19, 237, 2), // "xh"
QT_MOC_LITERAL(20, 240, 2), // "yh"
QT_MOC_LITERAL(21, 243, 11), // "updateImage"
QT_MOC_LITERAL(22, 255, 1), // "w"
QT_MOC_LITERAL(23, 257, 1), // "h"
QT_MOC_LITERAL(24, 259, 21), // "updateFramebufferSize"
QT_MOC_LITERAL(25, 281, 21) // "updateConnectionState"

    },
    "VncView\0mouseAtBorder\0\0keyEvent\0"
    "startConnection\0connectionEstablished\0"
    "sizeHintChanged\0setViewOnly\0viewOnly\0"
    "sendShortcut\0Shortcut\0shortcut\0"
    "handleShortcut\0KeyboardShortcutTrapper::Shortcut\0"
    "updateCursorPos\0x\0y\0updateCursorShape\0"
    "cursorShape\0xh\0yh\0updateImage\0w\0h\0"
    "updateFramebufferSize\0updateConnectionState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VncView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    2,   80,    2, 0x06 /* Public */,
       4,    0,   85,    2, 0x06 /* Public */,
       5,    0,   86,    2, 0x06 /* Public */,
       6,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   88,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    2,   97,    2, 0x08 /* Private */,
      17,    3,  102,    2, 0x08 /* Private */,
      21,    4,  109,    2, 0x08 /* Private */,
      24,    2,  118,    2, 0x08 /* Private */,
      25,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,   18,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,   16,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void,

       0        // eod
};

void VncView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VncView *_t = static_cast<VncView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseAtBorder(); break;
        case 1: _t->keyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->startConnection(); break;
        case 3: _t->connectionEstablished(); break;
        case 4: _t->sizeHintChanged(); break;
        case 5: _t->setViewOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sendShortcut((*reinterpret_cast< Shortcut(*)>(_a[1]))); break;
        case 7: _t->handleShortcut((*reinterpret_cast< KeyboardShortcutTrapper::Shortcut(*)>(_a[1]))); break;
        case 8: _t->updateCursorPos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateCursorShape((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->updateImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: _t->updateFramebufferSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->updateConnectionState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VncView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncView::mouseAtBorder)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VncView::*_t)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncView::keyEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VncView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncView::startConnection)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VncView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncView::connectionEstablished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (VncView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncView::sizeHintChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject VncView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VncView.data,
      qt_meta_data_VncView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VncView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VncView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VncView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VncView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void VncView::mouseAtBorder()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VncView::keyEvent(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VncView::startConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VncView::connectionEstablished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void VncView::sizeHintChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
