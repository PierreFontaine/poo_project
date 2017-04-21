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

    setLayout(_layoutLine);

}
