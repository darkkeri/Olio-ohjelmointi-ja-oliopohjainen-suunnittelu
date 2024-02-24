#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberclickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << name << Qt::endl;

    if(state == 1)
    {
        number1 = number1 + name.last(1);
        ui->num1line->setText(number1);
    }
    else if(state == 2)
    {
        number2 = number2 + name.last(1);
        ui->num2line->setText(number2);
    }

}

void MainWindow::addSubMulDivClickHandler()
{
    state = 2;
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();


    if (name == "add"){
        operand = 0;
    }
    else if (name == "sub"){
        operand = 1;
    }
    else if (name == "mul"){
        operand = 2;
    }
    else if (name == "div"){
        operand = 3;
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    num1 = number1.toFloat();
    num2 = number2.toFloat();

    if (name == "enter"){
        switch(operand) {
        case 0:
            result = num1 + num2;
            break;
        case 1:
            result = num1 - num2;
            break;
        case 2:
            result = num1 * num2;
            break;
        case 3:
            result = num1 / num2;
            break;
        }
        ui->resultline->setText(QString::number(result));
    }
    else if (name == "clear"){
        resetLineEdits();
    }
}

void MainWindow::resetLineEdits(){
    operand = 5;
    number1 ="";
    number2 ="";
    result = 0;
    state = 1;

    ui->num1line->setText("");
    ui->num2line->setText("");
    ui->resultline->setText("");

}

void MainWindow::on_pushButton_1_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_2_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_3_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_4_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_5_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_6_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_7_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_8_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_9_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_pushButton_0_clicked()
{
    numberclickedHandler();
}


void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler();
}



