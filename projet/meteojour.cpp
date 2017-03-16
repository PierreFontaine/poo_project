#include "meteojour.h"

MeteoJour::MeteoJour(MeteoData *data, QWidget *parent) : QWidget(parent),_data(data){
    QObject::connect(data,SIGNAL(dataChanged()),this,SLOT(majData()));
    initLabel();
    initLayout();
    setLayout(mainLayout);

}

void MeteoJour::initLayout(){
    mainLayout = new QHBoxLayout();

    leftLayout = new QVBoxLayout();


    rightLayout = new QVBoxLayout();
    rightLayout->addWidget(temp);
    rightLayout->addWidget(temp_min);
    rightLayout->addWidget(temp_max);
    rightLayout->addWidget(pressure);
    rightLayout->addWidget(humidity);

    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);





}

void MeteoJour::initLabel(){
    temp = new QLabel(QString::number(_data->getTemp())+"C°",this);
    temp_min = new QLabel(QString::number(_data->getTempMin())+"C°",this);
    temp_max = new QLabel(QString::number(_data->getTempMax())+"C°",this);
    pressure = new QLabel(QString::number(_data->getPressure())+"Pa",this);
    humidity = new QLabel(QString::number(_data->getHumidity())+"%",this);

}

void MeteoJour::majData(){
    temp->setText(QString::number(_data->getTemp())+"C°");
    temp_min->setText(QString::number(_data->getTempMin())+"C°");
    temp_max->setText(QString::number(_data->getTempMax())+"C°");
    pressure->setText(QString::number(_data->getPressure())+"Pa");
    humidity->setText(QString::number(_data->getHumidity())+"%");
}
