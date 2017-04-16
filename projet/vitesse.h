#ifndef VITESSE_H
#define VITESSE_H

#include "abstractmesureunite.h"

enum subunit {
  HEURE,
  MINUTE,
  SECONDE
};

class Vitesse : public AbstractMesureUnite{
protected:
  subunit _t;
public:
    Vitesse();
    Vitesse(double,subunit);
    virtual void afficher(ostream &flux) const = 0;
    virtual double getKilometreValue(subunit) const = 0;
    virtual double getMetreValue(subunit) const = 0;
    virtual double getMilesValue(subunit) const = 0;
    subunit getUnit()const;
};

#endif // VITESSE_H
