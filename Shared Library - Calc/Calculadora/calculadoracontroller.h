#ifndef CALCULADORACONTROLLER_H
#define CALCULADORACONTROLLER_H
#include "QString"
#include "QPushButton"
#include <QMainWindow>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class CalculadoraController
{
public:
    CalculadoraController();

    void createCalculator();
    void setOperation(QString operation);
    void setNumber(int number);
    int makeOperation();

    int _numberOne = NULL;
    int _numberTwo = NULL;
    QString _operation = NULL;

public slots:
    void button_click();




private:
    void createWindow();


};

#endif // CALCULADORACONTROLLER_H
