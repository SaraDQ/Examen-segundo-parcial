#ifndef IMC_H
#define IMC_H

#include <QMainWindow>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>

#include "impresion.h"

QT_BEGIN_NAMESPACE
namespace Ui { class IMC; }
QT_END_NAMESPACE

class IMC : public QMainWindow
{
    Q_OBJECT

public:
    IMC(QWidget *parent = nullptr);
    ~IMC();




private slots:
    void on_btnCalcular_clicked();

    void on_btnGuardar_clicked();

private:
    Ui::IMC *ui;
    QPixmap lienzo;

    void dibujarIMC();
    void linea(double icm);
};

#endif // IMC_H
