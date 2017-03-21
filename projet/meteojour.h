#ifndef METEOJOUR_H
#define METEOJOUR_H

#include <QApplication>
#include <QPixmap>
#include <QWidget>
#include <QLayout>
#include <QLabel>
#include <QFileInfo>
#include <QPushButton>
#include "meteodata.h"
#include "meteoparam.h"

#define SOLEIL 0
#define SOLEIL_NUAGE_CLAIR 1
#define SOLEIL_NUAGE_FONCE 6
#define ORAGE 10
#define PLUIE 28

class MeteoJour : public QWidget{
    Q_OBJECT
protected:
    //property
    MeteoParam *paramFen;
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
    QPushButton *reload,*param;
    //model
    MeteoData *_data;

    //Init
    void initLayout();
    void initLabel();
    void initButton();
    QPixmap getSpriteImg(int);
    int determinatePic();

public:
    explicit MeteoJour(int j,MeteoData *data,QWidget *parent = 0);

signals:

public slots:
    void majData(int i);
    void openParam();
};

#endif // METEOJOUR_H
