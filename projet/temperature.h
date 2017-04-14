#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "abstractmesureunite.h"

class Temperature : public AbstractMesureUnite{
public:
  Temperature();
  virtual void afficher(ostream &flux) const = 0;
  virtual double getCelsius()const = 0;
  virtual double getFahrenheit()const = 0;
  virtual double getKelvin()const = 0;
};

#endif // TEMPERATURE_H
