#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

#include "temperature.h"

class Fahrenheit : public Temperature{
public:
  Fahrenheit();
  Fahrenheit(double);
  void afficher(ostream &flux)const;
  double getCelsius()const;
  double getFahrenheit()const;
  double getKelvin()const;
};

#endif // FAHRENHEIT_H
