#include "vitesse.h"

Vitesse::Vitesse():AbstractMesureUnite(){

}

Vitesse::Vitesse(double v,subunit t):AbstractMesureUnite(v){
 _t = t;
}

subunit Vitesse::getUnit()const{
    return(_t);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : retourne la mesure actuel en d/s
 remarque:
 precond :
 postcond:
 ©2017
 */
double Vitesse::getParS()const{
  switch (_t) {
    case HEURE:{
      return (_value/3600.0);
      break;
    }
    case MINUTE:{
      return (_value/60.0);
      break;
    }
    case SECONDE:{
      return (_value);
      break;
    }
  }
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : retourne la mesure actuel en d/h
 remarque:
 precond :
 postcond:
 ©2017
 */
double Vitesse::getParH()const{
  switch (_t) {
    case HEURE:{
      return (_value);
      break;
    }
    case MINUTE:{
      return (_value*60.0);
      break;
    }
    case SECONDE:{
      return (_value*3600.0);
      break;
    }
  }
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : retourne la mesure actuel en d/m
 remarque:
 precond :
 postcond:
 ©2017
 */
double Vitesse::getParM()const{
  switch (_t) {
    case HEURE:{
      return (_value/60.0);
      break;
    }
    case MINUTE:{
      return (_value);
      break;
    }
    case SECONDE:{
      return (_value*60.0);
      break;
    }
  }
}
