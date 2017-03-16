#include "module.h"

//constructeur par defaut
Module::Module(QWidget *parent, double h, double w) : QWidget(parent)
{
    this->setFixedSize(w,h);
    _height = h;
    _width = w;
}

//setter de la hauteur du module
void Module::setHeight(const double& h){
    _height = h;
}

//setter de la largeur du module
void Module::setWidth(const double& w){
    _width = w;
}

//getter de la hauteur du module
double Module::getHeight()const{
    return _height;
}

//getter de la largeur du module
double Module::getWidth()const{
    return _width;
}

//setter du titre du module
void Module::setTitle(const QString& s){
    //title = s;
}

//getter du titre du module
QString Module::getTitle()const{
    //return title;
}
