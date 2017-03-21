#include "meteojour.h"

MeteoJour::MeteoJour(int j,MeteoData *data, QWidget *parent) : QWidget(parent),_j(j),_data(data){
    QObject::connect(data,SIGNAL(dataChanged(int)),this,SLOT(majData(int)));
    paramFen = new MeteoParam();
    initButton();
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

    rightLayout = new QVBoxLayout();
    rightLayout->addWidget(ville);
    rightLayout->addWidget(temp);
    rightLayout->addWidget(temp_min);
    rightLayout->addWidget(temp_max);
    rightLayout->addWidget(pressure);
    rightLayout->addWidget(humidity);

    leftLayout = new QVBoxLayout();
    leftLayout->addWidget(img);
    leftLayout->addWidget(reload);
    leftLayout->addWidget(param);
    img->show();


    mainLayout->addLayout(rightLayout);
    mainLayout->addLayout(leftLayout);
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
    temp = new QLabel("temp moyenne : "+QString::number(_data->getTemp())+"C°");
    temp_min = new QLabel("temp min : "+QString::number(_data->getTempMin())+"C°");
    temp_max = new QLabel("temp max : "+QString::number(_data->getTempMax())+"C°");
    pressure = new QLabel("pression : "+QString::number(_data->getPressure())+"Pa");
    humidity = new QLabel("humidité : "+QString::number(_data->getHumidity())+"%");
    qDebug()<<QApplication::applicationDirPath();
    sprite = new QPixmap(":/new/prefix1/img/logo.png");
    img = new QLabel(this);
    qDebug()<<QFileInfo::exists(":/new/prefix1/img/logo.png");
    //img->setPixmap(getSpriteImg(SOLEIL));

}

void MeteoJour::initButton(){
    reload = new QPushButton("reload",this);
    QObject::connect(reload,SIGNAL(clicked(bool)),_data,SLOT(reqAgain()));
    param = new QPushButton("paramètres",this);
    QObject::connect(param,SIGNAL(clicked(bool)),this,SLOT(openParam()));
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
        img->setPixmap(getSpriteImg(determinatePic()));
    }

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : (SLOT) Permet d'ouvrir la fenetre de paramètre
 remarque:
 precond :
 postcond:
 ©2017
 */
void MeteoJour::openParam(){
    paramFen->show();
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : recuperer le bon sprite
 remarque:
 precond :
 postcond:
 ©2017
 */
QPixmap MeteoJour::getSpriteImg(int i){
    qDebug()<<i%12 << " " << i/12;
    return(sprite->copy((i%12)*100,(i/12)*100,100,100));
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : setter ville actuelle
 remarque: determiner le sprite par rapport aux coeffs
 precond :
 postcond:
 ©2017
 */
int MeteoJour::determinatePic(){
    if(_data->getCoeffPluie() > 30){
        return PLUIE;
    } else if (_data->getCoeffNuage() > 30){
        return SOLEIL_NUAGE_FONCE;
    } else {
        return SOLEIL;
    }
}
