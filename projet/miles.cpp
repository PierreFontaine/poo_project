#include "miles.h"

Miles::Miles():Vitesse(){
    setValue(0.0);
}

Miles::Miles(double v,subunit t):Vitesse(v,t){

}

void Miles::afficher(ostream &flux)const{
    flux << getValue() << "Mp" << endl;

}

/*double getKilometreValue(subunit)const{

}

double getMetreValue(subunit)const{

}

double getMilesValue(subunit)const{
    return (getMilesValue(subunit));
}*/
