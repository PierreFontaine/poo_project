#include "meteomodule.h"

MeteoModule::MeteoModule(QWidget *parent):Module(parent){
    _data = new MeteoData("api.openweathermap.org/data/2.5/weather?q=London,uk&APPID=","9a5b3401d0ae43c0fdd643de1a05660c");
    _data->requete();
    setSemaine();
    main = new QVBoxLayout();
    main->addWidget(semaine);
    setLayout(main);
}

void MeteoModule::setSemaine(){
    int i;

    //Initialisation du tabWidget
    semaine = new QTabWidget(this);
    semaine->setGeometry(0,20,300,400);
    //Initialisation des 7 jours
    for(i= 0; i< 7; i++){
        jours[i] = new MeteoJour(_data);
    }
    //Insertion des 7 jours dans tabWidget
    semaine->addTab(jours[0],"L");
    semaine->addTab(jours[1],"M");
    semaine->addTab(jours[2],"M");
    semaine->addTab(jours[3],"J");
    semaine->addTab(jours[4],"V");
    semaine->addTab(jours[5],"S");
    semaine->addTab(jours[6],"D");


}
