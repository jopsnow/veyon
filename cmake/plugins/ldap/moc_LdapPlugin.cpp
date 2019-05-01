/****************************************************************************
** Meta object code from reading C++ file 'LdapPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/ldap/LdapPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LdapPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LdapPlugin_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LdapPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LdapPlugin_t qt_meta_stringdata_LdapPlugin = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LdapPlugin"
QT_MOC_LITERAL(1, 11, 26), // "handle_autoconfigurebasedn"
QT_MOC_LITERAL(2, 38, 37), // "CommandLinePluginInterface::R..."
QT_MOC_LITERAL(3, 76, 0), // ""
QT_MOC_LITERAL(4, 77, 9), // "arguments"
QT_MOC_LITERAL(5, 87, 12), // "handle_query"
QT_MOC_LITERAL(6, 100, 11) // "handle_help"

    },
    "LdapPlugin\0handle_autoconfigurebasedn\0"
    "CommandLinePluginInterface::RunResult\0"
    "\0arguments\0handle_query\0handle_help"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LdapPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       5,    1,   32,    3, 0x0a /* Public */,
       6,    1,   35,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,
    0x80000000 | 2, QMetaType::QStringList,    4,

       0        // eod
};

void LdapPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LdapPlugin *_t = static_cast<LdapPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { CommandLinePluginInterface::RunResult _r = _t->handle_autoconfigurebasedn((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 1: { CommandLinePluginInterface::RunResult _r = _t->handle_query((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        case 2: { CommandLinePluginInterface::RunResult _r = _t->handle_help((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CommandLinePluginInterface::RunResult*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject LdapPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LdapPlugin.data,
      qt_meta_data_LdapPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LdapPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LdapPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LdapPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PluginInterface"))
        return static_cast< PluginInterface*>(this);
    if (!strcmp(_clname, "CommandLinePluginInterface"))
        return static_cast< CommandLinePluginInterface*>(this);
    if (!strcmp(_clname, "NetworkObjectDirectoryPluginInterface"))
        return static_cast< NetworkObjectDirectoryPluginInterface*>(this);
    if (!strcmp(_clname, "UserGroupsBackendInterface"))
        return static_cast< UserGroupsBackendInterface*>(this);
    if (!strcmp(_clname, "ConfigurationPagePluginInterface"))
        return static_cast< ConfigurationPagePluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.PluginInterface"))
        return static_cast< PluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.CommandLinePluginInterface"))
        return static_cast< CommandLinePluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.NetworkObjectPluginInterface"))
        return static_cast< NetworkObjectDirectoryPluginInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.UserGroupsBackendInterface"))
        return static_cast< UserGroupsBackendInterface*>(this);
    if (!strcmp(_clname, "io.veyon.Veyon.Plugins.ConfigurationPagePluginInterface"))
        return static_cast< ConfigurationPagePluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int LdapPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1b, 0x00, 'i',  'o',  '.',  'v',  'e',  'y', 
    'o',  'n',  '.',  'V',  'e',  'y',  'o',  'n', 
    '.',  'P',  'l',  'u',  'g',  'i',  'n',  's', 
    '.',  'L',  'd',  'a',  'p',  0x00, 0x00, 0x00,
    0x1b, 0x09, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0a, 0x00, 'L',  'd',  'a',  'p',  'P',  'l', 
    'u',  'g',  'i',  'n',  0x1a, '!',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x10, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, '8',  0x00, 0x00, 0x00,
    'd',  0x00, 0x00, 0x00, 'T',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1b, 0x00, 'i',  'o',  '.',  'v',  'e',  'y', 
    'o',  'n',  '.',  'V',  'e',  'y',  'o',  'n', 
    '.',  'P',  'l',  'u',  'g',  'i',  'n',  's', 
    '.',  'L',  'd',  'a',  'p',  0x00, 0x00, 0x00,
    0x15, 0x09, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0c, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0a, 0x00, 'L',  'd', 
    'a',  'p',  'P',  'l',  'u',  'g',  'i',  'n', 
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, '!',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 'T',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(LdapPlugin, LdapPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
