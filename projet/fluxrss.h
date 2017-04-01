#ifndef FLUXRSS_H
#define FLUXRSS_H

#include "flux.h"

class FluxRss:public Flux{
protected:
  List<QString> *_channel;
  List<QString> *_copyright;
  List<QString> *_description;
  List<QString> *_guid;
  List<QString> *_image;
  List<QString> *_item;
  List<QString> *_lastBuildDate;
  List<QString> *_managingEditor;
  List<QString> *_pubDate;
  void initLists();
public:
  FluxRss();
  ~FluxRss();
  List<QString> getAuthor()const;
  List<QString> getCategory()const;
  List<QString> getGenerator()const;
  List<QString> getLink()const;
  List<QString> getTitle()const;
};

#endif // FLUXRSS_H
