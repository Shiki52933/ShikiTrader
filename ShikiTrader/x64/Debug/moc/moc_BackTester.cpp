/****************************************************************************
** Meta object code from reading C++ file 'BackTester.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../BackTester.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BackTester.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrderManager_t {
    const uint offsetsAndSize[24];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_OrderManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_OrderManager_t qt_meta_stringdata_OrderManager = {
    {
QT_MOC_LITERAL(0, 12), // "OrderManager"
QT_MOC_LITERAL(13, 11), // "orderTraded"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 5), // "Order"
QT_MOC_LITERAL(32, 5), // "order"
QT_MOC_LITERAL(38, 10), // "orderAdded"
QT_MOC_LITERAL(49, 8), // "addOrder"
QT_MOC_LITERAL(58, 3), // "odr"
QT_MOC_LITERAL(62, 11), // "cancelOrder"
QT_MOC_LITERAL(74, 2), // "id"
QT_MOC_LITERAL(77, 11), // "crossOrders"
QT_MOC_LITERAL(89, 31) // "QMap<FullSymbol,QList<BarData>>"

    },
    "OrderManager\0orderTraded\0\0Order\0order\0"
    "orderAdded\0addOrder\0odr\0cancelOrder\0"
    "id\0crossOrders\0QMap<FullSymbol,QList<BarData>>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrderManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    1,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   50,    2, 0x0a,    5 /* Public */,
       8,    1,   53,    2, 0x0a,    7 /* Public */,
      10,    1,   56,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    7,
    QMetaType::Int, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void OrderManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrderManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->orderTraded((*reinterpret_cast< std::add_pointer_t<Order>>(_a[1]))); break;
        case 1: _t->orderAdded((*reinterpret_cast< std::add_pointer_t<Order>>(_a[1]))); break;
        case 2: { int _r = _t->addOrder((*reinterpret_cast< std::add_pointer_t<Order>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->cancelOrder((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->crossOrders((*reinterpret_cast< std::add_pointer_t<QMap<FullSymbol,QList<BarData>>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrderManager::*)(Order );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrderManager::orderTraded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OrderManager::*)(Order );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrderManager::orderAdded)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject OrderManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OrderManager.offsetsAndSize,
    qt_meta_data_OrderManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_OrderManager_t
, QtPrivate::TypeAndForceComplete<OrderManager, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Order, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Order, std::false_type>
, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<Order, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QMap<FullSymbol,QList<BarData>> &, std::false_type>


>,
    nullptr
} };


const QMetaObject *OrderManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrderManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrderManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OrderManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OrderManager::orderTraded(Order _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OrderManager::orderAdded(Order _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_BackTester_t {
    const uint offsetsAndSize[24];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BackTester_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BackTester_t qt_meta_stringdata_BackTester = {
    {
QT_MOC_LITERAL(0, 10), // "BackTester"
QT_MOC_LITERAL(11, 12), // "dataPrepared"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 31), // "QMap<FullSymbol,QList<BarData>>"
QT_MOC_LITERAL(57, 4), // "data"
QT_MOC_LITERAL(62, 5), // "trade"
QT_MOC_LITERAL(68, 20), // "std::set<FullSymbol>"
QT_MOC_LITERAL(89, 7), // "symbols"
QT_MOC_LITERAL(97, 5), // "start"
QT_MOC_LITERAL(103, 3), // "end"
QT_MOC_LITERAL(107, 8), // "Interval"
QT_MOC_LITERAL(116, 8) // "interval"

    },
    "BackTester\0dataPrepared\0\0"
    "QMap<FullSymbol,QList<BarData>>\0data\0"
    "trade\0std::set<FullSymbol>\0symbols\0"
    "start\0end\0Interval\0interval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackTester[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    4,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QDateTime, QMetaType::QDateTime, 0x80000000 | 10,    7,    8,    9,   11,

       0        // eod
};

void BackTester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackTester *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataPrepared((*reinterpret_cast< std::add_pointer_t<QMap<FullSymbol,QList<BarData>>>>(_a[1]))); break;
        case 1: _t->trade((*reinterpret_cast< std::add_pointer_t<std::set<FullSymbol>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Interval>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BackTester::*)(const QMap<FullSymbol,QList<BarData>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackTester::dataPrepared)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BackTester::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BackTester.offsetsAndSize,
    qt_meta_data_BackTester,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BackTester_t
, QtPrivate::TypeAndForceComplete<BackTester, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QMap<FullSymbol,QList<BarData>> &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const std::set<FullSymbol> &, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<Interval, std::false_type>


>,
    nullptr
} };


const QMetaObject *BackTester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackTester::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackTester.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BackTester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BackTester::dataPrepared(const QMap<FullSymbol,QList<BarData>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_BackTestUnit_t {
    const uint offsetsAndSize[8];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BackTestUnit_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BackTestUnit_t qt_meta_stringdata_BackTestUnit = {
    {
QT_MOC_LITERAL(0, 12), // "BackTestUnit"
QT_MOC_LITERAL(13, 18), // "sigOneStrategyDone"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 3) // "run"

    },
    "BackTestUnit\0sigOneStrategyDone\0\0run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackTestUnit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x0a,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BackTestUnit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackTestUnit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigOneStrategyDone(); break;
        case 1: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BackTestUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackTestUnit::sigOneStrategyDone)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject BackTestUnit::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_BackTestUnit.offsetsAndSize,
    qt_meta_data_BackTestUnit,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BackTestUnit_t
, QtPrivate::TypeAndForceComplete<BackTestUnit, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *BackTestUnit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackTestUnit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackTestUnit.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int BackTestUnit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BackTestUnit::sigOneStrategyDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_BackTestWindow_t {
    const uint offsetsAndSize[14];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BackTestWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BackTestWindow_t qt_meta_stringdata_BackTestWindow = {
    {
QT_MOC_LITERAL(0, 14), // "BackTestWindow"
QT_MOC_LITERAL(15, 34), // "on_pushButtonStartBackTest_cl..."
QT_MOC_LITERAL(50, 0), // ""
QT_MOC_LITERAL(51, 35), // "on_pushButtonParamsOptimize_c..."
QT_MOC_LITERAL(87, 35), // "on_pushButtonOptimizeResult_c..."
QT_MOC_LITERAL(123, 31), // "on_pushButtonSaveResult_clicked"
QT_MOC_LITERAL(155, 21) // "on_sigOneStragetyDone"

    },
    "BackTestWindow\0on_pushButtonStartBackTest_clicked\0"
    "\0on_pushButtonParamsOptimize_clicked\0"
    "on_pushButtonOptimizeResult_clicked\0"
    "on_pushButtonSaveResult_clicked\0"
    "on_sigOneStragetyDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackTestWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BackTestWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackTestWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonStartBackTest_clicked(); break;
        case 1: _t->on_pushButtonParamsOptimize_clicked(); break;
        case 2: _t->on_pushButtonOptimizeResult_clicked(); break;
        case 3: _t->on_pushButtonSaveResult_clicked(); break;
        case 4: _t->on_sigOneStragetyDone(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject BackTestWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_BackTestWindow.offsetsAndSize,
    qt_meta_data_BackTestWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BackTestWindow_t
, QtPrivate::TypeAndForceComplete<BackTestWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *BackTestWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackTestWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackTestWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BackTestWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SetStrategyParamsWindow_t {
    const uint offsetsAndSize[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SetStrategyParamsWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SetStrategyParamsWindow_t qt_meta_stringdata_SetStrategyParamsWindow = {
    {
QT_MOC_LITERAL(0, 23) // "SetStrategyParamsWindow"

    },
    "SetStrategyParamsWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetStrategyParamsWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SetStrategyParamsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject SetStrategyParamsWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SetStrategyParamsWindow.offsetsAndSize,
    qt_meta_data_SetStrategyParamsWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SetStrategyParamsWindow_t
, QtPrivate::TypeAndForceComplete<SetStrategyParamsWindow, std::true_type>



>,
    nullptr
} };


const QMetaObject *SetStrategyParamsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetStrategyParamsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetStrategyParamsWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SetStrategyParamsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
