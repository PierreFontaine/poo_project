#include "meteodata.h"
#include "meteojour.h"
MeteoData::MeteoData(QString url,QString appid,QObject *parent):QObject(parent),_url(url),_appid(appid){
    url = _url + _appid;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : afficher message d'erreur dans la console
 remarque:
 precond :
 postcond:
 ©2017
 */
void MeteoData::onError(){
    qDebug()<<"Erreur de requete";
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : effectuer une requete pour recupérer données JSON de l'API
 remarque:
 precond :
 postcond:
 ©2017
 */
void MeteoData::requete(){
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    qDebug()<<"Exe Req";
    //execution d'une requete
    //callback du storage a la reception de la requete
    qDebug()<<"Creation connexion pour succès ou echec";
    connect(manager,SIGNAL(finished(QNetworkReply*)),
            this,SLOT(storeReplyInObj(QNetworkReply*)));
    manager->get(QNetworkRequest(QUrl("http://api.openweathermap.org/data/2.5/weather?q=London,uk&appid=9a5b3401d0ae43c0fdd643de1a05660c&units=metric")));
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : Stocker la réponse de l'API dans un QJsonObject
 remarque:
 precond :
 postcond:
 ©2017
 */
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

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : parser le QJsonDocument pour récupérer les données
 remarque:
 precond :
 postcond:
 ©2017
 */
void MeteoData::parseObj(){
    QJsonObject main = obj.value("main").toObject();

    _pressure = main.value("pressure").toDouble();
    _humidity = main.value("humidity").toDouble();
    _tempMin = main.value("temp_min").toDouble();
    _tempMax = main.value("temp_max").toDouble();
    _temp = main.value("temp").toDouble();
    emit dataChanged();
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : getter humidité
 remarque:
 precond :
 postcond:
 ©2017
 */
double MeteoData::getHumidity()const{
    return _humidity;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : getter pression
 remarque:
 precond :
 postcond:
 ©2017
 */
double MeteoData::getPressure()const{
    return _pressure;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : getter temp min
 remarque:
 precond :
 postcond:
 ©2017
 */
double MeteoData::getTempMin()const{
    return _tempMin;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : getter temp max
 remarque:
 precond :
 postcond:
 ©2017
 */
double MeteoData::getTempMax()const{
    return _tempMax;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : getter temp actuelle
 remarque:
 precond :
 postcond:
 ©2017
 */
double MeteoData::getTemp()const{
    return _temp;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : setter humidité
 remarque:
 precond :
 postcond:
 ©2017
 */
void setHumidity(double h){
  _humidity = h;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : setter pression
 remarque:
 precond :
 postcond:
 ©2017
 */
void setPressure(double p){
  _pressure = p;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : setter temp min
 remarque:
 precond :
 postcond:
 ©2017
 */
void setTempMin(double t){
  _tempMin = t;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : setter temp max
 remarque:
 precond :
 postcond:
 ©2017
 */
void setTempMax(double t){
  _tempMax = t;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : setter temp actuelle
 remarque:
 precond :
 postcond:
 ©2017
 */
void setTemp(double t){
  _temp = t;
}
