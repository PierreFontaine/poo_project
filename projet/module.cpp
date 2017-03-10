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

}

//setter de la largeur du module
void Module::setWidth(const double& w){

}

//getter de la hauteur du module
double Module::getHeight()const{

}

//getter de la largeur du module
double Module::getWidth()const{

}

//setter du titre du module
void Module::setTitle(const QString& s){

}

//getter du titre du module
QString Module::getTitle()const{

}
