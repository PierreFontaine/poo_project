#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE

#include <QtWidgets>

class FenPrincipale : public QMainWindow
{
    public:
    FenPrincipale();

    private:
        void defineAction();
        void defineMenu();
        QAction *bye;
        QAction *copy;
        QMenu *menuFichier;
        QMenu *menuEdition;

};

#endif
