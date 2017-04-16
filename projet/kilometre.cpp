#include "kilometre.h"

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : instance d'une vitesse en km sans connaitre la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */

Kilometre::Kilometre():Vitesse(){
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

Kilometre::Kilometre(double v,subunit t):Vitesse(v,t){

}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : affichage de la mesure avec le bon typage d'unité ici "Km"
 remarque:
 precond :
 postcond:
 ©2017
 */

void Kilometre::afficher(ostream &flux)const{
    flux << getValue() << "Km" << endl;

}

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : ici on est deja en km
 remarque:
 precond :
 postcond:
 ©2017
 */

double Kilometre::getKilometreValue(subunit)const{
    return (getValue());
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

double Kilometre::getMetreValue(subunit)const{
    return (getValue() * 100);
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

double Kilometre::getMilesValue(subunit)const{
    return (getValue() / 1.609344);
}
