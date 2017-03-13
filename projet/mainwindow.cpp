#include "mainwindow.h"
#include <QPushButton>
#include "budgetmodule.h"
#include<iostream>


FenPrincipale::FenPrincipale(){
    QWidget *zoneCentrale = new QWidget;
    setCentralWidget(zoneCentrale);
    Module *mod1 = new BudgetModule(zoneCentrale);
    Module *mod2 = new BudgetModule(zoneCentrale);
    Module *mod3 = new BudgetModule(zoneCentrale);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(mod1, 0, 0);
    layout->addWidget(mod2, 0, 1);
    layout->addWidget(mod3, 1, 0);

    mod1->show();
    mod2->show();
    mod3->show();
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
