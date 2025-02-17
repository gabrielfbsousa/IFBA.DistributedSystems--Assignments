#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <calculadoracontroller.h>
#include "calculadoracontroller.h"
#include <QMainWindow>
#include <QString>
#include <QPushButton>

class CalculadoraController;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void setController(CalculadoraController* controller);


    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();




private slots:
    int on_pushButton_clicked();

    int on_pushButton_2_clicked();

    int on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    int on_pushButton_12_clicked();

    void on_pushButton_4_clicked();

private:
    CalculadoraController *controller;
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
