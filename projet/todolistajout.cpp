#include "todolistajout.h"

ToDoListAjout::ToDoListAjout(QWidget *parent) : QWidget(parent)
{
    titre = new QLineEdit;
    objectif = new QLineEdit;
    date = new QLineEdit;

    layout = new QFormLayout;

    layout->addRow("Titre : ", titre);
    layout->addRow("Votre objectif : ", objectif);
    layout->addRow("Date : ", date);

    setLayout(layout);
}
