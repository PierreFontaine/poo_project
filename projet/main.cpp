#include "mainwindow.h"
#include "mainwindow.h"
#include "meteodata.h"
#include <QApplication>
#include <QDebug>
#include <QDir>
#include <QStandardPaths>
#include <QtWidgets>

int main(int argc, char *argv[]){
    qDebug() << QDir().absolutePath();
    if(QDir("dashboard/").exists()){
        qDebug()<< "Le dossier existe";
    } else {
        qDebug() << "Le dossier n'existe pas.";
        qDebug() << "tentative de creation de celui ci";
        QDir().mkdir("dashboard");
        if(QDir("dashboard/").exists()){
            qDebug()<< "Le dossier existe";
        } else {
            qDebug()<< "surement un pb d'autorisation";
        }
    }
    // Création de l'objet app
    QApplication app(argc, argv);
    // Création de la fenêtre principale
    FenPrincipale fenetre;
    // Affichage de la fenêtre
    fenetre.show();
    return app.exec();
}
