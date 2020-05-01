#ifndef CALCULATORFACTORY_H
#define CALCULATORFACTORY_H
#include <QMainWindow>
#include <QString>
#include <QPushButton>

#include "mainwindow.h"
#include "ui_mainwindow.h"

class CalculatorFactory
{
public:
    CalculatorFactory();
    //void setUI(Ui::MainWindow *ui);



private:
    Ui::MainWindow *_ui;
};

#endif // CALCULATORFACTORY_H
