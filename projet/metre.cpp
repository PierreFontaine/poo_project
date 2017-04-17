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
    switch (_t) {
      case HEURE:{
        flux << getValue() << "m/h" << endl;
      }
      case MINUTE:{
        flux << getValue() << "m/m" << endl;
      }
      case SECONDE:{
        flux << getValue() << "m/s" << endl;
      }
    }

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
    switch (_t) {
      case HEURE:{
        return (getParH() / 100);
      }
      case MINUTE:{
        return (getParM() / 100);
      }
      case SECONDE:{
        return (getParS() / 100);
      }
    }
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
    switch (_t) {
      case HEURE:{
        return (getParH());
      }
      case MINUTE:{
        return (getParM());
      }
      case SECONDE:{
        return (getParS());
      }
    }
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

double Metre::getMilesValue(subunit)const{;
    switch (_t) {
      case HEURE:{
        return (getParH() / 1609.344);
      }
      case MINUTE:{
        return (getParM() / 1609.344);
      }
      case SECONDE:{
        return (getParS() / 1609.344);
      }
    }
}
