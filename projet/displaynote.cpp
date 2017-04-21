#include "displaynote.h"

DisplayNote::DisplayNote(QWidget *parent) : QWidget(parent)
{
    _date = new QLabel;
    _heure = new QLabel;
    _note = new QLabel;
    _titre = new QLabel;
    _layoutPrincipal = new QVBoxLayout(this);
    _layoutLine = new QFormLayout(this);

    _layoutLine->addRow("Titre : ",_titre);
    _layoutLine->addRow("Note : ",_note);
    _layoutLine->addRow("Date : ",_date);
    _layoutLine->addRow("Heure : ",_heure);

    _layoutPrincipal->addLayout(_layoutLine);

    setLayout(_layoutPrincipal);
    show();
}

DisplayNote::DisplayNote(QString d, QString h, QString n, QString t,QWidget *parent) : QWidget(parent){
   _date = new QLabel(d,this);
   _heure = new QLabel(h,this);
   _note = new QLabel(n,this);
   _titre = new QLabel(t,this);
   _layoutPrincipal = new QVBoxLayout(this);
   _layoutLine = new QFormLayout(this);


   _layoutLine->addRow("Titre : ",_titre);
   _layoutLine->addRow("Note : ",_note);
   _layoutLine->addRow("Date : ",_date);
   _layoutLine->addRow("Heure : ",_heure);

   _layoutPrincipal->addLayout(_layoutLine);

   setLayout(_layoutPrincipal);
}

