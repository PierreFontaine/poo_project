#include "meteodata.h"

MeteoData::MeteoData(QString url,QString appid,QObject *parent):QObject(parent),_url(url),_appid(appid){
    url = _url + _appid;
    //file = new QFile("test.txt");

}

void MeteoData::onError(){
    qDebug()<<"Erreur de requete";
}

void MeteoData::requete(){
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    qDebug()<<"Exe Req";
    //execution d'une requete
    //callback du storage a la reception de la requete
    qDebug()<<"Creation connexion pour succès ou echec";
    connect(manager,SIGNAL(finished(QNetworkReply*)),
            this,SLOT(storeReplyInObj(QNetworkReply*)));
    manager->get(QNetworkRequest(QUrl("http://api.openweathermap.org/data/2.5/weather?q=London,uk&appid=9a5b3401d0ae43c0fdd643de1a05660c")));
}

void MeteoData::storeReplyInObj(QNetworkReply* r){
    qDebug()<<"CallBack";
    if(r->error() == QNetworkReply::NoError){
        QByteArray bts = r->readAll();
        QString str(bts);
        qDebug()<<bts;
    }else{
        qDebug()<<r->errorString();
    }
}

