#include "displaynote.h"

DisplayNote::DisplayNote(QWidget *parent) : QWidget(parent)
{
    _date = new QLabel;
    _heure = new QLabel;
    _note = new QLabel;
    _titre = new QLabel;

    _layoutLine = new QFormLayout;

    _layoutLine->addRow("Titre : ",_titre);
    _layoutLine->addRow("Note : ",_note);
    _layoutLine->addRow("Date : ",_date);
    _layoutLine->addRow("Heure : ",_heure);

    _layoutPrincipal->addLayout(_layoutLine);

    setLayout(_layoutPrincipal);

}

DisplayNote::DisplayNote(QString d, QString h, QString n, QString t,QWidget *parent) : QWidget(parent){
   _date = new QLabel(d);
   _heure = new QLabel(h);
   _note = new QLabel(n);
   _titre = new QLabel(t);

}

