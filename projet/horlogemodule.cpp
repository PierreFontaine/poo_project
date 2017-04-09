#include "horlogemodule.h"

HorlogeModule::HorlogeModule(QWidget *parent) : Module(parent)
{
    _timer = new QTimer(this);
    connect(_timer, SIGNAL(timeout()), this, SLOT(initialisation()));
    _timer->start(1000);
    initHorloge();
    initLayout();

}

void HorlogeModule::initHorloge(){

    _date = new QLabel(QDate::currentDate().toString("dddd dd MMMM yyyy"),this);
    _date->setFont(QFont("URW Chancery L",30));

    _heure = new QLabel(QTime::currentTime().toString("hh : mm : ss"),this);
    _heure->setFont(QFont("URW Chancery L",30));
}

void HorlogeModule::initLayout(){

    _layout = new QVBoxLayout;

    _layout->addWidget(_date);
    _layout->addWidget(_heure);

    setLayout(_layout);
}
