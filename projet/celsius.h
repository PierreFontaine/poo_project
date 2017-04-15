#ifndef CELSIUS_H
#define CELSIUS_H

#include "temperature.h"

using namespace std;

class Celsius : public Temperature{
public:
  Celsius();
  Celsius(double);
  void afficher(ostream &flux)const;
  double getCelsius()const;
  double getFahrenheit()const;
  double getKelvin()const;
};

#endif // CELSIUS_H
