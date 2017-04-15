#include "kelvin.h"

Kelvin::Kelvin():Temperature(){
    setValue(0.0);
}

Kelvin::Kelvin(double v):Temperature(v){

}

void Kelvin::afficher(ostream &flux) const{
    flux << getValue() << "K" << endl;
}

double Kelvin::getCelsius()const{
    return(getValue()+273.15);
}

double Kelvin::getKelvin()const{
    return(getValue());
}

double Kelvin::getFahrenheit()const{
    return ((getCelsius()*1.8)+32.0);
}
