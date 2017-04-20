#ifndef TODOLISTDATA_H
#define TODOLISTDATA_H

#include <iostream>
#include <QDate>
#include <QWidget>
#include <QObject>
#include <QFile>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QDataStream>

#include "module.h"
#include "todolistdata.h"
#include "list.h"

//Type de structure enregistré dans le fichier
struct data{
  QString titre;
  QString note;
  QString heure;
  QString date;
};

class ToDoListData : public QObject{
    Q_OBJECT
protected:
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
