#include "todolistmodule.h"

ToDoListModule::ToDoListModule(QWidget *parent) : Module(parent)
{
    ajoutFen = new ToDoListAjout;
    initButton();
}

void ToDoListModule::initButton(){
    boutonAjout = new QPushButton("Nouveau",this);
    QObject::connect(boutonAjout,SIGNAL(clicked(bool)),this,SLOT(openAjout()));
}

void ToDoListModule::openAjout(){
    ajoutFen->show();

}
