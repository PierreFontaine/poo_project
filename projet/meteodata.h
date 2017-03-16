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
#include <QObject>
#include <QJsonObject>
#include <QJsonDocument>

class MeteoData:public QObject{
    Q_OBJECT
    protected:
        //TCP CO
        QUrl url;
        //API DATA
        QString _url;
        QString _units;
        QString _appid;
        //RELEVENT DATA
        QString _ville;
        double _humidity;
        double _pressure;
        double _tempMin;
        double _tempMax;
        double _temp;
        //JSON REPLY
        QJsonObject obj;
        //Debugage
        QTextEdit *zoneEdit;
        QWidget *debug;
    public:
        //Constructeur pour notre requete API
        MeteoData(QString url,QString appid,QObject *parent = 0);
        void requete();
        void parseObj();
        double getHumidity()const;
        double getPressure()const;
        double getTempMin()const;
        double getTempMax()const;
        double getTemp()const;
    signals:
        void dataChanged();
    public slots:
        void storeReplyInObj(QNetworkReply*);
        void onError();
};

#endif // METEODATA_H
