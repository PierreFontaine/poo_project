#ifndef METEOJOUR_H
#define METEOJOUR_H

#include <QApplication>
#include <QPixmap>
#include <QWidget>
#include <QLayout>
#include <QLabel>
#include <QFileInfo>
#include "meteodata.h"

#define SOLEIL 0
#define SOLEIL_NUAGE_CLAIR 1
#define SOLEIL_NUAGE_FONCE 6
#define ORAGE 10
#define PLUIE 28

class MeteoJour : public QWidget{
    Q_OBJECT
protected:
    //sprite
    QPixmap *sprite;
    //Unicité
    int _j;
    //view
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftLayout;
    QVBoxLayout *rightLayout;
    QLabel *temp,*temp_min,*temp_max,*pressure,*humidity,*ville;
    QLabel *img;
    //model
    MeteoData *_data;

    //Init
    void initLayout();
    void initLabel();
    QPixmap getSpriteImg(int);
    int determinatePic();

public:
    explicit MeteoJour(int j,MeteoData *data,QWidget *parent = 0);

signals:

public slots:
    void majData(int i);
};

#endif // METEOJOUR_H
