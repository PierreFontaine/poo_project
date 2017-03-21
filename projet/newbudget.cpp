#include "newbudget.h"

NewBudget::NewBudget(QWidget *parent) : QWidget(parent)
{
    initComboBox();
    initDoubleSpinBox();
    initLayout();

}

void NewBudget::initComboBox(){
    newBListe = new QComboBox(this);
    newBListe->addItem("Salaire");
    newBListe->addItem("Autre Entrée Argent");
    newBListe->addItem("Course");
    newBListe->addItem("Loisir");
    newBListe->addItem("Loyer");
    newBListe->addItem("Remboursement pret");
    newBListe->addItem("Shopping");
    newBListe->addItem("Autre Sortie Argent");
}

void NewBudget::initDoubleSpinBox(){
    newBValeur = new QDoubleSpinBox(this);
}

void NewBudget::initLayout(){

    newDLayout = new QFormLayout;
    newDLayout->addRow("Choix : ", newBListe);
    newDLayout->addRow("Somme Argent : ", newBValeur);

    newBLayout = new QVBoxLayout;
    newBLayout->addLayout(newDLayout);
    validerBtn = new QPushButton("Valider");
    QObject::connect(validerBtn, SIGNAL(clicked(bool)),this, SLOT(quit()));
    newBLayout->addWidget(validerBtn);

    setLayout(newBLayout);

}
