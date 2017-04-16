#include "miles.h"

Miles::Miles():Vitesse(){
    setValue(0.0);
}

Miles::Miles(double v,subunit t):Vitesse(v,t){

}

void Miles::afficher(ostream &flux)const{
    flux << getValue() << "Mp" << endl;

}

double Miles::getKilometreValue(subunit a)const{
    return (getMilesValue(a) * 1.609344);
}

double Miles::getMetreValue(subunit a)const{
    return (getMilesValue(a) * 1609.344);
}

double Miles::getMilesValue(subunit a)const{
    return (getMilesValue(a));
}
