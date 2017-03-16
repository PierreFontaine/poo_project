#include "module.h"

//constructeur par defaut
Module::Module(QWidget *parent, double h, double w) : QWidget(parent)
{
    this->setFixedSize(w,h);
    _height = h;
    _width = w;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : Gerer la hauteur du module
 remarque:
 precond :
 postcond:
 ©2017
 */
void Module::setHeight(const double& h){
    _height = h;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : gerer la largeur du module
 remarque:
 precond :
 postcond:
 ©2017
 */
void Module::setWidth(const double& w){
    _width = w;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : recuperer la hauteur
 remarque:
 precond :
 postcond:
 ©2017
 */
double Module::getHeight()const{
    return _height;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : recuperer la largeur
 remarque:
 precond :
 postcond:
 ©2017
 */
double Module::getWidth()const{
    return _width;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : etablir le titre du module
 remarque:
 precond :
 postcond:
 ©2017
 */
void Module::setTitle(const QString& s){
    //title = s;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : recuperer le titre du module
 remarque:
 precond :
 postcond:
 ©2017
 */
QString Module::getTitle()const{
    //return title;
}
