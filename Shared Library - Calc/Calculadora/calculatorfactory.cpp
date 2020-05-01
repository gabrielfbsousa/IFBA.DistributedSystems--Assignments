#include "calculatorfactory.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMainWindow>
#include <calculadoracontroller.h>
#include "calculadoracontroller.h"
#include <stdio.h>
#include <time.h>
#include <QString>


CalculatorFactory::CalculatorFactory()
{


    CalculadoraController* controller = new CalculadoraController();
}

/*
void CalculatorFactory::setUI(Ui::MainWindow *ui){
   this->_ui = ui;
}
*/
