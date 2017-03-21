#include "meteoparam.h"

MeteoParam::MeteoParam(QWidget *parent) : QWidget(parent){
    submitBtn = new QPushButton("Valider",this);

    initComboBox();
    initLayout();
    setLayout(vLayout);
}

void MeteoParam::initComboBox(){
    _villeListe = new QComboBox(this);
    _villeListe->addItem("Pau,fr");
    _villeListe->addItem("Bordeaux,fr");
    _villeListe->addItem("Paris,fr");
    _villeListe->addItem("Toulouse,fr");

    _mesure = new QComboBox(this);
    _mesure->addItem("Imperial");
    _mesure->addItem("Metric");
    _mesure->addItem("Default");

}

void MeteoParam::initLayout(){
    vLayout = new QVBoxLayout();

    formLayout = new QFormLayout();
    formLayout->addRow("ville : ",_villeListe);
    formLayout->addRow("mesure : ",_mesure);

    vLayout->addLayout(formLayout);
    vLayout->addWidget(submitBtn);
}
