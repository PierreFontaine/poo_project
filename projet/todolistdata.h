#ifndef TODOLISTDATA_H
#define TODOLISTDATA_H

#include <iostream>
#include <QDate>
#include <QWidget>
<<<<<<< HEAD
#include <QFile>
#include <QTextStream>
=======
#include <QObject>
#include <QFile>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
>>>>>>> 4c1fd46757dd9b4b7047b05e802762ad95a53b03

#include "module.h"
#include "todolistdata.h"
#include "list.h"

class ToDoListData : public QObject{
    Q_OBJECT
protected:
    //Type de structure enregistré dans le fichier
    struct data{
      QString titre;
      QString note;
      QString heure;
      QString date;
    };

    QString _titre;
    QString _note;
    QString _date;
    QString _heure;

    data _toSave;
    list<data> _allData;


public:
    ToDoListData(QObject *parent = 0);

    QString getTitre()const;
    QString getNote()const;
    QString getDate()const;
    QString getHeure()const;

    void setTitre(QString);
    void setNote(QString);
    void setDate(QString);
    void setHeure(QString);

    void ajoutTDL(QString titre,QString note,QString heure,QString date);


signals:

public slots:

  void readTDL();
};

#endif // TODOLISTDATA_H
