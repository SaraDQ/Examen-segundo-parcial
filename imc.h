#ifndef IMC_H
#define IMC_H

#include <QMainWindow>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class IMC; }
QT_END_NAMESPACE

class IMC : public QMainWindow
{
    Q_OBJECT

public:
    IMC(QWidget *parent = nullptr);
    ~IMC();

private:
    Ui::IMC *ui;
    QPixmap lienzo;
    void dibujarIMC();
};
#endif // IMC_H
