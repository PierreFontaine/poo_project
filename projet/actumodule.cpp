#include "actumodule.h"

ActuModule::ActuModule(QWidget *parent) : Module(parent){
    actuScroll = new QScrollArea(this);
    container = new QWidget();
    container->setGeometry(20,20,400,1000);
    actuLayout = new QVBoxLayout();
    _data = new ActuData();
    container->setLayout(actuLayout);
    actuScroll->setWidget(container);
    actuScroll->viewport()->setBackgroundRole(QPalette::Dark);
    actuScroll->viewport()->setAutoFillBackground(true);
    actuScroll->setWindowTitle(QObject::tr("News"));
    actuScroll->show();
    _data->requete();
    connect(_data,SIGNAL(headLines()),this,SLOT(afficheList()));

}

void ActuModule::afficheList(){
    List<string> *l = _data->getList();
    int length = l->getLength();
    std::cerr<<"longueur de liste"<< length << std::endl;
    _tab = new QLabel*[length];
    for(int i = 1;i <= length-10;i++){
        std::cerr<<"i = " << i << " " << l->getElemAtPos(i)<<std::endl;
        _tab[i-1] = new QLabel(QString::fromStdString(l->getElemAtPos(i)),container);
        _tab[i-1]->setWordWrap(true);
        actuLayout->addWidget(_tab[i-1]);
    }
}
