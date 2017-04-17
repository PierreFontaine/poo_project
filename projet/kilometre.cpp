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
  switch (_t) {
    case HEURE:{
      flux << getValue() << "Km/h" << endl;
      break;
    }
    case MINUTE:{
      flux << getValue() << "Km/m" << endl;
      break;
    }
    case SECONDE:{
      flux << getValue() << "Km/s" << endl;
      break;
    }
  }

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

double Kilometre::getKilometreValue(subunit s)const{
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
 but     : conv en m
 remarque:
 precond :
 postcond:
 ©2017
 */

double Kilometre::getMetreValue(subunit s)const{
  switch (s) {
    case HEURE:{
      return (getParH() * 1000);
      break;
    }
    case MINUTE:{
      return (getParM() * 1000);
      break;
    }
    case SECONDE:{
      return (getParS() * 1000);
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

double Kilometre::getMilesValue(subunit s)const{
  switch (s) {
    case HEURE:{
      return (getParH() / 1.609344);
      break;
    }
    case MINUTE:{
      return (getParM() / 1.609344);
      break;
    }
    case SECONDE:{
      return (getParS() / 1.609344);
      break;
    }
  }
}
