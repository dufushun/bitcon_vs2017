/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../walletmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletModel_t {
    QByteArrayData data[35];
    char stringdata0[445];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletModel_t qt_meta_stringdata_WalletModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletModel"
QT_MOC_LITERAL(1, 12, 14), // "balanceChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "Amount"
QT_MOC_LITERAL(4, 35, 7), // "balance"
QT_MOC_LITERAL(5, 43, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(6, 62, 15), // "immatureBalance"
QT_MOC_LITERAL(7, 78, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(8, 95, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(9, 114, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(10, 135, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(11, 159, 6), // "status"
QT_MOC_LITERAL(12, 166, 13), // "requireUnlock"
QT_MOC_LITERAL(13, 180, 7), // "message"
QT_MOC_LITERAL(14, 188, 5), // "title"
QT_MOC_LITERAL(15, 194, 5), // "style"
QT_MOC_LITERAL(16, 200, 9), // "coinsSent"
QT_MOC_LITERAL(17, 210, 8), // "CWallet*"
QT_MOC_LITERAL(18, 219, 6), // "wallet"
QT_MOC_LITERAL(19, 226, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(20, 245, 9), // "recipient"
QT_MOC_LITERAL(21, 255, 11), // "transaction"
QT_MOC_LITERAL(22, 267, 12), // "showProgress"
QT_MOC_LITERAL(23, 280, 9), // "nProgress"
QT_MOC_LITERAL(24, 290, 22), // "notifyWatchonlyChanged"
QT_MOC_LITERAL(25, 313, 14), // "fHaveWatchonly"
QT_MOC_LITERAL(26, 328, 12), // "updateStatus"
QT_MOC_LITERAL(27, 341, 17), // "updateTransaction"
QT_MOC_LITERAL(28, 359, 17), // "updateAddressBook"
QT_MOC_LITERAL(29, 377, 7), // "address"
QT_MOC_LITERAL(30, 385, 5), // "label"
QT_MOC_LITERAL(31, 391, 6), // "isMine"
QT_MOC_LITERAL(32, 398, 7), // "purpose"
QT_MOC_LITERAL(33, 406, 19), // "updateWatchOnlyFlag"
QT_MOC_LITERAL(34, 426, 18) // "pollBalanceChanged"

    },
    "WalletModel\0balanceChanged\0\0Amount\0"
    "balance\0unconfirmedBalance\0immatureBalance\0"
    "watchOnlyBalance\0watchUnconfBalance\0"
    "watchImmatureBalance\0encryptionStatusChanged\0"
    "status\0requireUnlock\0message\0title\0"
    "style\0coinsSent\0CWallet*\0wallet\0"
    "SendCoinsRecipient\0recipient\0transaction\0"
    "showProgress\0nProgress\0notifyWatchonlyChanged\0"
    "fHaveWatchonly\0updateStatus\0"
    "updateTransaction\0updateAddressBook\0"
    "address\0label\0isMine\0purpose\0"
    "updateWatchOnlyFlag\0pollBalanceChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   74,    2, 0x06 /* Public */,
      10,    1,   87,    2, 0x06 /* Public */,
      12,    0,   90,    2, 0x06 /* Public */,
      13,    3,   91,    2, 0x06 /* Public */,
      16,    3,   98,    2, 0x06 /* Public */,
      22,    2,  105,    2, 0x06 /* Public */,
      24,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  113,    2, 0x0a /* Public */,
      27,    0,  114,    2, 0x0a /* Public */,
      28,    5,  115,    2, 0x0a /* Public */,
      33,    1,  126,    2, 0x0a /* Public */,
      34,    0,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   14,   13,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19, QMetaType::QByteArray,   18,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   23,
    QMetaType::Void, QMetaType::Bool,   25,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   29,   30,   31,   32,   11,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,

       0        // eod
};

void WalletModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletModel *_t = static_cast<WalletModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->balanceChanged((*reinterpret_cast< const Amount(*)>(_a[1])),(*reinterpret_cast< const Amount(*)>(_a[2])),(*reinterpret_cast< const Amount(*)>(_a[3])),(*reinterpret_cast< const Amount(*)>(_a[4])),(*reinterpret_cast< const Amount(*)>(_a[5])),(*reinterpret_cast< const Amount(*)>(_a[6]))); break;
        case 1: _t->encryptionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->requireUnlock(); break;
        case 3: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 4: _t->coinsSent((*reinterpret_cast< CWallet*(*)>(_a[1])),(*reinterpret_cast< SendCoinsRecipient(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 5: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->notifyWatchonlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateStatus(); break;
        case 8: _t->updateTransaction(); break;
        case 9: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 10: _t->updateWatchOnlyFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->pollBalanceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WalletModel::*_t)(const Amount , const Amount , const Amount , const Amount , const Amount , const Amount );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::balanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::encryptionStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::requireUnlock)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::message)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(CWallet * , SendCoinsRecipient , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::coinsSent)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::showProgress)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::notifyWatchonlyChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject WalletModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletModel.data,
      qt_meta_data_WalletModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WalletModel::balanceChanged(const Amount _t1, const Amount _t2, const Amount _t3, const Amount _t4, const Amount _t5, const Amount _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletModel::encryptionStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletModel::requireUnlock()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletModel::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletModel::coinsSent(CWallet * _t1, SendCoinsRecipient _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletModel::notifyWatchonlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
