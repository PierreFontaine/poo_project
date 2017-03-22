#include "actumodule.h"

ActuModule::ActuModule(QWidget *parent) : Module(parent){
    _data = new ActuData();
    _data->requete();
}
