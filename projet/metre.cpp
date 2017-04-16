#include "metre.h"

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : instance d'une vitesse en metre sans connaitre la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */

Metre::Metre():Vitesse(){
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

Metre::Metre(double v,subunit t):Vitesse(v,t){

}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : affichage de la mesure avec le bon typage d'unité ici "m"
 remarque:
 precond :
 postcond:
 ©2017
 */

void Metre::afficher(ostream &flux)const{
    flux << getValue() << "m" << endl;

}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : conv en km
 remarque:
 precond :
 postcond:
 ©2017
 */

double Metre::getKilometreValue(subunit)const{
    return (getValue() / 100);
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : ici on est deja en m
 remarque:
 precond :
 postcond:
 ©2017
 */

double Metre::getMetreValue(subunit)const{
    return (getValue());
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : conv en mp
 remarque:
 precond :
 postcond:
 ©2017
 */

double Metre::getMilesValue(subunit)const{
    return (getValue() / 1609.344);
}
