#ifndef ABSTRACTMESUREUNITE_H
#define ABSTRACTMESUREUNITE_H

#include <iostream>
#include <cmath>

class AbstractMesureUnite{
protected:
    double value;
public:
    AbstractMesureUnite();
    AbstractMesureUnite(const AbstractMesureUnite&);
    ~AbstractMesureUnite();

};

#endif // ABSTRACTMESUREUNITE_H
