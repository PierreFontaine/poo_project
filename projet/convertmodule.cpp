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
    initLineEdit();
    initLayout();
    initComboBox();
    setLayout(_mainLyt);
    initConnection();

    _deviseLyt->addWidget(_entite);
    qDebug() << "on remplie le widget table " << endl;
    _entriesLyt->addWidget(_unit1Lbl,0,0);
    _entriesLyt->addWidget(_unit2Lbl,0,1);
    _entriesLyt->addWidget(_unit1,1,0);
    _entriesLyt->addWidget(_unit2,1,1);
    _entriesLyt->addWidget(_unit1Edit,2,0);
    _entriesLyt->addWidget(_unit2Edit,2,1);

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
    _entite->addItems({ "température",
                        "vitesse",
                        "puissance",
                        "volume"});

    _unit1 = new QComboBox();
    _unit2 = new QComboBox();
    _unit1->addItems({"celsius","kelvin","fahrenheit"});
    _unit2->addItems({"celsius","kelvin","fahrenheit"});
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

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : gestion des ligne d'entrée
 remarque:
 precond :
 postcond:
 ©2017
*/
void convertModule::initLineEdit(){
    _unit1Edit = new QLineEdit();
    _unit2Edit = new QLineEdit();
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : initialiser les callbacks
 remarque:
 precond :
 postcond:
 ©2017
*/
void convertModule::initConnection(){
 QObject::connect(_entite,SIGNAL(currentIndexChanged(QString)),this,SLOT(loadUnits(QString)));
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : charger les combo box en fonction de la conv souhaitée
 remarque:
 precond :
 postcond:
 ©2017
*/
void convertModule::loadUnits(QString e){
    _unit1->clear();
    _unit2->clear();
    if(e == "température"){
        _unit1->addItems({"celsius","kelvin","fahrenheit"});
        _unit2->addItems({"celsius","kelvin","fahrenheit"});
    } else if (e == "vitesse"){
        _unit1->addItems({"Miles/h","Kilometre/h","noeud"});
        _unit2->addItems({"Miles/h","Kilometre/h","noeud"});
    }
}
