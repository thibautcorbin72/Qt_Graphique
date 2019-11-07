#ifndef CALCULATRICESD_H
#define CALCULATRICESD_H

#include <QWidget>
#include <QScriptEngine>
#include <QDebug>
#include <QPushButton>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonClear_clicked();

    void on_pushButtonEgal_clicked();

    void onQPushButtonClicked();

private:
    Ui::Widget *ui;
    QPushButton *touche;
};

#endif // CALCULATRICESD_H
