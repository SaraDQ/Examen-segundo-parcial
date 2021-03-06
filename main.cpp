#include "imc.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Objeto para manejar las traducciones
        QTranslator traducion;
        // Solicitando al usuario que seleccione un idioma
        QStringList idiomas;
        idiomas << "Ruso" << "Afrikáans" << "Español";
        QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                                   "Idioma",
                                   "Seleccione un idioma",
                                   idiomas);
        // Dependiendo del idioma seleccionado, carga el archivo de rtaducción
        if (idiomaSeleccionado == "Ruso"){
            traducion.load(":/ExamenPOO_tu_FR.qm");
        }else if (idiomaSeleccionado == "Afrikáans"){
            traducion.load(":/ExamenPOO_en.qm");
        }
        // Si es diferente de español, se instala la traducción en TODA la aplicación
        if (idiomaSeleccionado != "Español"){
            a.installTranslator(&traducion);
        }
        // Muestra la ventana principal
        IMC w;
        w.show();
        return a.exec();
    return a.exec();
}
