#include "meteojour.h"

MeteoJour::MeteoJour(int j,MeteoData *data, QWidget *parent) : QWidget(parent),_j(j),_data(data){
    QObject::connect(data,SIGNAL(dataChanged(int)),this,SLOT(majData(int)));
    initLabel();
    initLayout();
    setLayout(mainLayout);

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : Initialiser les layout pour chaques composantes de la météo a afficher
 remarque:
 precond :
 postcond:
 ©2017
 */
void MeteoJour::initLayout(){
    mainLayout = new QHBoxLayout();

    leftLayout = new QVBoxLayout();


    rightLayout = new QVBoxLayout();
    rightLayout->addWidget(ville);
    rightLayout->addWidget(temp);
    rightLayout->addWidget(temp_min);
    rightLayout->addWidget(temp_max);
    rightLayout->addWidget(pressure);
    rightLayout->addWidget(humidity);

    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : Initialiser chaques label
 remarque:
 precond :
 postcond:
 ©2017
 */
void MeteoJour::initLabel(){
    ville = new QLabel("Ville : "+_data->getVille());
    temp = new QLabel("temp moyenne : "+QString::number(_data->getTemp())+"C°",this);
    temp_min = new QLabel("temp min : "+QString::number(_data->getTempMin())+"C°",this);
    temp_max = new QLabel("temp max : "+QString::number(_data->getTempMax())+"C°",this);
    pressure = new QLabel("pression : "+QString::number(_data->getPressure())+"Pa",this);
    humidity = new QLabel("humidité : "+QString::number(_data->getHumidity())+"%",this);

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : (SLOT) Permet de mettre a jour les données depuis l'objet _data instance de MeteoData
 remarque: Connecté à _data
 precond :
 postcond:
 ©2017
 */
void MeteoJour::majData(int i){
    if(i == _j){
        temp->setText("temp moyenne : "+QString::number(_data->getTemp())+"C°");
        temp_min->setText("temp min : "+QString::number(_data->getTempMin())+"C°");
        temp_max->setText("temp max : "+QString::number(_data->getTempMax())+"C°");
        pressure->setText("pression : "+QString::number(_data->getPressure())+"Pa");
        humidity->setText("humidité : "+QString::number(_data->getHumidity())+"%");
    }

}
