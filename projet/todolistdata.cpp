#include "todolistdata.h"

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : overload de l'op flux entrant pour QDataStream en utilisant une donnée de type data
 remarque:
 precond :
 postcond:
 ©2017
*/
QDataStream &operator << (QDataStream &stream, const data &a){
    stream << a.titre << a.note << a.heure << a.date;
    return stream;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : overload de l'op flux sortant pour QDataStream en utilisant une donnée de type data
 remarque:
 precond :
 postcond:
 ©2017
*/
QDataStream &operator >> (QDataStream &stream, data &a){
    stream >> a.titre;
    stream >> a.note;
    stream >> a.heure;
    stream >> a.date;

    return stream;
}

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
    QFile file("./dashboard/TDLdata.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        data tmp;

        tmp.titre = titre;
        tmp.note = note;
        tmp.heure = heure;
        tmp.date = date;

        QDataStream stream(&file);
        stream << tmp;
    }else{
        QMessageBox::critical(NULL,"Erreur","Impossible d'écrire dans TDLdata");
    }
    file.close();
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
  QByteArray tmp;
  data *dataTmp;
  QFile f("./dashboard/TDLdata.txt");
  if (f.open(QIODevice::ReadOnly | QIODevice::Text)) {

  }
}
