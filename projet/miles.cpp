#include "miles.h"

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : instance d'une vitesse en miles sans connaitre la valeur
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
    switch (_t) {
      case HEURE:{
        flux << getValue() << "mp/h" << endl;
        break;
      }
      case MINUTE:{
        flux << getValue() << "mp/m" << endl;
        break;
      }
      case SECONDE:{
        flux << getValue() << "mp/s" << endl;
        break;
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

double Miles::getKilometreValue(subunit)const{
    switch (_t) {
      case HEURE:{
        return (getParH() * 1.609344);
        break;
      }
      case MINUTE:{
        return (getParM() * 1.609344);
        break;
      }
      case SECONDE:{
        return (getParS() * 1.609344);
        break;
      }
    }
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
    switch (_t) {
      case HEURE:{
        return (getParH() * 1609.344);
        break;
      }
      case MINUTE:{
        return (getParM() * 1609.344);
        break;
      }
      case SECONDE:{
        return (getParS()) * 1609.344;
        break;
      }
    }

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
    switch (_t) {
      case HEURE:{
        return (getParH());
        break;
      }
      case MINUTE:{
        return (getParM());
        break;
      }
      case SECONDE:{
        return (getParS());
        break;
      }
    }
}
