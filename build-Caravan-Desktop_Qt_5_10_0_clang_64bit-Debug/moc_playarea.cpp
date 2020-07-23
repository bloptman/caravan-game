/****************************************************************************
** Meta object code from reading C++ file 'playarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Caravan 14 2/playarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayArea_t {
    QByteArrayData data[15];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayArea_t qt_meta_stringdata_PlayArea = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PlayArea"
QT_MOC_LITERAL(1, 9, 11), // "cardChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "Card*"
QT_MOC_LITERAL(4, 28, 1), // "c"
QT_MOC_LITERAL(5, 30, 9), // "startGame"
QT_MOC_LITERAL(6, 40, 7), // "addInfo"
QT_MOC_LITERAL(7, 48, 8), // "clickHit"
QT_MOC_LITERAL(8, 57, 10), // "clickStand"
QT_MOC_LITERAL(9, 68, 9), // "calcScore"
QT_MOC_LITERAL(10, 78, 9), // "nextRound"
QT_MOC_LITERAL(11, 88, 7), // "endGame"
QT_MOC_LITERAL(12, 96, 6), // "replay"
QT_MOC_LITERAL(13, 103, 12), // "newHighScore"
QT_MOC_LITERAL(14, 116, 12) // "endGameSound"

    },
    "PlayArea\0cardChanged\0\0Card*\0c\0startGame\0"
    "addInfo\0clickHit\0clickStand\0calcScore\0"
    "nextRound\0endGame\0replay\0newHighScore\0"
    "endGameSound"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayArea *_t = static_cast<PlayArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cardChanged((*reinterpret_cast< Card*(*)>(_a[1]))); break;
        case 1: _t->startGame(); break;
        case 2: _t->addInfo(); break;
        case 3: _t->clickHit(); break;
        case 4: _t->clickStand(); break;
        case 5: _t->calcScore(); break;
        case 6: _t->nextRound(); break;
        case 7: _t->endGame(); break;
        case 8: _t->replay(); break;
        case 9: _t->newHighScore(); break;
        case 10: _t->endGameSound(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Card* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PlayArea::*_t)(Card * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayArea::cardChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PlayArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayArea.data,
      qt_meta_data_PlayArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayArea.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlayArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PlayArea::cardChanged(Card * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
