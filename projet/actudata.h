#ifndef ACTUDATA_H
#define ACTUDATA_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QObject>
#include <QUrl>
#include <QtXml>
#include <QXmlStreamReader>

class ActuData : public QObject
{
    Q_OBJECT
protected:
    QUrl *_urlRSS;
    QXmlStreamReader *xmlDoc;
    QDomElement *eltDoc;

    void parseXML();

public:
    explicit ActuData(QObject *parent = 0);
    void requete();

signals:

public slots:
    void storeReplyInObj(QNetworkReply*);
};

#endif // ACTUDATA_H
