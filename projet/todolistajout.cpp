#include "todolistajout.h"

ToDoListAjout::ToDoListAjout(QWidget *parent) : QWidget(parent)
{
    initLine();
    initButton();
    initLayout();
}

void ToDoListAjout::initLine(){
    _titre = new QLineEdit;
    _objectif = new QLineEdit;
    _date = new QDateEdit;
}

void ToDoListAjout::initButton(){
    _quitBtn = new QPushButton("Quitter",this);
    _validerBtn = new QPushButton("Valider",this);

    QObject::connect(_quitBtn, SIGNAL(clicked(bool)),this, SLOT(hide()));
}

void ToDoListAjout::initLayout(){
    _layoutBtn = new QHBoxLayout;
    _layoutLine = new QFormLayout;
    _layoutPrincipal = new QVBoxLayout;

    _layoutBtn->addWidget(_validerBtn);
    _layoutBtn->addWidget(_quitBtn);

    _layoutLine->addRow("Titre : ", _titre);
    _layoutLine->addRow("Votre objectif : ", _objectif);
    _layoutLine->addRow("Date : ", _date);

    _layoutPrincipal->addLayout(_layoutLine);
    _layoutPrincipal->addLayout(_layoutBtn);

    setLayout(_layoutPrincipal);
}
