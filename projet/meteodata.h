#ifndef METEODATA_H
#define METEODATA_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QMap>
#include <QObject>
#include <QFile>
#include <iostream>

class MeteoData:public QObject{
    protected:
        //TCP CO
        QUrl url;
        QNetworkAccessManager qnam;
        QNetworkReply *reply;
        QFile *file;
        //API DATA
        QString _url;
        QString _units;
        QString _appid;
        //RELEVENT DATA
        QString _ville;
        double _humidity;
        double _pressure;
        //JSON REPLY
        QJsonObject *_replyJson;



    public:
        //Constructeur pour notre requete API
        MeteoData(QString url,QString appid);
        void donneesRecues();
        void requete();
        void replyEnd();
        void pretAlire();
};

#endif // METEODATA_H
