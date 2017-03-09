#include "mainwindow.h"
#include <QPushButton>


FenPrincipale::FenPrincipale(){
    QMdiArea *area = new QMdiArea;

    QWidget *widget1 = new QWidget;
    QWidget *widget2 = new QWidget;

    widget1->setFixedSize(300, 150);
    widget2->setFixedSize(300, 150);

    QPushButton *bouton1 = new QPushButton(tr("Agenda"),widget1);
    QPushButton *bouton2 = new QPushButton(tr("Météo"),widget2);

    bouton1->show();
    bouton2->show();

    QMdiSubWindow *sousFenetre1 = area->addSubWindow(widget1);
    QMdiSubWindow *sousFenetre2 = area->addSubWindow(widget2);

    sousFenetre1->setFixedSize(300, 150);
    sousFenetre2->setFixedSize(300, 150);

    setWindowTitle(tr("DashBoard"));
    defineAction();
    defineMenu();
    setCentralWidget(area);
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
