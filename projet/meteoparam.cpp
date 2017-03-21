#include "meteoparam.h"

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : constructeur par def
 remarque:
 precond :
 postcond:
 ©2017
 */
MeteoParam::MeteoParam(QWidget *parent, MeteoData *m) : QWidget(parent),_data(m){
    submitBtn = new QPushButton("Valider",this);

    initComboBox();
    initLayout();
    setLayout(vLayout);
    QObject::connect(submitBtn,SIGNAL(clicked(bool)),this,SLOT(debug()));
    QObject::connect(submitBtn,SIGNAL(clicked(bool)),this,SLOT(majParams()));
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : creation des comboBoxs pour unités et villes
 remarque:
 precond :
 postcond:
 ©2017
 */
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

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : creation des layouts
 remarque:
 precond :
 postcond:
 ©2017
 */
void MeteoParam::initLayout(){
    vLayout = new QVBoxLayout();

    formLayout = new QFormLayout();
    formLayout->addRow("ville : ",_villeListe);
    formLayout->addRow("mesure : ",_mesure);

    vLayout->addLayout(formLayout);
    vLayout->addWidget(submitBtn);
}

void MeteoParam::debug(){
    qDebug()<<_villeListe->currentText();
    qDebug()<<_mesure->currentText();
}

QString MeteoParam::getVille()const{
    return _villeListe->currentText();
}

QString MeteoParam::getMesure()const{
    return _mesure->currentText();
}

void MeteoParam::majParams(){
    _data->setVille(getVille());
    _data->setMesure(getMesure());
    _data->reqAgain();
}
