#include "todolistajout.h"

ToDoListAjout::ToDoListAjout(QWidget *parent) : QWidget(parent)
{
    initLine();
    initCalendrier();
    initButton();
    initLayout();
}

void ToDoListAjout::initLine(){
    _titre = new QLineEdit;
    _objectif = new QLineEdit;
    _heure = new QTimeEdit;
}

void ToDoListAjout::initCalendrier(){
    _calendrier = new QCalendarWidget;
    _calendrier->setMinimumDate(QDate::currentDate());
}

void ToDoListAjout::initButton(){
    _quitBtn = new QPushButton("Quitter",this);
    _validerBtn = new QPushButton("Valider",this);

    QObject::connect(_quitBtn, SIGNAL(clicked(bool)),this, SLOT(hide()));
}

void ToDoListAjout::initLayout(){
    _layoutBtn = new QHBoxLayout;
    _layoutCalendrier = new QHBoxLayout;
    _layoutLine = new QFormLayout;
    _layoutPrincipal = new QVBoxLayout;

    _layoutBtn->addWidget(_validerBtn);
    _layoutBtn->addWidget(_quitBtn);

    _layoutLine->addRow("Titre : ", _titre);
    _layoutLine->addRow("Votre objectif : ", _objectif);
    _layoutLine->addRow("Heure : ", _heure);

    _layoutCalendrier->addWidget(_calendrier);

    _layoutPrincipal->addLayout(_layoutLine);
    _layoutPrincipal->addLayout(_layoutCalendrier);
    _layoutPrincipal->addLayout(_layoutBtn);

    setLayout(_layoutPrincipal);
}
