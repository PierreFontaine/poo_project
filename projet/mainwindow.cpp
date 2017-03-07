#include "mainwindow.h"
#include <QPushButton>

FenPrincipale::FenPrincipale(){
    QWidget *widget = new QWidget;
    setCentralWidget(widget);
    setWindowTitle(tr("Menus"));
    defineAction();
    defineMenu();
}

void FenPrincipale::defineAction(){
    bye = new QAction(tr("&salut !"),this);
    copy = new QAction(tr("&copy !"),this);
}

void FenPrincipale::defineMenu(){
    menuFichier = menuBar()->addMenu(tr("&Fichier"));
    menuFichier->addAction(bye);

    menuEdition = menuBar()->addMenu(tr("&Edition"));
    menuEdition->addAction(copy);
}
