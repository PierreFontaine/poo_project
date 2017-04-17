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
        break;
      }
      case MINUTE:{
        flux << getValue() << "m/m" << endl;
        break;
      }
      case SECONDE:{
        flux << getValue() << "m/s" << endl;
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

double Metre::getKilometreValue(subunit s)const{
    switch (s) {
      case HEURE:{
        return (getParH() / 100);
        break;
      }
      case MINUTE:{
        return (getParM() / 100);
        break;
      }
      case SECONDE:{
        return (getParS() / 100);
        break;
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

double Metre::getMetreValue(subunit s)const{
    switch (s) {
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

/*
 author  : Sallio Romane
 mail    : romane.sallio@gmail.com
 but     : conv en mp
 remarque:
 precond :
 postcond:
 ©2017
 */

double Metre::getMilesValue(subunit s)const{;
    switch (s) {
      case HEURE:{
        return (getParH() / 1609.344);
        break;
      }
      case MINUTE:{
        return (getParM() / 1609.344);
        break;
      }
      case SECONDE:{
        return (getParS() / 1609.344);
        break;
      }
    }
}
