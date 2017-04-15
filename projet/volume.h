#ifndef VOLUME_H
#define VOLUME_H

#include "abstractmesureunite.h"

class Volume : public AbstractMesureUnite{
public:
    Volume();
    virtual void afficher(ostream &flux) const = 0;
    virtual double getLitre()const = 0;
    virtual double getMetreCube()const = 0;
    virtual double getGallon()const = 0;
};

#endif // VOLUME_H
