#ifndef METEODATA_H
#define METEODATA_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QMap>
#include <QObject>
#include <QFile>
#include <iostream>
#include <QDateTime>
#include <QTextEdit>
#include <QEventLoop>
#include <QDebug>
class MeteoData:public QObject{
    protected:
        //TCP CO
        QUrl url;
        QNetworkReply *reply;
        //API DATA
        QString _url;
        QString _units;
        QString _appid;
        //RELEVENT DATA
        QString _ville;
        double _humidity;
        double _pressure;
        //JSON REPLY
        QFile *file;
        //Debugage
        QTextEdit *zoneEdit;
        QWidget *debug;
    public:
        //Constructeur pour notre requete API
        MeteoData(QString url,QString appid);
        void requete();
private slots:
        void displayData();
        void writeFile();
};

#endif // METEODATA_H
