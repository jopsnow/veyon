/****************************************************************************
** Meta object code from reading C++ file 'ServiceControlPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/servicecontrol/ServiceControlPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServiceControlPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServiceControlPlugin_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServiceControlPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServiceControlPlugin_t qt_meta_stringdata_ServiceControlPlugin = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ServiceControlPlugin"
QT_MOC_LITERAL(1, 21, 15), // "handle_register"
QT_MOC_LITERAL(2, 37, 37), // "CommandLinePluginInterface::R..."
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 9), // "arguments"
QT_MOC_LITERAL(5, 86, 17), // "handle_unregister"
QT_MOC_LITERAL(6, 104, 12), // "handle_start"
QT_MOC_LITERAL(7, 117, 11), // "handle_stop"
QT_MOC_LITERAL(8, 129, 14), // "handle_restart"
QT_MOC_LITERAL(9, 144, 13) // "handle_status"

    },
    "ServiceControlPlugin\0handle_register\0"
    "CommandLinePluginInterface::RunResult\0"
    "\0arguments\0handle_unregister\0handle_start\0"
    "handle_stop\0handle_restart\0handle_status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServiceControlPlugin[] = {

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
       1,    1,   44,    3, 0x0a /* Public */,
       5,    1,   47,    3, 0x0a /* Public */,
       6,    1,   50,    3, 0x0a /* Public */,
       7,    1,   53,    3, 0x0a /* Public */,
       8,    1,   56,    3, 0x0a /* Public */,
       9,    1,   59,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,

       0        // eod
};

void ServiceControlPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServiceControlPlugin *_t = static_cast<ServiceControlPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { CommandLinePluginInterface::RunResult _r = _t->handle_register((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 1: { CommandLinePluginInterface::RunResult _r = _t->handle_unregister((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 2: { CommandLinePluginInterface::RunResult _r = _t->handle_start((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 3: { CommandLinePluginInterface::RunResult _r = _t->handle_stop((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 4: { CommandLinePluginInterface::RunResult _r = _t->handle_restart((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 5: { CommandLinePluginInterface::RunResult _r = _t->handle_status((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject ServiceControlPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ServiceControlPlugin.data,
      qt_meta_data_ServiceControlPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ServiceControlPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServiceControlPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServiceControlPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommandLinePluginInterface"))
        return static_cast< CommandLinePluginInterface*>(this);
    if (!strcmp(_clname, "PluginInterface"))
        return static_cast< PluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.PluginInterface"))
        return static_cast< PluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.CommandLinePluginInterface"))
        return static_cast< CommandLinePluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int ServiceControlPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '%',  0x00, 'i',  'o',  '.',  'v',  'e',  'y', 
    'o',  'n',  '.',  'V',  'e',  'y',  'o',  'n', 
    '.',  'P',  'l',  'u',  'g',  'i',  'n',  's', 
    '.',  'S',  'e',  'r',  'v',  'i',  'c',  'e', 
    'C',  'o',  'n',  't',  'r',  'o',  'l',  0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x14, 0x00, 'S',  'e',  'r',  'v',  'i',  'c', 
    'e',  'C',  'o',  'n',  't',  'r',  'o',  'l', 
    'P',  'l',  'u',  'g',  'i',  'n',  0x00, 0x00,
    0x1a, '!',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x12, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '%',  0x00, 'i',  'o',  '.',  'v',  'e',  'y', 
    'o',  'n',  '.',  'V',  'e',  'y',  'o',  'n', 
    '.',  'P',  'l',  'u',  'g',  'i',  'n',  's', 
    '.',  'S',  'e',  'r',  'v',  'i',  'c',  'e', 
    'C',  'o',  'n',  't',  'r',  'o',  'l',  0x00,
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x14, 0x00, 'S',  'e', 
    'r',  'v',  'i',  'c',  'e',  'C',  'o',  'n', 
    't',  'r',  'o',  'l',  'P',  'l',  'u',  'g', 
    'i',  'n',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, '!',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(ServiceControlPlugin, ServiceControlPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
