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
#include <QJsonArray>

class MeteoData:public QObject{
    Q_OBJECT
    protected:
        //RELEVENT DATA
        QString _mesure;
        QString _ville;
        double _humidity;
        double _pressure;
        double _tempMin;
        double _tempMax;
        double _temp;
        double _coeffNuage;
        double _coeffPluie;
        //JSON REPLY
        QJsonObject obj;
    public:
        //Constructeur pour notre requete API
        MeteoData(QString, QObject *parent = 0);
        void requete();
        void parseObj();
        double getHumidity()const;
        double getPressure()const;
        double getTempMin()const;
        double getTempMax()const;
        double getTemp()const;
        double getCoeffNuage()const;//TODO
        double getCoeffPluie()const;//TODO
        QString getVille()const;
        void setHumidity(double);
        void setPressure(double);
        void setTempMin(double);
        void setTempMax(double);
        void setTemp(double);
        void setCoeffNuage(double);//TODO
        void setCoeffPluie(double);//TODO
        void setVille(QString);
        void setMesure(QString);
    signals:
        void dataChanged(int i);
    public slots:
        void storeReplyInObj(QNetworkReply*);
        void reqAgain();
        void onError();
};

#endif // METEODATA_H
