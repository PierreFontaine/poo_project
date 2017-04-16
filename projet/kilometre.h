#ifndef KILOMETRE_H
#define KILOMETRE_H

#include "vitesse.h"

using namespace std;

class Kilometre : public Vitesse
{
public:
    Kilometre();
    Kilometre(double,subunit);
    void afficher(ostream &flux) const;
    double getKilometreValue(subunit)const;
    double getMetreValue(subunit)const;
    double getMilesValue(subunit)const;
};

#endif // KILOMETRE_H
