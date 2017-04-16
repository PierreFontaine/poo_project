#ifndef KELVIN_H
#define KELVIN_H

#include "temperature.h"

using namespace std;

class Kelvin : public Temperature{
  public:
    Kelvin();
    Kelvin(double);
    void afficher(ostream &flux)const;
    double getCelsius()const;
    double getFahrenheit()const;
    double getKelvin()const;
};

#endif // KELVIN_H
