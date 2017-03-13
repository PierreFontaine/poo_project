#include "meteomodule.h"

MeteoModule::MeteoModule(QWidget *parent):Module(parent){
    setSemaine();
    label = new QLabel("meteo label",this);
    main = new QVBoxLayout();
    setFixedSize(300, 150);
    label->show();
    main->addWidget(label);


}

void MeteoModule::setSemaine(){
    int i;

    //Initialisation du tabWidget
    semaine = new QTabWidget(this);
    semaine->setGeometry(0,20,300,160);
    //Initialisation des 7 jours
    for(i= 0; i< 7; i++){
        jours[i] = new meteoJour;
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
