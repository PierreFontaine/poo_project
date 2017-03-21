#ifndef ACTUDATA_H
#define ACTUDATA_H

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

public:
    explicit ActuData(QObject *parent = 0);

signals:

public slots:
};

#endif // ACTUDATA_H
