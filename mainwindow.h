#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stdlib.h>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int valor1,valor2,resultado;
    string tvalor1,tvalor2,tresultato;
    string operacao="";
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void add1();
    void add2();
    void add3();
    void add4();
    void add5();
    void add6();
    void add7();
    void add8();
    void add9();
    void add0();
    void opAdi();
    void opSub();
    void opMult();
    void opDiv();
    void apagar();



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
