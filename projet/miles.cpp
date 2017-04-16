#include "miles.h"

Miles::Miles():Vitesse(){
    setValue(0.0);
}

Miles::Miles(double v):Vitesse(v){

}

void Miles::afficher(ostream &flux)const{
    flux << getValue() << "M" << endl;
}
