#include "actumodule.h"

ActuModule::ActuModule(QWidget *parent) : Module(parent){
    actuLayout = new QVBoxLayout(this);
    _data = new ActuData();
    _data->requete();
    connect(_data,SIGNAL(headLines()),this,SLOT(afficheList()));
    setLayout(actuLayout);
}

void ActuModule::afficheList(){
    List<string> *l = _data->getList();
    int length = l->getLength();
    std::cerr<<"longueur de liste"<< length << std::endl;
    _tab = new QLabel*[length];
    for(int i = 1;i <= length;i++){
        std::cerr<<"i = " << i << " " << l->getElemAtPos(i)<<std::endl;
        _tab[i-1] = new QLabel(QString::fromStdString(l->getElemAtPos(i)));
        actuLayout->addWidget(_tab[i-1]);
    }
}
