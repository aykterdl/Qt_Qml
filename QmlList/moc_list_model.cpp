/****************************************************************************
** Meta object code from reading C++ file 'list_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cpp/list_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'list_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListModel_t {
    QByteArrayData data[19];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListModel_t qt_meta_stringdata_ListModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ListModel"
QT_MOC_LITERAL(1, 10, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 26, 7), // "content"
QT_MOC_LITERAL(3, 34, 12), // "countChanged"
QT_MOC_LITERAL(4, 47, 0), // ""
QT_MOC_LITERAL(5, 48, 5), // "count"
QT_MOC_LITERAL(6, 54, 6), // "append"
QT_MOC_LITERAL(7, 61, 1), // "o"
QT_MOC_LITERAL(8, 63, 6), // "insert"
QT_MOC_LITERAL(9, 70, 1), // "i"
QT_MOC_LITERAL(10, 72, 3), // "get"
QT_MOC_LITERAL(11, 76, 16), // "dataObjectAppend"
QT_MOC_LITERAL(12, 93, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(13, 120, 4), // "list"
QT_MOC_LITERAL(14, 125, 1), // "e"
QT_MOC_LITERAL(15, 127, 15), // "dataObjectCount"
QT_MOC_LITERAL(16, 143, 12), // "dataObjectAt"
QT_MOC_LITERAL(17, 156, 15), // "dataObjectClear"
QT_MOC_LITERAL(18, 172, 25) // "QQmlListProperty<QObject>"

    },
    "ListModel\0DefaultProperty\0content\0"
    "countChanged\0\0count\0append\0o\0insert\0"
    "i\0get\0dataObjectAppend\0"
    "QQmlListProperty<QObject>*\0list\0e\0"
    "dataObjectCount\0dataObjectAt\0"
    "dataObjectClear\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       2,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   56,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   59,    4, 0x0a /* Public */,
       8,    2,   62,    4, 0x0a /* Public */,
      10,    1,   67,    4, 0x0a /* Public */,
      11,    2,   70,    4, 0x0a /* Public */,
      15,    1,   75,    4, 0x0a /* Public */,
      16,    2,   78,    4, 0x0a /* Public */,
      17,    1,   83,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    7,    9,
    QMetaType::QObjectStar, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QObjectStar,   13,   14,
    QMetaType::Int, 0x80000000 | 12,   13,
    QMetaType::QObjectStar, 0x80000000 | 12, QMetaType::Int,   13,    9,
    QMetaType::Void, 0x80000000 | 12,   13,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00495001,
       2, 0x80000000 | 18, 0x00095009,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void ListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListModel *_t = static_cast<ListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->append((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->insert((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: { QObject* _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 4: _t->dataObjectAppend((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: { int _r = _t->dataObjectCount((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { QObject* _r = _t->dataObjectAt((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->dataObjectClear((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ListModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListModel::countChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ListModel *_t = static_cast<ListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->content(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ListModel.data,
      qt_meta_data_ListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ListModel::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
