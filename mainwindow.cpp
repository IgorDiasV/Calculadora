#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->botao0, &QPushButton::clicked,this, &MainWindow::add0);
    connect(ui->botao1, &QPushButton::clicked,this, &MainWindow::add1);
    connect(ui->botao2, &QPushButton::clicked,this, &MainWindow::add2);
    connect(ui->botao3, &QPushButton::clicked,this, &MainWindow::add3);
    connect(ui->botao4, &QPushButton::clicked,this, &MainWindow::add4);
    connect(ui->botao5, &QPushButton::clicked,this, &MainWindow::add5);
    connect(ui->botao6, &QPushButton::clicked,this, &MainWindow::add6);
    connect(ui->botao7, &QPushButton::clicked,this, &MainWindow::add7);
    connect(ui->botao8, &QPushButton::clicked,this, &MainWindow::add8);
    connect(ui->botao9, &QPushButton::clicked,this, &MainWindow::add9);
    connect(ui->botaoAdi, &QPushButton::clicked,this, &MainWindow::opAdi);
    connect(ui->botaoSub, &QPushButton::clicked,this, &MainWindow::opSub);
    connect(ui->botaoDiv, &QPushButton::clicked,this, &MainWindow::opDiv);
    connect(ui->botaoMult, &QPushButton::clicked,this, &MainWindow::opMult);
    connect(ui->botaoAC, &QPushButton::clicked,this, &MainWindow::apagar);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add1()
{
    if(operacao=="")
    {
        tvalor1+='1';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='1';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }else
    {
       valor1=atoi(tvalor1.c_str());//.c_str converte a string para char
       // o atoi converte o char para int
       valor2=atoi(tvalor2.c_str());
       if(operacao=="+")
       {
           resultado=valor1+valor2;
       }else if(operacao=="-")
       {
           resultado=valor1-valor2;
       }else if(operacao=="/")
       {
           resultado=valor1/valor2;
       }else if(operacao=="*")
       {
           resultado=valor1*valor2;
       }

       tresultado=to_string(resultado);
       ui->lineEdit->setText(QString::fromStdString(tresultado));
       tvalor1=tresultado;
       tvalor2="";
    }

}
void MainWindow::add2()
{
    if(operacao=="")
    {
        tvalor1+='2';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='2';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}
void MainWindow::add3()
{
    if(operacao=="")
    {
        tvalor1+='3';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='3';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}
void MainWindow::add4()
{
    if(operacao=="")
    {
        tvalor1+='4';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='4';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}
void MainWindow::add5()
{
    if(operacao=="")
    {
        tvalor1+='5';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='5';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}
void MainWindow::add6()
{
    if(operacao=="")
    {
        tvalor1+='6';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='6';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}
void MainWindow::add7()
{
    if(operacao=="")
    {
        tvalor1+='7';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='7';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}
void MainWindow::add8()
{
    if(operacao=="")
    {
        tvalor1+='8';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='8';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}
void MainWindow::add9()
{
    if(operacao=="")
    {
        tvalor1+='9';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='9';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}
void MainWindow::add0()
{
    if(operacao=="")
    {
        tvalor1+='0';
        ui->lineEdit->setText(QString::fromStdString(tvalor1));
    }else if(tvalor2=="")
    {
        tvalor2+='0';
        string textoDaTela = tvalor1 +' '+ operacao+' ' +tvalor2;
        ui->lineEdit->setText(QString::fromStdString(textoDaTela));
    }
}

void MainWindow::opAdi()
{
    operacao="+";
}

void MainWindow::opSub()
{
    operacao="-";
}

void MainWindow::opMult()
{
    operacao="*";
}

void MainWindow::opDiv()
{
    operacao="/";
}

void MainWindow::apagar()
{
    operacao="";
    tvalor1="";
    tvalor2="";
    ui->lineEdit->setText("");
}

