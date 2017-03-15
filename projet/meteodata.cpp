#include "meteodata.h"

MeteoData::MeteoData(QString url,QString appid):_url(url),_appid(appid){
    url = _url + _appid;
    debug = new QWidget();
    zoneEdit = new QTextEdit(debug);
    debug->show();
    //file = new QFile("test.txt");

}

void MeteoData::requete(){
    QNetworkAccessManager manager;
    zoneEdit->append("QUERY");
    zoneEdit->append("google");
    reply = manager.get(QNetworkRequest(QUrl("http://api.openweathermap.org/data/2.5/weather?q=London,uk&appid=9a5b3401d0ae43c0fdd643de1a05660c")));
    QEventLoop loop;
    connect(reply,SIGNAL(finished()),&loop,SLOT(quit()));
    connect(reply,SIGNAL(error(QNetworkReply::NetworkError)),&loop,SLOT(quit()));
    loop.exec();
    if(reply->error() == QNetworkReply::NoError){
        QByteArray bts = reply->readAll();
        QString str(bts);
        zoneEdit->append("reponse:");
        zoneEdit->append(bts);
    }else{
        zoneEdit->append("ERREUR REQUETE");
        qDebug()<<reply->errorString();
    }

    delete reply;
}

void MeteoData::displayData(){

}

void MeteoData::writeFile(){
    /*
    if(file){
        file->write(reply->readAll());
    }
    */
}
