#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QScriptEngine>

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

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_egal_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_multiplication_clicked();

    void on_pushButton_moins_clicked();

    void on_pushButton_plus_clicked();

private:
    Ui::Widget *ui;
    QString touche;
    QString message;
    QString resultat;

};

#endif // WIDGET_H
