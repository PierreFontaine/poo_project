#ifndef FLUX_H
#define FLUX_H

#include <QString>

class Flux{
protected:
    QString _author;
    QString _category;
    QString _generator;
    QString _link;
    QString _title;
public:
    Flux();
    virtual ~Flux();
    virtual QString getAuthor() const = 0;
    virtual QString getCategory() const = 0;
    virtual QString getGenerator() const = 0;
    virtual QString getLink() const = 0;
    virtual QString getTitle() const = 0;
};

#endif // FLUX_H
