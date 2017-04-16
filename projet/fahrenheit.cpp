#include "fahrenheit.h"

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : instance d'une temperature en fahrenheit sans connaitre la valeur
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
 remarque: Init de la mesure en connaissant la valeur
 precond :
 postcond:
 ©2017
 */
Fahrenheit::Fahrenheit(double v):Temperature(v){

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : affichage de la mesure avec le bon typage d'unité ici "F°"
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
    return ((getValue()*1.8)+32.0);
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
    return (getCelsius()+273.15);
}
