#ifndef VITESSE_H
#define VITESSE_H

#include "abstractmesureunite.h"

class Vitesse : public AbstractMesureUnite{
public:
    enum subunit {
      HEURE,
      MINUTE,
      SECONDE
    };

    Vitesse();
    Vitesse(double);
    virtual void afficher(ostream &flux) const = 0;
    virtual double getKilometreValue(subunit) const = 0;
    virtual double getMetreValue(subunit) const = 0;
    virtual double getMilesValue(subunit) const = 0;
};

#endif // VITESSE_H
