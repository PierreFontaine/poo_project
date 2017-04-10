#include "mainwindow.h"

FenPrincipale::FenPrincipale(){
    zoneCentrale = new QWidget;
    setCentralWidget(zoneCentrale);

    mod1 = new ToDoListModule(zoneCentrale);
    mod2 = new MeteoModule(zoneCentrale);
    mod3 = new ActuModule(zoneCentrale);
    mod4 = new convertModule(zoneCentrale);
    mod5 = new HorlogeModule(zoneCentrale);
    mod6 = new DiapoModule(zoneCentrale);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(mod1, 0, 0);
    layout->addWidget(mod2, 0, 1);
    layout->addWidget(mod3, 1, 0);
    layout->addWidget(mod4, 1, 1);
    layout->addWidget(mod5, 0, 2);
    layout->addWidget(mod6, 1, 2);

    mod1->show();
    mod2->show();
    mod3->show();
    mod4->show();
    mod5->show();
    mod6->show();

    zoneCentrale->setLayout(layout);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     :
 remarque:
 precond :
 postcond:
 ©2017
 */
void FenPrincipale::defineAction(){
    bye = new QAction(tr("&salut !"),this);
    copy = new QAction(tr("&copy !"),this);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     :
 remarque:
 precond :
 postcond:
 ©2017
 */
void FenPrincipale::defineMenu(){
    menuFichier = menuBar()->addMenu(tr("&Fichier"));
    menuFichier->addAction(bye);

    menuEdition = menuBar()->addMenu(tr("&Edition"));
    menuEdition->addAction(copy);
}
