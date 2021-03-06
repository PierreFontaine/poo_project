#include "celsius.h"

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : instance d'une temperature en celsius sans connaitre la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */
Celsius::Celsius():Temperature(){
  setValue(0.0);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : Init de la mesure en connaissant la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */
Celsius::Celsius(double v):Temperature(v){

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : affichage de la mesure avec le bon typage d'unité ici "C°"
 remarque:
 precond :
 postcond:
 ©2017
 */
void Celsius::afficher(ostream &flux)const{
  flux << getValue() << "C°" << endl;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : conversion en Celsius
 remarque: Ici on est deja en celsius
 precond :
 postcond:
 ©2017
 */
double Celsius::getCelsius()const{
  return (getValue());
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : conversion en Fahrenheit
 remarque:
 precond :
 postcond:
 ©2017
 */
double Celsius::getFahrenheit()const{
  return ((getValue()*1.8)+32.0);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : conversion en Kelvin
 remarque:
 precond :
 postcond:
 ©2017
 */
double Celsius::getKelvin()const{
  return (getValue()+273.15);
}
