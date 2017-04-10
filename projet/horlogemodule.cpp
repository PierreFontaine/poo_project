#include "horlogemodule.h"

HorlogeModule::HorlogeModule(QWidget *parent) : Module(parent)
{
    _timer = new QTimer(this);
    initHorloge();
    initLayout();
    connect(_timer, SIGNAL(timeout()), this, SLOT(update()));
    _timer->start(1000);

}

void HorlogeModule::initHorloge(){


    _timer = new QTimer;
    _timer->start(1000);

    _labelDate = new QLabel;
    _date = new QDate;
    _labelDate->setText(QString(_date->toString()));
    _labelDate->setFont(QFont("URW Chancery L",30));

    _labelTime = new QLabel;
    _heure = new QTime;
    //_heure->start();
    _labelTime->setText(QString(_heure->toString()));
    _labelTime->setFont(QFont("URW Chancery L",30));
    QObject::connect(_timer, SIGNAL(timeout()), this, SLOT(updateDate()));

}

void HorlogeModule::updateDate(){

    QDate dateTemp = _date->currentDate();
    _labelDate->setText(QString(dateTemp.toString("dddd dd MMMM yyyy")));

    QTime heureTemp = _heure->currentTime();
    _labelTime->setText(QString(heureTemp.toString()));

}

void HorlogeModule::initLayout(){

    _layout = new QVBoxLayout;

    _layout->addWidget(_labelDate);
    _layout->addWidget(_labelTime);
    //_layout->a(_heure);

    setLayout(_layout);
}
