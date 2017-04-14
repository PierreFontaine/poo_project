#include "abstractmesureunite.h"

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : constructeur par défaut
 remarque:
 precond :
 postcond:
 ©2017
 */
AbstractMesureUnite::AbstractMesureUnite(){
  _value = 0.0;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : constructeur en connaissant la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */
AbstractMesureUnite::AbstractMesureUnite(const AbstractMesureUnite &u){
  _value = u._value;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : destructeur
 remarque:
 precond :
 postcond:
 ©2017
 */
AbstractMesureUnite::~AbstractMesureUnite(){

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : donner une valeur
 remarque:
 precond :
 postcond:
 ©2017
 */
void AbstractMesureUnite::setValue(double v){
  _value = v;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : recup la valeur
 remarque:
 precond :
 postcond:
 ©2017
 */
double AbstractMesureUnite::getValue()const{
  return _value;
}
