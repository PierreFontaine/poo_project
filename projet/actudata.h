#ifndef ACTUDATA_H
#define ACTUDATA_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QObject>
#include <QUrl>
#include <QtXml>

class ActuData : public QObject
{
    Q_OBJECT
protected:
    QUrl *_urlRSS;
    QDomDocument *xmlDoc;
    QDomElement *eltDoc;

    void requete();

public:
    explicit ActuData(QObject *parent = 0);

signals:

public slots:
    void storeReplyInObj(QNetworkReply*);
};

#endif // ACTUDATA_H
