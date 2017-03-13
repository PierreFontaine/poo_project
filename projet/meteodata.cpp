#include "meteodata.h"

MeteoData::MeteoData(QString url,QString appid):_url(url),_appid(appid){
    url = _url + _appid;
}

void MeteoData::donneesRecues(){

}

void MeteoData::requete(){
    reply = qnam.get(QNetworkRequest(url));
    connect(reply, &QNetworkReply::finished, this, &MeteoData::replyEnd);
    connect(reply, &QIODevice::readyRead, this, &MeteoData::pretAlire);
}

void MeteoData::replyEnd(){
   std::cerr << "requete terminé" << '\n';
}

void MeteoData::pretAlire(){
   std::cerr << "requete peut etre lu" << '\n';
}
