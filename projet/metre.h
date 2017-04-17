#ifndef METRE_H
#define METRE_H

#include "vitesse.h"

using namespace std;

class Metre : public Vitesse
{
public:
    Metre();
    Metre(double,subunit);
    void afficher(ostream &flux) const;
    double getKilometreValue(subunit)const;
    double getMetreValue(subunit)const;
    double getMilesValue(subunit)const;
};

#endif // METRE_H
