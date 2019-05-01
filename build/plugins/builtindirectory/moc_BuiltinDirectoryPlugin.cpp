/****************************************************************************
** Meta object code from reading C++ file 'BuiltinDirectoryPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/builtindirectory/BuiltinDirectoryPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BuiltinDirectoryPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BuiltinDirectoryPlugin_t {
    QByteArrayData data[12];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BuiltinDirectoryPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BuiltinDirectoryPlugin_t qt_meta_stringdata_BuiltinDirectoryPlugin = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BuiltinDirectoryPlugin"
QT_MOC_LITERAL(1, 23, 11), // "handle_help"
QT_MOC_LITERAL(2, 35, 37), // "CommandLinePluginInterface::R..."
QT_MOC_LITERAL(3, 73, 0), // ""
QT_MOC_LITERAL(4, 74, 9), // "arguments"
QT_MOC_LITERAL(5, 84, 10), // "handle_add"
QT_MOC_LITERAL(6, 95, 12), // "handle_clear"
QT_MOC_LITERAL(7, 108, 11), // "handle_dump"
QT_MOC_LITERAL(8, 120, 11), // "handle_list"
QT_MOC_LITERAL(9, 132, 13), // "handle_remove"
QT_MOC_LITERAL(10, 146, 13), // "handle_import"
QT_MOC_LITERAL(11, 160, 13) // "handle_export"

    },
    "BuiltinDirectoryPlugin\0handle_help\0"
    "CommandLinePluginInterface::RunResult\0"
    "\0arguments\0handle_add\0handle_clear\0"
    "handle_dump\0handle_list\0handle_remove\0"
    "handle_import\0handle_export"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BuiltinDirectoryPlugin[] = {

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
       1,    1,   54,    3, 0x0a /* Public */,
       5,    1,   57,    3, 0x0a /* Public */,
       6,    1,   60,    3, 0x0a /* Public */,
       7,    1,   63,    3, 0x0a /* Public */,
       8,    1,   66,    3, 0x0a /* Public */,
       9,    1,   69,    3, 0x0a /* Public */,
      10,    1,   72,    3, 0x0a /* Public */,
      11,    1,   75,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,

       0        // eod
};

void BuiltinDirectoryPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BuiltinDirectoryPlugin *_t = static_cast<BuiltinDirectoryPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { CommandLinePluginInterface::RunResult _r = _t->handle_help((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 1: { CommandLinePluginInterface::RunResult _r = _t->handle_add((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 2: { CommandLinePluginInterface::RunResult _r = _t->handle_clear((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 3: { CommandLinePluginInterface::RunResult _r = _t->handle_dump((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 4: { CommandLinePluginInterface::RunResult _r = _t->handle_list((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 5: { CommandLinePluginInterface::RunResult _r = _t->handle_remove((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 6: { CommandLinePluginInterface::RunResult _r = _t->handle_import((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 7: { CommandLinePluginInterface::RunResult _r = _t->handle_export((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject BuiltinDirectoryPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BuiltinDirectoryPlugin.data,
      qt_meta_data_BuiltinDirectoryPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BuiltinDirectoryPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuiltinDirectoryPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BuiltinDirectoryPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PluginInterface"))
        return static_cast< PluginInterface*>(this);
    if (!strcmp(_clname, "NetworkObjectDirectoryPluginInterface"))
        return static_cast< NetworkObjectDirectoryPluginInterface*>(this);
    if (!strcmp(_clname, "ConfigurationPagePluginInterface"))
        return static_cast< ConfigurationPagePluginInterface*>(this);
    if (!strcmp(_clname, "CommandLinePluginInterface"))
        return static_cast< CommandLinePluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.PluginInterface"))
        return static_cast< PluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.NetworkObjectPluginInterface"))
        return static_cast< NetworkObjectDirectoryPluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.ConfigurationPagePluginInterface"))
        return static_cast< ConfigurationPagePluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.CommandLinePluginInterface"))
        return static_cast< CommandLinePluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int BuiltinDirectoryPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '\'', 0x00, 'i',  'o',  '.',  'v',  'e',  'y', 
    'o',  'n',  '.',  'V',  'e',  'y',  'o',  'n', 
    '.',  'P',  'l',  'u',  'g',  'i',  'n',  's', 
    '.',  'B',  'u',  'i',  'l',  't',  'i',  'n', 
    'D',  'i',  'r',  'e',  'c',  't',  'o',  'r', 
    'y',  0x00, 0x00, 0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x16, 0x00, 'B',  'u', 
    'i',  'l',  't',  'i',  'n',  'D',  'i',  'r', 
    'e',  'c',  't',  'o',  'r',  'y',  'P',  'l', 
    'u',  'g',  'i',  'n',  0xba, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x13, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '\'', 0x00, 'i',  'o',  '.',  'v',  'e',  'y', 
    'o',  'n',  '.',  'V',  'e',  'y',  'o',  'n', 
    '.',  'P',  'l',  'u',  'g',  'i',  'n',  's', 
    '.',  'B',  'u',  'i',  'l',  't',  'i',  'n', 
    'D',  'i',  'r',  'e',  'c',  't',  'o',  'r', 
    'y',  0x00, 0x00, 0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x16, 0x00, 'B',  'u',  'i',  'l',  't',  'i', 
    'n',  'D',  'i',  'r',  'e',  'c',  't',  'o', 
    'r',  'y',  'P',  'l',  'u',  'g',  'i',  'n', 
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0xba, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(BuiltinDirectoryPlugin, BuiltinDirectoryPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
