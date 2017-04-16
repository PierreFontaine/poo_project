#include "miles.h"

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : instance d'une temperature en miles sans connaitre la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */

Miles::Miles():Vitesse(){
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

Miles::Miles(double v,subunit t):Vitesse(v,t){

}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : affichage de la mesure avec le bon typage d'unité ici "Mp"
 remarque:
 precond :
 postcond:
 ©2017
 */

void Miles::afficher(ostream &flux)const{
    flux << getValue() << "Mp" << endl;

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

double Miles::getKilometreValue(subunit)const{
    return (getValue() * 1.609344);
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : conv en m
 remarque:
 precond :
 postcond:
 ©2017
 */

double Miles::getMetreValue(subunit)const{
    return (getValue() * 1609.344);
}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : ici on est deja en mp
 remarque:
 precond :
 postcond:
 ©2017
 */

double Miles::getMilesValue(subunit)const{
    return (getValue());
}
