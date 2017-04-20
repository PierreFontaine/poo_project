#include "todolistmodule.h"

ToDoListModule::ToDoListModule(QWidget *parent) : Module(parent){
    _ajoutFen = new ToDoListAjout;
    initCalendar();
    initLayout();
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : Création calendrier
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListModule::initCalendar(){
    _calendar = new QCalendarWidget;
    _calendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
    _calendar->setMinimumDate(QDate::currentDate());
    QObject::connect(_calendar,SIGNAL(activated(QDate)),this,SLOT(openAjout()));
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : Ouverture fenetre ajout
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListModule::openAjout(){
    _ajoutFen->show();
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

void ToDoListModule::initLayout(){
    _layoutCalendar = new QVBoxLayout;
    _layoutPrincipal = new QVBoxLayout;
    _layoutCalendar->addWidget(_calendar);
    _layoutPrincipal->addLayout(_layoutCalendar);
    setLayout(_layoutPrincipal);
}
