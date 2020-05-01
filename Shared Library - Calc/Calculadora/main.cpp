#include "mainwindow.h"
#include <QApplication>
#include "ui_mainwindow.h"
#include <QString>
#include <QMainWindow>
#include <calculatorfactory.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    CalculadoraController* controller = new CalculadoraController();

    w.setController(controller);

    return a.exec();
}
