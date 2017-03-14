#ifndef METEOMODULE_H
#define METEOMODULE_H

#include<QtWidgets>
#include<QLayout>
#include<QLabel>
#include<QPushButton>
#include"module.h"
#include"meteojour.h"

class MeteoModule:public Module{
protected:
    QTabWidget *semaine;
    QLabel *label;
    QVBoxLayout *main;
    MeteoJour* jours[7];

    void setSemaine();
public:
    explicit MeteoModule(QWidget *parent = 0);
};

#endif // METEOMODULE_H
