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
    QDir dossier(QStandardPaths::HomeLocation + "/.dashboard");
    if (!dossier.exists()){
        qDebug()<<"dossier existe pas";
        if(dossier.mkdir(QStandardPaths::HomeLocation + "/.dashboard")){
            qDebug()<<"Dossier";
        }
    } else{
        qDebug()<<"dossier existe";
    }

    return app.exec();
}
