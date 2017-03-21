#include "newbudget.h"

NewBudget::NewBudget(QWidget *parent) : QWidget(parent)
{
    initComboBox();
    initDoubleSpinBox();

    validerBtn = new QPushButton("Valider",this);
    QObject::connect(validerBtn,SIGNAL(clicked(bool)),this,SLOT());

}

void NewBudget::initComboBox(){
    liste = new QComboBox(this);
    liste->addItem("Salaire");
    liste->addItem("Autre Entrée Argent");
    liste->addItem("Course");
    liste->addItem("Loisir");
    liste->addItem("Autre Sortie Argent");
}

void NewBudget::initDoubleSpinBox(){
    valeur = new QDoubleSpinBox(this);
}
