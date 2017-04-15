#include "fahrenheit.h"

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     :
 remarque:
 precond :
 postcond:
 ©2017
 */
Fahrenheit::Fahrenheit():Temperature(){
  setValue(0.0);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     :
 remarque:
 precond :
 postcond:
 ©2017
 */
Fahrenheit::Fahrenheit(double v):Temperature(v){

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     :
 remarque:
 precond :
 postcond:
 ©2017
 */
void Fahrenheit::afficher(ostream &flux)const{
  flux << getValue() << "F°" << endl;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : conversion en Celsius
 remarque: conv vers celsius
 precond :
 postcond:
 ©2017
 */
double Fahrenheit::getCelsius()const{
  return ((getValue()-32.0)/1.8);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : ici on est deja en Fahrenheit
 remarque:
 precond :
 postcond:
 ©2017
 */
double Fahrenheit::getFahrenheit()const{
  return (getValue());
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : conv vers kelvin
 remarque:
 precond :
 postcond:
 ©2017
 */
double Fahrenheit::getKelvin()const{
  return (getCelsius()-273.15);
}
