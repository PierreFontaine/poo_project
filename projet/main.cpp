#include "mainwindow.h"
#include "meteodata.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    FenPrincipale fenetre;
    fenetre.show();

    return app.exec();
}
