#ifndef FLUXATOM_H
#define FLUXATOM_H

#include "flux.h"

class FluxAtom:public Flux{
protected:
  List<QString> *_feed;
  List<QString> *_rigths;
  List<QString> *_subtitle;
  List<QString> *_summary;
  List<QString> *_content;
  List<QString> *_id;
  List<QString> *_logo;
  List<QString> *_entry;
  List<QString> *_updated;
  List<QString> *_contributor;
  List<QString> *_published;

  void initLists();
public:
  FluxAtom();
  ~FluxAtom();
  //INHERITED FROM FLUX.H
  List<QString> getAuthor()const;
  List<QString> getCategory()const;
  List<QString> getGenerator()const;
  List<QString> getLink()const;
  List<QString> getTitle()const;
  //ATOM
  List<QString> getFeed()const;
  List<QString> getRigths()const;
  List<QString> getSubtitle()const;
  List<QString> getSummary()const;
  List<QString> getContent()const;
  List<QString> getId()const;
  List<QString> getLogo()const;
  List<QString> getEntry()const;
  List<QString> getUpdated()const;
  List<QString> getContributor()const;
  List<QString> getPublished()const;

};

#endif // FLUXATOM_H
