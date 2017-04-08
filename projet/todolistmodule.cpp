#include "todolistmodule.h"

ToDoListModule::ToDoListModule(QWidget *parent) : Module(parent)
{
    _ajoutFen = new ToDoListAjout;
    initButton();
    initLayout();

}

void ToDoListModule::initButton(){
   _newBtn = new QPushButton("Nouveau",this);
    QObject::connect(_newBtn,SIGNAL(clicked(bool)),this,SLOT(openAjout()));

    //_supprBtn = new QPushButton("Supprimer",this);
}

void ToDoListModule::openAjout(){
    _ajoutFen->show();

}

void ToDoListModule::initLayout(){

}
