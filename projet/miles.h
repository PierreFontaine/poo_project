#ifndef MILES_H
#define MILES_H

#include "vitesse.h"

using namespace std;

class Miles : public Vitesse{
public:
    Miles();
    Miles(double);
    void afficher(ostream &flux) const;
    double getMiles()const;
    double getKilometres()const;
    double getNoeud()const;
};

#endif // MILES_H
