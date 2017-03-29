#ifndef FLUXRSS_H
#define FLUXRSS_H

#include "flux.h"

class FluxRss:public Flux{
protected:
  QString _channel;
  QString _copyright;
  QString _description;
  QString _guid;
  QString _image;
  QString _item;
  QString _lastBuildDate;
  QString _managingEditor;
  QString _pubDate;
public:
  FluxRss();
  ~FluxRss();
  QString getAuthor()const;
  QString getCategory()const;
  QString getGenerator()const;
  QString getLink()const;
  QString getTitle()const;
};

#endif // FLUXRSS_H
