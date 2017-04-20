#include "todolistdata.h"

ToDoListData::ToDoListData(QObject *parent) : QObject(parent){

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

QString ToDoListData::getNote()const{
    return _note;
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

QString ToDoListData::getDate()const{
    return _date;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : getter heure
 remarque:
 precond :
 postcond:
 ©2017
 */
QString ToDoListData::getHeure()const{
  return _heure;
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

void ToDoListData::setNote(QString o){
    _note = o;
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

void ToDoListData::setDate(QString d){
    _date = d;
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

void ToDoListData::ajoutTDL(QString titre,QString note,QString heure,QString date){
    QFile data("./dashboard/TDLdata.txt");
    if(data.open(QIODevice::WriteOnly | QIODevice::Text)){
        _toSave.titre = titre;
        _toSave.note = note;
        _toSave.heure = heure;
        _toSave.date = date;
        data.write(reinterpret_cast<char*>(&_toSave),sizeof(_toSave));
    }else{
        QMessageBox::critical(NULL,"Erreur","Impossible d'écrire dans TDLdata");
    }
    data.close();
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : lecture de toute les entrées du fichier
 remarque:
 precond :
 postcond:
 ©2017
 */
void ToDoListData::readTDL(){
  QByteArray Data;
  QFile f("./dashboard/TDLdata.txt");
  if (f.open(QIODevice::ReadOnly)) {
    Data = f.readAll();
    f.close();
  }
  data *dataPt = reinterpret_cast<data*>(Data.data());
  qDebug()<<dataPt[0].date;
}
