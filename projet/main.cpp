#include "mainwindow.h"
#include "meteodata.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    MeteoData data("api.openweathermap.org/data/2.5/weather?q=London,uk&APPID=","9a5b3401d0ae43c0fdd643de1a05660c");
    data.requete();
    // Création de la fenêtre principale
    FenPrincipale fenetre;

    // Affichage de la fenêtre
    fenetre.show();

    return app.exec();
}
