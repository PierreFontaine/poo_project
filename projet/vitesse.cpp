#include "vitesse.h"

Vitesse::Vitesse():AbstractMesureUnite(){

}

Vitesse::Vitesse(double v,subunit t):AbstractMesureUnite(v){
 _t = t;
}
