#include "actumodule.h"

ActuModule::ActuModule(QWidget *parent) : Module(parent){
    _data = new ActuData();
    _data->requete();
    connect(_data,SIGNAL(headLines()),this,SLOT(afficheList()));
}

void ActuModule::afficheList(){
    List<string> *l = _data->getList();
    int length = l->getLength();

    for(int i = 1;i <= length;i++){
        std::cerr<<l->getElemAtPos(i);
    }
}
