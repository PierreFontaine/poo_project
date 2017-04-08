#include "convertmodule.h"

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : constructeur par defaut du module
 remarque:
 precond :
 postcond:
 ©2017
*/
convertModule::convertModule(QWidget *parent) : Module(parent){
    initLabel();
    initLayout();
    initComboBox();
    setLayout(_mainLyt);

    _deviseLyt->addWidget(_entite);
    qDebug() << "on remplie le widget table " << endl;
    _entriesLyt->addWidget(_unit1Lbl,0,0);
    _entriesLyt->addWidget(_unit2Lbl,0,1);
    _entriesLyt->addWidget(_unit1,1,0);
    _entriesLyt->addWidget(_unit2,1,1);
    qDebug() << "après replissage de la table " << endl;

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : initialiser les layouts
 remarque:
 precond :
 postcond:
 ©2017
*/
void convertModule::initLayout(){
    _mainLyt = new QVBoxLayout();
    _deviseLyt = new QHBoxLayout();
    _unitsLyt = new QHBoxLayout();
    _entriesLyt = new QGridLayout();

    _mainLyt->addLayout(_deviseLyt);
    _mainLyt->addLayout(_unitsLyt);
    _unitsLyt->addLayout(_entriesLyt);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : initialiser les combobox
 remarque:
 precond :
 postcond:
 ©2017
*/
void convertModule::initComboBox(){
    _entite = new QComboBox();
    _unit1 = new QComboBox();
    _unit2 = new QComboBox();
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : initialiser les labels
 remarque:
 precond :
 postcond:
 ©2017
*/
void convertModule::initLabel(){
    _unit1Lbl = new QLabel("valeur 1");
    _unit2Lbl = new QLabel("valeur 2");
}