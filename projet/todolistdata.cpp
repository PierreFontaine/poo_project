#include "todolistdata.h"

ToDoListData::ToDoListData(QWidget *parent) : QWidget(parent)
{

}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : getter titre
 remarque:
 precond :
 postcond:
 ©2017
 */

QString ToDoListData::getTitre()const{
    return _titre;
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : getter objectif
 remarque:
 precond :
 postcond:
 ©2017
 */

QString ToDoListData::getObjectif()const{
    return _objectif;
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : getter date
 remarque:
 precond :
 postcond:
 ©2017
 */

QDate ToDoListData::getDate()const{
    return _date;
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : setter titre
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListData::setTitre(QString t){
    _titre = t;
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : setter objectif
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListData::setObjectif(QString o){
    _objectif = o;
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : setter date
 remarque:
 precond :
 postcond:
 ©2017
 */

void ToDoListData::setDate(QDate d){
    _date = d;
}
