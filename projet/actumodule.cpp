#include "actumodule.h"

ActuModule::ActuModule(QWidget *parent) : Module(parent){
    actuScroll = new QScrollArea(this);
    container = new QWidget();
    container->setGeometry(20,20,400,2500);
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
    List<string> *h = _data->getHyperlink();
    int length = l->getLength();
    std::cerr<<"longueur de liste"<< length << std::endl;
    _tabDesc = new QLabel*[length];
    _tabLink = new QLabel*[length];
    for(int i = 1;i <= length;i++){
        std::cerr<<"i = " << i << " " << l->getElemAtPos(i)<<std::endl;
        _tabDesc[i-1] = new QLabel(QString::fromStdString(l->getElemAtPos(i)));
        _tabDesc[i-1]->setWordWrap(true);
        _tabLink[i-1] = new QLabel(QString::fromStdString(h->getElemAtPos(i)));
        _tabLink[i-1]->setWordWrap(true);
        _tabLink[i-1]->setTextFormat(Qt::RichText);
        _tabLink[i-1]->setTextInteractionFlags(Qt::TextBrowserInteraction);
        _tabLink[i-1]->setOpenExternalLinks(true);
        actuLayout->addWidget(_tabDesc[i-1]);
        actuLayout->addWidget(_tabLink[i-1]);
    }
}
