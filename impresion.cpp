#include "impresion.h"
#include <QTranslator>
#include <QInputDialog>
#include <iostream>
using namespace std;

Impresion::Impresion(){}

void Impresion::imprimirPeso(double peso,double altura)
{
    //Aqui se hace la impresion del nombre del texto a imprimir con fecha y hora
    QString current = QDateTime::currentDateTime().toString("dd-MM-yyyy");
    QFile archivo("PesosTotales.txt");
    if(archivo.open(QIODevice::Append|QIODevice::Text)){
        QTextStream datosA(&archivo);
        // Crear un 'stream' de texto
        QTextStream salida(&archivo);
        // Enviar los datos ingresados a la factura

        salida<<current+"  ";
        salida<<peso;
        salida<<"  ";
        salida<<altura;
        salida<<"\n";
    }

    // Cerrar el archivo
    archivo.close();
}

double Impresion::min()
{
    int cont = 0;
    double  min=0;
    QFile archivo("PesosTotales.txt");
    if(archivo.open(QIODevice::ReadOnly|QIODevice::Text)){
        QTextStream datosA(&archivo);
        // Crear un 'stream' de texto
        while(!datosA.atEnd()){
            QString line = datosA.readLine();
            cont = cont+1;
        }
        archivo.close();
        double vector[cont];
        int auxcont=0;
        QFile archivo("PesosTotales.txt");
        if(archivo.open(QIODevice::ReadOnly|QIODevice::Text)){
            QTextStream datosA(&archivo);
            while(!datosA.atEnd()){
                QString valor="";
                QString line = datosA.readLine();
                for (int i=0; i<line.length();i++){
                    if ( i > 11 ){

                         valor = valor + line[i];
                         if( line[i] == " "){

                             vector[auxcont]= valor.toDouble();
                             auxcont++;
                             break;
                         }
                    }

                }

             }
            min=vector[0];




            for (int i =0; i<auxcont;i++){
                if(vector[i]<min){
                    min=vector[i];
                }
            }
        }
        archivo.close();

    }
    return min;
}

double Impresion::max()
{
    int cont = 0;
    double  max=0;
    QFile archivo("PesosTotales.txt");
    if(archivo.open(QIODevice::ReadOnly|QIODevice::Text)){
        QTextStream datosA(&archivo);
        // Crear un 'stream' de texto
        while(!datosA.atEnd()){
            QString line = datosA.readLine();
            cont = cont+1;
        }
        archivo.close();
        double vector[cont];
        int auxcont=0;
        QFile archivo("PesosTotales.txt");
        if(archivo.open(QIODevice::ReadOnly|QIODevice::Text)){
            QTextStream datosA(&archivo);
            while(!datosA.atEnd()){
                QString valor="";
                QString line = datosA.readLine();
                for (int i=0; i<line.length();i++){
                    if ( i > 11 ){

                         valor = valor + line[i];
                         if( line[i] == " "){

                             vector[auxcont]= valor.toDouble();
                             auxcont++;
                             break;
                         }
                    }

                }

             }

            max=vector[0];
            for (int i =0; i<auxcont;i++){
                if(vector[i]>max){
                    max=vector[i];
                }
            }

        }
        //cerrando el archivo
        archivo.close();

    }
    return max;
}
