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
    connectElt();
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
    _labelLyt = new QVBoxLayout();
    QLabel *titleLbl = new QLabel("ToDo List");
    _labelLyt->addWidget(titleLbl);

    _container->addLayout(_labelLyt);
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
    QObject::connect(_majBtn,SIGNAL(clicked(bool)),this,SLOT(displayEachToDo()));
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : afficher chaque ToDo
 remarque:
 precond :
 postcond:
 ©2017
*/
void ToDoListDisplay::displayEachToDo(){
    QList<struct dataToDo> tmp;
    clearLayout(_labelLyt,true);
    _labelLyt->update();
    tmp = _data->readTDL();
    qDebug()<<"on va afficher chaque ToDo";
    foreach(struct dataToDo a, tmp){
        QLabel *tmpLbl = new QLabel(a.titre);
        _labelLyt->addWidget(tmpLbl);
        qDebug() << a.date << ","
                 << a.heure << ","
                 << a.note << ","
                 << a.titre << ";";
    }
}

void ToDoListDisplay::clearLayout(QLayout* layout, bool deleteWidgets = true){
    while (QLayoutItem* item = layout->takeAt(0)){
        if (deleteWidgets){
            if (QWidget* widget = item->widget()){
                qDebug() << "suppression de widget";
               delete widget;
            }
        }
        if (QLayout* childLayout = item->layout()){
            clearLayout(childLayout, deleteWidgets);
        }
        delete item;
    }
}
