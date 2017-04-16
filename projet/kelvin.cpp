#include "kelvin.h"

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : instance d'une temperature en kelvin sans connaitre la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */

Kelvin::Kelvin():Temperature(){
    setValue(0.0);
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : Init de la mesure en connaissant la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */

Kelvin::Kelvin(double v):Temperature(v){

}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : affichage de la mesure avec le bon typage d'unité ici "K"
 remarque:
 precond :
 postcond:
 ©2017
 */

void Kelvin::afficher(ostream &flux) const{
    flux << getValue() << "K" << endl;
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : conv en celsius
 remarque:
 precond :
 postcond:
 ©2017
 */

double Kelvin::getCelsius()const{
    return(getValue()-273.15);

}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : ici on est deja en Kelvin
 remarque:
 precond :
 postcond:
 ©2017
 */

double Kelvin::getKelvin()const{
    return(getValue());
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : conversion en Fahrenheit
 remarque:
 precond :
 postcond:
 ©2017
 */

double Kelvin::getFahrenheit()const{
    return ((getCelsius()-32.0)/1.8);

}
