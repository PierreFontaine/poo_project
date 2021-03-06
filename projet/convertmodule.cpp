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
    initQPushButton();
    initLayout();
    initComboBox();
    setLayout(_mainLyt);
    initConnection();

    _deviseLyt->addWidget(_entite);
    qDebug() << "on remplie le widget table " << endl;
    _entriesLyt->setVerticalSpacing(10);
    _entriesLyt->addWidget(_unit1,0,0);
    _entriesLyt->addWidget(_unit2,0,1);
    _entriesLyt->addWidget(_unit1Edit,1,0);
    _entriesLyt->addWidget(_unit2Edit,1,1);
    _mainLyt->addWidget(_val);

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
                        "vitesse"});

    _unit1 = new QComboBox();
    _unit2 = new QComboBox();
    _unit1->addItems({"celsius","kelvin","fahrenheit"});
    _unit2->addItems({"celsius","kelvin","fahrenheit"});
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     :
 remarque:
 precond :
 postcond:
 ©2017
*/
void convertModule::initQPushButton(){
    _val = new QPushButton("convertir");
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
    //For ANY LABEL
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
 QObject::connect(_val,SIGNAL(clicked(bool)),this,SLOT(convert()));
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
        _unit1->addItems({"Miles/h","Kilometre/h","Metre/h","Miles/m","Kilometre/m","Metre/m","Miles/s","Kilometre/s","Metre/s"});
        _unit2->addItems({"Miles/h","Kilometre/h","Metre/h","Miles/m","Kilometre/m","Metre/m","Miles/s","Kilometre/s","Metre/s"});
    }
}


/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : effectuer la converstion de mesure en jouant sur les 2 labels
 remarque:
 precond :
 postcond:
 ©2017
*/
void convertModule::convert(){
    int val1 = _unit1Edit->text().toInt();

    if(_entite->currentText() == "température"){

        if(_unit1->currentIndex() == 0){
            _mesureT = new Celsius(val1);
        } else if (_unit1->currentIndex() == 1){
            _mesureT = new Kelvin(val1);
        } else if (_unit1->currentIndex() == 2){
            _mesureT = new Fahrenheit(val1);
        }

        if(_unit2->currentIndex() == 0){
            _unit2Edit->setText(QString::number(_mesureT->getCelsius()));
        } else if (_unit2->currentIndex() == 1){
            _unit2Edit->setText(QString::number(_mesureT->getKelvin()));
        } else if (_unit2->currentIndex() == 2){
            _unit2Edit->setText(QString::number(_mesureT->getFahrenheit()));
        }

    } else if (_entite->currentText() == "vitesse"){

        if(_unit1->currentIndex() == 0){
            _mesureV = new Miles(val1,HEURE);
        } else if (_unit1->currentIndex() == 1){
            _mesureV = new Kilometre(val1,HEURE);
        } else if (_unit1->currentIndex() == 2){
            _mesureV = new Metre(val1,HEURE);
        } else if (_unit1->currentIndex() == 3){
            _mesureV = new Miles(val1,MINUTE);
        } else if (_unit1->currentIndex() == 4){
            _mesureV = new Kilometre(val1,MINUTE);
        } else if (_unit1->currentIndex() == 5){
            _mesureV = new Metre(val1,MINUTE);
        } else if (_unit1->currentIndex() == 6){
            _mesureV = new Miles(val1,SECONDE);
        } else if (_unit1->currentIndex() == 7){
            _mesureV = new Kilometre(val1,SECONDE);
        } else if (_unit1->currentIndex() == 8){
            _mesureV = new Metre(val1,SECONDE);
        }


        if(_unit2->currentIndex() == 0){
            _unit2Edit->setText(QString::number(_mesureV->getMilesValue(HEURE)));
        } else if (_unit2->currentIndex() == 1){
            _unit2Edit->setText(QString::number(_mesureV->getKilometreValue(HEURE)));
        } else if (_unit2->currentIndex() == 2){
            _unit2Edit->setText(QString::number(_mesureV->getMetreValue(HEURE)));
        } else if (_unit2->currentIndex() == 3){
            _unit2Edit->setText(QString::number(_mesureV->getMilesValue(MINUTE)));
        } else if (_unit2->currentIndex() == 4){
            _unit2Edit->setText(QString::number(_mesureV->getKilometreValue(MINUTE)));
        } else if (_unit2->currentIndex() == 5){
            _unit2Edit->setText(QString::number(_mesureV->getMetreValue(MINUTE)));
        } else if (_unit2->currentIndex() == 6){
            _unit2Edit->setText(QString::number(_mesureV->getMilesValue(SECONDE)));
        } else if (_unit2->currentIndex() == 7){
            _unit2Edit->setText(QString::number(_mesureV->getKilometreValue(SECONDE)));
        } else if (_unit2->currentIndex() == 8){
            _unit2Edit->setText(QString::number(_mesureV->getMetreValue(SECONDE)));
        }

    }
}
