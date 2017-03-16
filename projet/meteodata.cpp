#include "meteodata.h"
#include "meteojour.h"
MeteoData::MeteoData(QString url,QString appid,QObject *parent):QObject(parent),_url(url),_appid(appid){
    url = _url + _appid;
    //file = new QFile("test.txt");
    //connect(this,SIGNAL(dataChanged()),

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
        QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8());
        if(!doc.isNull()){
            if(doc.isObject()){
                obj = doc.object();
                parseObj();
            }else{
                qDebug()<<"le doc n'est pas un objet";
            }
        } else {
            qDebug() << "JSON FORMAT INVALIDE";
        }
        //qDebug()<<bts;
    }else{
        qDebug()<<r->errorString();
    }
}

void MeteoData::parseObj(){
    QJsonObject main = obj.value("main").toObject();

    _pressure = main.value("pressure").toDouble();
    _humidity = main.value("humidity").toDouble();
    _tempMin = main.value("temp_min").toDouble();
    _tempMax = main.value("temp_max").toDouble();
    _temp = main.value("temp").toDouble();
    emit dataChanged();
}

double MeteoData::getHumidity()const{
    return _humidity;
}

double MeteoData::getPressure()const{
    return _pressure;
}

double MeteoData::getTempMin()const{
    return _tempMin;
}

double MeteoData::getTempMax()const{
    return _tempMax;
}

double MeteoData::getTemp()const{
    return _temp;
}

