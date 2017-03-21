#include "meteoparam.h"

MeteoParam::MeteoParam(QWidget *parent) : QWidget(parent){
    initLabel();
    initComboBox();
    initLayout();
    setLayout(main);
}

void MeteoParam::initComboBox(){
    _villeListe = new QComboBox(this);
    _villeListe->addItem("Pau,fr");
    _villeListe->addItem("Bordeaux,fr");
    _villeListe->addItem("Paris,fr");
    _villeListe->addItem("Toulouse,fr");

}

void MeteoParam::initLayout(){
    main = new QVBoxLayout();
    main->addWidget(_villeTxt);
    main->addWidget(_villeListe);
}

void MeteoParam::initLabel(){
    _villeTxt = new QLabel("Ville",this);
}
