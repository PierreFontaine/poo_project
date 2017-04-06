#ifndef FLUXRSS_H
#define FLUXRSS_H

#include "ItemRss.h"
#include "list.h"
#include <QtXml>
#include <QXmlStreamReader>

class FluxRss:public QXmlStreamReader{
protected:
    FluxRss *root;
    FluxRss *channel;
    QString mainTitle;
    QString mainDescription;
    QString mainCopyright;
    QString mainUrl;
    QString mainPubDate;
    List<QXmlStreamReader> item;

    void fetchData();
public:
  FluxRss();
  FluxRss(QByteArray);
  FluxRss(const FluxRss&);
  ~FluxRss();
};

#endif // FLUXRSS_H
