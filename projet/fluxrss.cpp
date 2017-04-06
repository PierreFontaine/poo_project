#include "fluxrss.h"

FluxRss::FluxRss(){

}

FluxRss::FluxRss(QByteArray doc):QXmlStreamReader(doc){
  fetchData();
}

FluxRss::FluxRss(const FluxRss &f){
  root = new FluxRss(*f.root);
  channel = new FluxRss(*f.channel);
  mainTitle = f.mainTitle;
  mainDescription = f.mainDescription;
  mainCopyright = f.mainCopyright;
  mainUrl = f.mainUrl;
  mainPubDate = f.mainPubDate;
  item = f.item;
}

FluxRss::~FluxRss(){

}

void FluxRss::fetchData(){
  if(readNextStartElement()){
          if(name() == "rss"){
              root = new FluxRss(*this);
              while(readNextStartElement()){
                  if(name() == "channel"){
                      channel = new FluxRss(*this);
                      while(readNextStartElement()){
                          if(name() == "title"){
                            mainTitle = readElementText();
                          }else {
                            skipCurrentElement();
                          }
                          if(name() == "description"){
                            mainDescription = readElementText();
                          }else {
                            skipCurrentElement();
                          }
                          if(name() == "copyright"){
                            mainCopyright = readElementText();
                          }else {
                            skipCurrentElement();
                          }
                          if(name() == "link"){
                            mainUrl = readElementText();
                          }else {
                            skipCurrentElement();
                          }
                          if(name() == "pubDate"){
                            mainPubDate = readElementText();
                          }else {
                            skipCurrentElement();
                          }
                          if(name() == "item"){
                            item.insertElemAtPos(item.getLength()+1,*this);
                          }else{
                              skipCurrentElement();
                          }
                      }
                  } else {
                      skipCurrentElement();
                  }
              }
          }
      }
}
