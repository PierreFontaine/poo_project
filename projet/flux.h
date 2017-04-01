#ifndef FLUX_H
#define FLUX_H

#include <QString>
#include <QXmlStreamReader>
#include "list.h"

class Flux:public QXmlStreamReader{
protected:
    List<QString> *_author;
    List<QString> *_category;
    List<QString> *_generator;
    List<QString> *_link;
    List<QString> *_title;

    void initLists();
public:
    Flux();
    virtual ~Flux();
    List<QString> * getAuthor() const;
    List<QString> * getCategory() const;
    List<QString> * getGenerator() const;
    List<QString> * getLink() const;
    List<QString> * getTitle() const;
};

#endif // FLUX_H
