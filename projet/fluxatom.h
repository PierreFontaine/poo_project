#ifndef FLUXATOM_H
#define FLUXATOM_H

#include "flux.h"

class FluxAtom:public Flux{
protected:
  QString _feed;
  QString _rigths;
  QString _subtitle;
  QString _summary;
  QString _content;
  QString _id;
  QString _logo;
  QString _entry;
  QString _updated;
  QString _contributor;
  QString _published;
public:
  FluxAtom();
  ~FluxAtom();
  //INHERITED FROM FLUX.H
  QString getAuthor()const;
  QString getCategory()const;
  QString getGenerator()const;
  QString getLink()const;
  QString getTitle()const;
  //ATOM
  QString getFeed()const;
  QString getRigths()const;
  QString getSubtitle()const;
  QString getSummary()const;
  QString getContent()const;
  QString getId()const;
  QString getLogo()const;
  QString getEntry()const;
  QString getUpdated()const;
  QString getContributor()const;
  QString getPublished()const;

};

#endif // FLUXATOM_H
