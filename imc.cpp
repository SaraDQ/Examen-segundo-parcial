#include "imc.h"
#include "ui_imc.h"
Impresion *guardar=new Impresion();
IMC::IMC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IMC)
{
    ui->setupUi(this);
    lienzo = QPixmap(500,100);
    this->dibujarIMC();

    ui->outGrafico->setPixmap(lienzo);
     ui->inPesoMax->setValue(guardar->max());
     ui->inPesoMin->setValue(guardar->min());
}

IMC::~IMC()
{
    delete ui;
}

void IMC::dibujarIMC()
{
    lienzo.fill(Qt::white);
    QPainter painter(&lienzo);
    int x=0;
    int y=0;

    //Crear pincel para los bordes
    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::blue);
    pincel.setJoinStyle(Qt::MiterJoin);
    // Establecer el pincel al "pintor"
    painter.setPen(pincel);

    // Dibujar primera barra
    painter.drawRect(x, y,40,50);

    // Crear un objeto color para el relleno
    QColor colorRelleno(172,225,175);
    // Crear otro objeto color para el borde
    QColor colorBorde(172,225,175);

    // Cambiar el color del pincel
    pincel.setColor(colorBorde);

    // Volver a establecer el pincel al "pintor"
    painter.setPen(pincel);

    // Establecer el color al brush (relleno)
    painter.setBrush(colorRelleno);

    // Dibujar segunda barra
    painter.drawRect(x, y,40, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra3(0, 71, 171);
    QColor cBordeBarra3(0, 70, 171);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra3);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra3);

    // Dibujar tercera barra
    painter.drawRect(x+50,y,50,50);

    /*Tercera barra*/

    painter.drawRect(x+110, y,100, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra4(127, 255, 0);
    QColor cBordeBarra4(127, 255, 0);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra4);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra4);

    // Dibujar tercera barra
    painter.drawRect(x+110,y,100,50);

    /*Cuarta barra*/
    painter.drawRect(x+220, y,80, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra5(251, 236, 93);
    QColor cBordeBarra5(251, 236, 93);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra5);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra5);

    // Dibujar tercera barra
    painter.drawRect(x+220,y,80,50);

    /*Quinta barra*/
    painter.drawRect(x+310, y,75, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra6(255, 127,80);
    QColor cBordeBarra6(255, 127, 80);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra6);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra6);

    // Dibujar tercera barra
    painter.drawRect(x+310,y,75,50);

    /*Sexta Barra*/
    painter.drawRect(x+395, y,70, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra7(220, 20,60);
    QColor cBordeBarra7(220, 20, 60);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra7);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra7);

    // Dibujar tercera barra
    painter.drawRect(x+395,y,70,50);
    painter.drawLine(0, 10,0,50);


    // Dibujar una línea
    /*p1 = inicio p3 = final , */

}


void IMC::on_btnCalcular_clicked()
{
    double altura,peso;
    altura =(ui->inAltura->value());
    peso =(ui->inPesoActual->value());
    double icm =  peso /(altura*altura);

    //peso = (ui->inPesoActual->text()).toDouble();
    ui->imc->setText(QString::number(icm,'f',2));
    this-> linea(icm);
    ui->outGrafico->setPixmap(lienzo);

    ui->outPesoRes->setText(QString::number(icm,'f',2));



}

void IMC::linea(double icm){
    lienzo.fill(Qt::white);
    QPainter painter(&lienzo);
    int x=0;
    int y=0;

    //Crear pincel para los bordes
    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::blue);
    pincel.setJoinStyle(Qt::MiterJoin);
    // Establecer el pincel al "pintor"
    painter.setPen(pincel);
    // Dibujar primera barra
    painter.drawRect(x, y,40,50);

    // Crear un objeto color para el relleno
    QColor colorRelleno(172,225,175);
    // Crear otro objeto color para el borde
    QColor colorBorde(172,225,175);

    // Cambiar el color del pincel
    pincel.setColor(colorBorde);

    // Volver a establecer el pincel al "pintor"
    painter.setPen(pincel);

    // Establecer el color al brush (relleno)
    painter.setBrush(colorRelleno);

    // Dibujar segunda barra
    painter.drawRect(x, y,40, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra3(0, 71, 171);
    QColor cBordeBarra3(0, 70, 171);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra3);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra3);

    // Dibujar tercera barra
    painter.drawRect(x+50,y,50,50);

    /*Tercera barra*/

    painter.drawRect(x+110, y,100, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra4(127, 255, 0);
    QColor cBordeBarra4(127, 255, 0);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra4);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra4);

    // Dibujar tercera barra
    painter.drawRect(x+110,y,100,50);

    /*Cuarta barra*/
    painter.drawRect(x+220, y,80, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra5(251, 236, 93);
    QColor cBordeBarra5(251, 236, 93);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra5);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra5);

    // Dibujar tercera barra
    painter.drawRect(x+220,y,80,50);

    /*Quinta barra*/
    painter.drawRect(x+310, y,75, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra6(255, 127,80);
    QColor cBordeBarra6(255, 127, 80);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra6);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra6);

    // Dibujar tercera barra
    painter.drawRect(x+310,y,75,50);

    /*Sexta Barra*/
    painter.drawRect(x+395, y,70, 50);

    // Creando los colores de la tercera barra
    QColor cRellenoBarra7(220, 20,60);
    QColor cBordeBarra7(220, 20, 60);

    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra7);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra7);

    // Dibujar tercera barra
    painter.drawRect(x+395,y,70,50);
    double valor = (icm*100) /511;
    //painter.drawLine(100, 10,100,50);
    // Dibujar una línea
    /*p1 = inicio p3 = final , */
    if (valor <2.93){

        painter.drawLine(0, 10,0,50);
        ui->PesoRes->setText(tr("Peso inferior al normal"));

    }
    else if( valor >=2.93 && valor <3.13 ){
        painter.drawLine(40-icm, 10,40-icm,50);


        ui->PesoRes->setText(tr("Peso inferior al normal"));
    }
    else if (valor >= 3.13 && valor <3.7){
        painter.drawLine(100-icm, 10,100-icm,50);


        ui->PesoRes->setText(tr("Peso inferior al normal"));
    }
    else if ( valor >= 3.7 && valor <4.89){
        painter.drawLine(210-icm, 10,210-icm,50);


        ui->PesoRes->setText(tr("Normal"));
    }
    else if (valor >= 4.89 && valor <5.87){
        QColor cRellenoBarra7(0, 0,00);
        QColor cBordeBarra7(00, 0, 00);

        // Estableciendo colores al puncel y al painter
        pincel.setColor(cBordeBarra7);
        painter.setPen(pincel);
        painter.setBrush(cRellenoBarra7);
        painter.drawLine(300-icm, 10,300-icm,50);


        ui->PesoRes->setText(tr("Peso superior al normal"));
    }
    else if (valor >= 5.87 && valor <4.89){
        painter.drawLine(385-icm, 10,385-icm,50);
        ui->PesoRes->setText(tr("Obesidad"));
    }
    else if (valor >= 4.89 && valor <7.82){
        painter.drawLine(465-icm, 10,465-icm,50);
        ui->PesoRes->setText(tr("Obesidad"));
    }
    else if(valor >=7.82){
        QColor cRellenoBarra7(0, 0,00);
        QColor cBordeBarra7(00, 0, 00);
        // Estableciendo colores al puncel y al painter
        pincel.setColor(cBordeBarra7);
        painter.setPen(pincel);
        painter.setBrush(cRellenoBarra7);
        painter.drawLine(465, 10,465,50);
        ui->PesoRes->setText(tr("Obesidad"));
    }
}
void IMC::on_btnGuardar_clicked()
{

    double altura,peso;
    altura =(ui->inAltura->value());
    peso =(ui->inPesoActual->value());
    guardar->imprimirPeso(peso,altura);
    ui->inPesoMax->setValue(guardar->max());
    ui->inPesoMin->setValue(guardar->min());
}

