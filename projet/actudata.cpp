#include "actudata.h"

ActuData::ActuData(QObject *parent) : QObject(parent){
    _l = new List<string>();
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
    qDebug()<<"Exe Req XML";
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
    qDebug()<<"CallBack XML";
    if(r->error() == QNetworkReply::NoError){
        QByteArray doc = r->readAll();
        xmlDoc = new QXmlStreamReader(doc);
        //qDebug()<<xml;
    }else{
        qDebug()<<r->errorString();
    }
    parseXML();
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : parser le doc
 remarque:
 precond :
 postcond:
 ©2017
 */
void ActuData::parseXML(){
    if(xmlDoc->readNextStartElement()){
        if(xmlDoc->name() == "rss"){
            while(xmlDoc->readNextStartElement()){
                if(xmlDoc->name() == "channel"){
                    while(xmlDoc->readNextStartElement()){
                        if(xmlDoc->name() == "item"){
                            while(xmlDoc->readNextStartElement()){
                                if(xmlDoc->name() == "description"){
                                    //qDebug()<<xmlDoc->readElementText();
                                    qDebug()<<"avant insertion dans la liste";
                                    //std::cerr << "insertion de " << xmlDoc->readElementText().toStdString() << std::endl;
                                    _l->insertElemAtPos(_l->getLength()+1,xmlDoc->readElementText().toStdString());
                                    std::cerr<<_l->getElemAtPos(_l->getLength()) << std::endl;
                                    qDebug()<<"après insertion dans la liste";

                                }else{
                                    //qDebug()<<"erreur pas d'élément description";
                                    xmlDoc->skipCurrentElement();
                                }
                            }
                        }else{
                            //qDebug()<<"erreur pas d'élément item";
                            xmlDoc->skipCurrentElement();
                        }
                    }
                } else {
                    //qDebug()<<"erreur pas d'éléments channel";
                    xmlDoc->skipCurrentElement();
                }
            }

        }

    }
    emit headLines();
}

List<string> * ActuData::getList()const{
    return _l;
}
