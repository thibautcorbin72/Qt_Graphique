#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>
#include <QDebug>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>


#define NBTOUCHES 16


class Calculatrice: public QWidget
{
public:
    Calculatrice(const QWidget* parent);
    void onQPushButtonClicked();
    ~Calculatrice();
private:
    const QString
    tableDesSymboles [NBTOUCHES] = {"0","1","2","3","4","5","6","7","8","9","c","=","/","*","-","+"};
    QString tablesDesSymboles[16];
    QPushButton *touches[16];
    QLineEdit* afficheur;
    QGridLayout* grille;

};




#endif // CALCULATRICE_H
