#include "actudata.h"

ActuData::ActuData(QObject *parent) : QObject(parent){

}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : effectuer une requete sur le lien XML du site LeMonde
 remarque:
 precond :
 postcond:
 ©2017
 */
void ActuData::requete(){
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    qDebug()<<"Exe Req";
    //execution d'une requete
    //callback du storage a la reception de la requete
    qDebug()<<"Creation connexion pour succès ou echec";
    connect(manager,SIGNAL(finished(QNetworkReply*)),
            this,SLOT(storeReplyInObj(QNetworkReply*)));
    manager->get(QNetworkRequest(QUrl("http://www.lemonde.fr/rss/une.xml")));
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : Stocker la réponse dans xmlDoc
 remarque:
 precond :
 postcond:
 ©2017
 */
void ActuData::storeReplyInObj(QNetworkReply* r){
    qDebug()<<"CallBack";
    if(r->error() == QNetworkReply::NoError){
        xmlDoc->setContent(r->readAll());
        qDebug()<<xmlDoc;
    }else{
        qDebug()<<r->errorString();
    }
}
