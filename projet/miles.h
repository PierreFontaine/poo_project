#ifndef MILES_H
#define MILES_H

#include "vitesse.h"

using namespace std;

class Miles : public Vitesse{
public:
    Miles();
    Miles(double,subunit);
    void afficher(ostream &flux) const;
    //double getKilometreValue(subunit)const;
    //double getMetreValue(subunit)const;
    //double getMilesValue(subunit)const;


};

#endif // MILES_H
