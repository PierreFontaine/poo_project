#include "vitesse.h"

Vitesse::Vitesse():AbstractMesureUnite(){

}

Vitesse::Vitesse(double v,subunit t):AbstractMesureUnite(v){
 _t = t;
}

subunit Vitesse::getUnit()const{
    return(_t);
}
