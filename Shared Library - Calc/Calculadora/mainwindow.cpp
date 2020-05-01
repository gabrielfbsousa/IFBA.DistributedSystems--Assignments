#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMainWindow>
#include <calculadoracontroller.h>

#include <calculadoracontroller.h>
#include "calculadoracontroller.h"

#include <QChar>

MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::setController(CalculadoraController* controller){
    this->controller = controller;
}

int MainWindow::on_pushButton_clicked()
{
    QString text = ui->pushButton->text();

    if(controller->_operation != NULL){ //se for o número 2, não pode apagar o que vinha antes

        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else { //se for o número 1, apaga o que vem antes
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }


   return  text.toInt();
}

int MainWindow::on_pushButton_2_clicked()
{
    QString text = ui->pushButton_2->text();

    if(controller->_operation != NULL){

        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else {

        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

    return  text.toInt();
}

int MainWindow::on_pushButton_3_clicked()
{
    QString text = ui->pushButton_3->text();

    if(controller->_operation != NULL){

        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else {
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

    return  text.toInt();
}

void MainWindow::on_pushButton_5_clicked()
{
    QString text = ui->pushButton_5->text();

    if(controller->_operation != NULL){


        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else {
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

}

void MainWindow::on_pushButton_6_clicked()
{
    QString text = ui->pushButton_6->text();

    if(controller->_operation != NULL){


        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else {
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

}

void MainWindow::on_pushButton_7_clicked()
{
    QString text = ui->pushButton_7->text();

    if(controller->_operation != NULL){

        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else {
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

}

void MainWindow::on_pushButton_8_clicked()
{
    QString text = ui->pushButton_8->text();

    if(controller->_operation != NULL){

        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else {
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

}

void MainWindow::on_pushButton_9_clicked()
{
    QString text = ui->pushButton_9->text();

    if(controller->_operation != NULL){

        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else {
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

}

void MainWindow::on_pushButton_10_clicked()
{
    QString text = ui->pushButton_10->text();

    if(controller->_operation != NULL){

        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();

   } else {
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

}

void MainWindow::on_pushButton_11_clicked()
{
    QString text = ui->pushButton_11->text();

    if(controller->_operation != NULL){

        QString actualText = ui->textEdit->toPlainText();

        if(controller->_numberTwo == NULL){

        actualText = actualText + text;
        } else {
        actualText.replace(controller->_numberTwo, text.toInt());
        }

        ui->textEdit->setText(actualText);

        controller->_numberTwo = text.toInt();
   } else {
        ui->textEdit->clear();
        ui->textEdit->setText(text);

        controller->_numberOne = text.toInt();

    }

}


void MainWindow::on_pushButton_13_clicked()
{
    QString text = ui->pushButton_13->text();


    if(controller->_numberOne != NULL && controller->_operation == NULL){

        QString actualText = ui->textEdit->toPlainText();
        actualText = actualText + text;
        ui->textEdit->setText(actualText);

        controller->setOperation(text);
    }  else if(controller->_operation != NULL) {
        QString operation = ui->textEdit->toPlainText();
        operation.replace(controller->_operation, text);

        ui->textEdit->clear();
        ui->textEdit->setText(operation);

        controller->setOperation(text);
    } else

        ui->textEdit->clear();



}

void MainWindow::on_pushButton_14_clicked()
{
    QString text = ui->pushButton_14->text();

    if(controller->_numberOne != NULL && controller->_operation == NULL){

        QString actualText = ui->textEdit->toPlainText();
        actualText = actualText + text;
        ui->textEdit->setText(actualText);

        controller->setOperation(text);
    }  else if(controller->_operation != NULL) {
        QString operation = ui->textEdit->toPlainText();
        operation.replace(controller->_operation, text);

        ui->textEdit->clear();
        ui->textEdit->setText(operation);

        controller->setOperation(text);
    } else

        ui->textEdit->clear();
}

void MainWindow::on_pushButton_15_clicked()
{
    QString text = ui->pushButton_15->text();

    if(controller->_numberOne != NULL && controller->_operation == NULL){

        QString actualText = ui->textEdit->toPlainText();
        actualText = actualText + text;
        ui->textEdit->setText(actualText);

        controller->setOperation(text);
    }  else if(controller->_operation != NULL) {
        QString operation = ui->textEdit->toPlainText();
        operation.replace(controller->_operation, text);

        ui->textEdit->clear();
        ui->textEdit->setText(operation);

        controller->setOperation(text);
    } else

        ui->textEdit->clear();
}

void MainWindow::on_pushButton_16_clicked()
{
    QString text = ui->pushButton_16->text();


    if(controller->_numberOne != NULL && controller->_operation == NULL){

        QString actualText = ui->textEdit->toPlainText();
        actualText = actualText + text;
        ui->textEdit->setText(actualText);

        controller->setOperation(text);
    }  else if(controller->_operation != NULL) {
        QString operation = ui->textEdit->toPlainText();
        operation.replace(controller->_operation, text);

        ui->textEdit->clear();
        ui->textEdit->setText(operation);

        controller->setOperation(text);
    } else

        ui->textEdit->clear();
}

int MainWindow::on_pushButton_12_clicked()
{
    int result = controller->makeOperation();
    QString string = QString::number(result);
    ui->textEdit->clear();
    ui->textEdit->setText(string);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->textEdit->clear();
    controller->_numberOne = int();
    controller->_numberTwo = int();
    controller->_operation = QString();
}
