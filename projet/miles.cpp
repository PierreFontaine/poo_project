#include "miles.h"

Miles::Miles():Vitesse(){
    setValue(0.0);
}

Miles::Miles(double v,subunit t):Vitesse(v,t){

}

void Miles::afficher(ostream &flux)const{
    flux << getValue() << "M" << endl;
}
