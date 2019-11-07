#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton0,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton1,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton2,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton3,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton4,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton5,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton6,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton7,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton8,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton9,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButtonPlus,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButtonMoins,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButtonMultiplier,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButtonDiviser,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonClear_clicked()
{
    ui->lineEditAfficheur->clear();
}

void Widget::on_pushButtonEgal_clicked()
{
    QScriptEngine calcul;
    QScriptValue resultat = calcul.evaluate(ui->lineEditAfficheur->text());
    ui->lineEditAfficheur->clear();
    ui->lineEditAfficheur->setText(resultat.toString());
}

void Widget::onQPushButtonClicked()
{
    touche = qobject_cast<QPushButton*>(sender());
    ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+touche->text());

}
