/****************************************************************************
** Meta object code from reading C++ file 'StrategyTemplate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../StrategyTemplate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StrategyTemplate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StrategyTemplate_t {
    const uint offsetsAndSize[36];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_StrategyTemplate_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_StrategyTemplate_t qt_meta_stringdata_StrategyTemplate = {
    {
QT_MOC_LITERAL(0, 16), // "StrategyTemplate"
QT_MOC_LITERAL(17, 12), // "sigSendOrder"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 5), // "Order"
QT_MOC_LITERAL(37, 5), // "order"
QT_MOC_LITERAL(43, 14), // "sigCancelOrder"
QT_MOC_LITERAL(58, 2), // "id"
QT_MOC_LITERAL(61, 10), // "sigAskData"
QT_MOC_LITERAL(72, 20), // "std::set<FullSymbol>"
QT_MOC_LITERAL(93, 7), // "symbols"
QT_MOC_LITERAL(101, 5), // "start"
QT_MOC_LITERAL(107, 3), // "end"
QT_MOC_LITERAL(111, 8), // "Interval"
QT_MOC_LITERAL(120, 8), // "interval"
QT_MOC_LITERAL(129, 5), // "onBar"
QT_MOC_LITERAL(135, 31), // "QMap<FullSymbol,QList<BarData>>"
QT_MOC_LITERAL(167, 4), // "data"
QT_MOC_LITERAL(172, 7) // "onOrder"

    },
    "StrategyTemplate\0sigSendOrder\0\0Order\0"
    "order\0sigCancelOrder\0id\0sigAskData\0"
    "std::set<FullSymbol>\0symbols\0start\0"
    "end\0Interval\0interval\0onBar\0"
    "QMap<FullSymbol,QList<BarData>>\0data\0"
    "onOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StrategyTemplate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    1,   47,    2, 0x06,    3 /* Public */,
       7,    4,   50,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,   59,    2, 0x0a,   10 /* Public */,
      17,    1,   62,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QDateTime, QMetaType::QDateTime, 0x80000000 | 12,    9,   10,   11,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void StrategyTemplate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StrategyTemplate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigSendOrder((*reinterpret_cast< std::add_pointer_t<Order>>(_a[1]))); break;
        case 1: _t->sigCancelOrder((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->sigAskData((*reinterpret_cast< std::add_pointer_t<std::set<FullSymbol>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Interval>>(_a[4]))); break;
        case 3: _t->onBar((*reinterpret_cast< std::add_pointer_t<QMap<FullSymbol,QList<BarData>>>>(_a[1]))); break;
        case 4: _t->onOrder((*reinterpret_cast< std::add_pointer_t<Order>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StrategyTemplate::*)(Order );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StrategyTemplate::sigSendOrder)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StrategyTemplate::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StrategyTemplate::sigCancelOrder)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StrategyTemplate::*)(std::set<FullSymbol> , QDateTime , QDateTime , Interval );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StrategyTemplate::sigAskData)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject StrategyTemplate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StrategyTemplate.offsetsAndSize,
    qt_meta_data_StrategyTemplate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_StrategyTemplate_t
, QtPrivate::TypeAndForceComplete<StrategyTemplate, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Order, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::set<FullSymbol>, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<Interval, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QMap<FullSymbol,QList<BarData>> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Order, std::false_type>


>,
    nullptr
} };


const QMetaObject *StrategyTemplate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StrategyTemplate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StrategyTemplate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StrategyTemplate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void StrategyTemplate::sigSendOrder(Order _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StrategyTemplate::sigCancelOrder(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StrategyTemplate::sigAskData(std::set<FullSymbol> _t1, QDateTime _t2, QDateTime _t3, Interval _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
