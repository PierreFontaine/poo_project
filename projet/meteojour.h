#ifndef METEOJOUR_H
#define METEOJOUR_H

#include <QWidget>
#include <QLayout>
#include <QLabel>
#include "meteodata.h"

class MeteoJour : public QWidget{
    Q_OBJECT
protected:
    //Unicité
    int _j;
    //view
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftLayout;
    QVBoxLayout *rightLayout;
    QLabel *temp,*temp_min,*temp_max,*pressure,*humidity;

    //model
    MeteoData *_data;

    //Init
    void initLayout();
    void initLabel();

public:
    explicit MeteoJour(int j,MeteoData *data,QWidget *parent = 0);

signals:

public slots:
    void majData(int i);
};

#endif // METEOJOUR_H
