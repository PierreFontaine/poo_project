#include "meteodata.h"

MeteoData::MeteoData(std::string url,std::string units,std::string appid):_url(url),_units(units),_appid(appid){
    //_socket = new QTcpSocket(this);
    _tailleMessage = 0;
}

void MeteoData::donneesRecues(){

}

void MeteoData::requete(){
    //_socket->abort();
    //_socket->connectToHost(_url+_appid,80);
}
