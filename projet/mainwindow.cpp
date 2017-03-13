#include "mainwindow.h"
#include <QPushButton>
#include "budgetmodule.h"
#include<iostream>


FenPrincipale::FenPrincipale(){
    QWidget *zoneCentrale = new QWidget;
    setCentralWidget(zoneCentrale);
    QWidget *bouton1 = new QWidget(zoneCentrale);
    QWidget *bouton2 = new QWidget(zoneCentrale);
    QWidget *bouton3 = new QWidget(zoneCentrale);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(bouton1, 0, 0);
    layout->addWidget(bouton2, 0, 1);
    layout->addWidget(bouton3, 1, 0);

    bouton1->show();
    bouton2->show();
    bouton3->show();
    zoneCentrale->setLayout(layout);
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
