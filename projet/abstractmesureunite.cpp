#include "abstractmesureunite.h"

AbstractMesureUnite::AbstractMesureUnite(){

}

AbstractMesureUnite::AbstractMesureUnite(const AbstractMesureUnite &){

}

AbstractMesureUnite::~AbstractMesureUnite(){

}

void AbstractMesureUnite::setValue(double v){
  _value = v;
}

double AbstractMesureUnite::getValue()const{
  return _value;
}
