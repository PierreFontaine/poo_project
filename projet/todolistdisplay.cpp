#include "todolistdisplay.h"

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : contructeur du module
 remarque:
 precond :
 postcond:
 ©2017
*/
ToDoListDisplay::ToDoListDisplay(QWidget *parent) : Module(parent){
    _data = new ToDoListData();
    initBtn();
    initLayout();
    _container->addWidget(_majBtn);
    _majBtn->show();
    setLayout(_container);

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : initialisation des layout
 remarque:
 precond :
 postcond:
 ©2017
*/
void ToDoListDisplay::initLayout(){
    _container = new QVBoxLayout();
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : initialisation des boutons
 remarque:
 precond :
 postcond:
 ©2017
*/
void ToDoListDisplay::initBtn(){
    _majBtn = new QPushButton("Mise a jour liste",this);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : creer les callbacks
 remarque:
 precond :
 postcond:
 ©2017
*/
void ToDoListDisplay::connectElt(){
    QObject::connect(_majBtn,SIGNAL(clicked(bool)),_data,SLOT(readTDL()));
}
