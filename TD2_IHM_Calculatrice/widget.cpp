#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_1_clicked()
{

    ui->lineEdit->insert(ui->pushButton_1->text());
}

void Widget::on_pushButton_2_clicked()
{
    ui->lineEdit->insert(ui->pushButton_2->text());
}

void Widget::on_pushButton_3_clicked()
{
    ui->lineEdit->insert(ui->pushButton_3->text());
}

void Widget::on_pushButton_4_clicked()
{
    ui->lineEdit->insert(ui->pushButton_4->text());
}

void Widget::on_pushButton_5_clicked()
{
    ui->lineEdit->insert(ui->pushButton_5->text());
}

void Widget::on_pushButton_6_clicked()
{
    ui->lineEdit->insert(ui->pushButton_6->text());
}

void Widget::on_pushButton_7_clicked()
{
   ui->lineEdit->insert(ui->pushButton_7->text());
}

void Widget::on_pushButton_8_clicked()
{
    ui->lineEdit->insert(ui->pushButton_8->text());
}

void Widget::on_pushButton_9_clicked()
{
    ui->lineEdit->insert(ui->pushButton_9->text());
}

void Widget::on_pushButton_0_clicked()
{
    ui->lineEdit->insert(ui->pushButton_0->text());
}

void Widget::on_pushButton_division_clicked()
{
    ui->lineEdit->insert(ui->pushButton_1->text());
}

void Widget::on_pushButton_multiplication_clicked()
{
    ui->lineEdit->insert(ui->pushButton_multiplication->text());
}

void Widget::on_pushButton_moins_clicked()
{
    ui->lineEdit->insert(ui->pushButton_moins->text());
}

void Widget::on_pushButton_plus_clicked()
{
    ui->lineEdit->insert(ui->pushButton_plus->text());
}

void Widget::on_pushButton_C_clicked()
{

    ui->lineEdit->clear();

}

void Widget::on_pushButton_egal_clicked()
{
    QScriptEngine myEngine;

    QScriptValue resultat = myEngine.evaluate(ui->lineEdit->text());

    ui->lineEdit->setText(resultat.toString());
}
