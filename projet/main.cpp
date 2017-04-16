#include "mainwindow.h"
#include "meteodata.h"
#include <QApplication>
#include <QDebug>
#include <QDir>
#include <QStandardPaths>
#include <QtWidgets>

int main(int argc, char *argv[]){

    // Création de l'objet app
    QApplication app(argc, argv);
    // Création de la fenêtre principale
    FenPrincipale fenetre;
    // Affichage de la fenêtre
    fenetre.show();

    //verifier si dossier existe,créer dossier, verifier si fichier existe,creer fichier
    QDir home(QStandardPaths::displayName(QStandardPaths::HomeLocation) + "");
    QDir dossier(QStandardPaths::displayName(QStandardPaths::HomeLocation) + "/.dashboard");
    if (!dossier.exists()){
        qDebug()<<"dossier existe pas";
        home.mkdir(".dashboard");
    } else{
        qDebug()<<"dossier existe";
    }
    if (!dossier.exists()){
        qDebug()<<"dossier existe pas";

    } else{
        qDebug()<<"dossier existe";
    }

    return app.exec();
}
