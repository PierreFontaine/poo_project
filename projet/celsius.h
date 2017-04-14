#ifndef CELSIUS_H
#define CELSIUS_H

#include "temperature.h"

using namespace std;

class Celsius : public Temperature{
public:
  Celsius();
  void afficher(ostream &flux);
  double getCelsius();
  double getFahrenheit();
  double getKelvin();
};

#endif // CELSIUS_H
