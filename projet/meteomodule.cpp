#include "meteomodule.h"

MeteoModule::MeteoModule(QWidget *parent):Module(parent){
    _data = new MeteoData("pau");
    _data->requete();
    setSemaine();
    main = new QVBoxLayout();
    main->addWidget(semaine);
    setLayout(main);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : Initialiser le widget tab avec les 5 futures previsions
 remarque:
 precond :
 postcond:
 ©2017
 */
void MeteoModule::setSemaine(){
    int i;

    //Initialisation du tabWidget
    semaine = new QTabWidget(this);
    semaine->setGeometry(0,20,300,400);
    //Initialisation des 7 jours
    for(i= 0; i< 5; i++){
        jours[i] = new MeteoJour(i,_data);
    }
    //Insertion des 7 jours dans tabWidget
    semaine->addTab(jours[0],"1");
    semaine->addTab(jours[1],"2");
    semaine->addTab(jours[2],"3");
    semaine->addTab(jours[3],"4");
    semaine->addTab(jours[4],"5");


}
