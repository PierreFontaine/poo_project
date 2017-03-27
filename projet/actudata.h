#ifndef ACTUDATA_H
#define ACTUDATA_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QObject>
#include <QUrl>
#include <QtXml>
#include <QXmlStreamReader>
#include "list.h"
#include <string>
#include <iostream>

class ActuData : public QObject
{
    Q_OBJECT
protected:
    QUrl *_urlRSS;
    QXmlStreamReader *xmlDoc;
    QDomElement *eltDoc;
    List<string> *_l;

    void parseXML();

public:
    explicit ActuData(QObject *parent = 0);
    void requete();
    List<string> *getList()const;

signals:
    void headLines();
public slots:
    void storeReplyInObj(QNetworkReply*);
};

#endif // ACTUDATA_H
