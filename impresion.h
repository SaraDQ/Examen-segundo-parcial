#ifndef IMPRESION_H
#define IMPRESION_H
#include <QFileDialog>
#include <QDebug>
#include <iostream>
#include <QDialog>
#include <QObject>
#include <QDateTime>
#include <QMessageBox>

class Impresion
{
public:
    Impresion();

    void imprimirPeso(double peso,double altura);
    double max();
    double min();

};

#endif // IMPRESION_H
