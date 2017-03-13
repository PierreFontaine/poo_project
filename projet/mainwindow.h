#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE

#include <QtWidgets>
#include "budgetmodule.h"
#include "meteomodule.h"
#include <QPushButton>
#include<iostream>

class FenPrincipale : public QMainWindow{
    public:
        FenPrincipale();

    private:
        void defineAction();
        void defineMenu();
        QAction *bye;
        QAction *copy;
        QMenu *menuFichier;
        QMenu *menuEdition;
        QWidget *zoneCentrale;
        Module *mod1;
        Module *mod2;
        Module *mod3;
        Module *mod4;

};

#endif
