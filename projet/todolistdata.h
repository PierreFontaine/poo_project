#ifndef TODOLISTDATA_H
#define TODOLISTDATA_H

#include <iostream>
#include <QDate>
#include <QWidget>
#include <QFile>
#include <QTextStream>

#include "module.h"
#include "todolistdata.h"

class ToDoListData : public QWidget
{
    Q_OBJECT
protected:
    QString _titre;
    QString _objectif;
    QDate _date;

public:
    explicit ToDoListData(QWidget *parent = 0);

    QString getTitre()const;
    QString getObjectif()const;
    QDate getDate()const;

    void setTitre(QString);
    void setObjectif(QString);
    void setDate(QDate);

signals:

public slots:
};

#endif // TODOLISTDATA_H
