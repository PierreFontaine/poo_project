#include "mainwindow.h"
#include "meteodata.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    // Création de la fenêtre principale
    FenPrincipale fenetre;

    // Affichage de la fenêtre
    fenetre.show();

    return app.exec();
}
