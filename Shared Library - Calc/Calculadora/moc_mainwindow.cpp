/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   11,   12,   11, 0x08,
      40,   11,   12,   11, 0x08,
      66,   11,   12,   11, 0x08,
      92,   11,   11,   11, 0x08,
     118,   11,   11,   11, 0x08,
     144,   11,   11,   11, 0x08,
     170,   11,   11,   11, 0x08,
     196,   11,   11,   11, 0x08,
     222,   11,   11,   11, 0x08,
     249,   11,   11,   11, 0x08,
     276,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     330,   11,   11,   11, 0x08,
     357,   11,   11,   11, 0x08,
     384,   11,   12,   11, 0x08,
     411,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0int\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_10_clicked()\0"
    "on_pushButton_11_clicked()\0"
    "on_pushButton_13_clicked()\0"
    "on_pushButton_14_clicked()\0"
    "on_pushButton_15_clicked()\0"
    "on_pushButton_16_clicked()\0"
    "on_pushButton_12_clicked()\0"
    "on_pushButton_4_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: { int _r = _t->on_pushButton_clicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->on_pushButton_2_clicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->on_pushButton_3_clicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->on_pushButton_5_clicked(); break;
        case 4: _t->on_pushButton_6_clicked(); break;
        case 5: _t->on_pushButton_7_clicked(); break;
        case 6: _t->on_pushButton_8_clicked(); break;
        case 7: _t->on_pushButton_9_clicked(); break;
        case 8: _t->on_pushButton_10_clicked(); break;
        case 9: _t->on_pushButton_11_clicked(); break;
        case 10: _t->on_pushButton_13_clicked(); break;
        case 11: _t->on_pushButton_14_clicked(); break;
        case 12: _t->on_pushButton_15_clicked(); break;
        case 13: _t->on_pushButton_16_clicked(); break;
        case 14: { int _r = _t->on_pushButton_12_clicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
