#include "calculadoracontroller.h"
#include <stdio.h>
#include <time.h>
#include <QString>
#include <QString>
#include <QMainWindow>

#include <../dll/dll.h>

//#include "../../build-dll-Desktop-Debug"

CalculadoraController::CalculadoraController()
{

}

void CalculadoraController::setNumber(int number){
    if(_operation==NULL){
        _numberOne = _numberOne + number;
    } else {
        _numberTwo = _numberTwo + number;
    }
}


void CalculadoraController::setOperation(QString operation){
    _operation = operation;
}


int CalculadoraController::makeOperation(){
    Dll* dll = new Dll();
    int result = 0;

    //C++ não tem Switch/Case
    if(_operation == "/"){
        result = dll->divisao(_numberOne, _numberTwo);
        _numberOne = result;
        _numberTwo = 0;
        _operation = QString();
    } else if (_operation == "X"){
       result =  dll->multiplicacao(_numberOne, _numberTwo);
       _numberOne = result;
       _numberTwo = 0;
       _operation = QString();
    } else if (_operation == "+"){
       result =  dll->soma(_numberOne, _numberTwo);
       _numberOne = result;
       _numberTwo = 0;
       _operation = QString();
    } else if (_operation == "-"){
       result =  dll->subtracao(_numberOne, _numberTwo);
       _numberOne = result;
       _numberTwo = 0;
       _operation = QString();
    }

    return result;

}


