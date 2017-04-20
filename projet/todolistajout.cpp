#include "todolistajout.h"

ToDoListAjout::ToDoListAjout(QWidget *parent) : QWidget(parent)
{
    initLine();
    initButton();
    initLayout();
}

//QDate ToDoListAjout::getDate()const{
//    return _date;
//}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : Initialisation des lignes d'écriture
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListAjout::initLine(){
    _titre = new QLineEdit;
    _note = new QLineEdit;
    _heure = new QTimeEdit;
    _date = new QDate;
}


/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : Initialisation bouton
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListAjout::initButton(){
    _quitBtn = new QPushButton("Quitter",this);
    _validerBtn = new QPushButton("Valider",this);

    QObject::connect(_quitBtn, SIGNAL(clicked(bool)),this, SLOT(hide()));
    QObject::connect(_validerBtn, SIGNAL(clicked(bool)),this, SLOT(ajoutTDL()));
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : Ecriture fichier
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListAjout::ajoutTDL(){
    QFile data("resources/TDLdata.txt");

    //if(!data.exists()){
    //    QMessageBox::critical(NULL,"Erreur","TDLdata n'existe pas");
    //}else{
        if(data.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream texte(&data);
            texte << tr("dada");
        }else{
            QMessageBox::critical(NULL,"Erreur","Impossible de lire TDLdata");
        }
        data.close();
    //}
    hide();
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : Initialisation layout
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListAjout::initLayout(){
    _layoutBtn = new QHBoxLayout;
    _layoutLine = new QFormLayout;
    _layoutPrincipal = new QVBoxLayout;

    _layoutBtn->addWidget(_validerBtn);
    _layoutBtn->addWidget(_quitBtn);

    _layoutLine->addRow("Titre : ", _titre);
    _layoutLine->addRow("Note : ", _note);
    _layoutLine->addRow("Heure : ", _heure);
    //_layoutLine->addRow("Date : ",_date);

    _layoutPrincipal->addLayout(_layoutLine);
    _layoutPrincipal->addLayout(_layoutBtn);

    setLayout(_layoutPrincipal);
}
