#include "fluxrss.h"

FluxRss::FluxRss(){

}

FluxRss::~FluxRss(){

}

void FluxRss::initLists(){
  _channel = new List<QString>();
  _copyright = new List<QString>();
  _description = new List<QString>();
  _guid = new List<QString>();
  _image = new List<QString>();
  _item = new List<QString>();
  _lastBuildDate = new List<QString>();
  _managingEditor = new List<QString>();
  _pubDate = new List<QString>();
}

List<QString> FluxRss::getAuthor()const{

}

List<QString> FluxRss::getCategory()const{

}

List<QString> FluxRss::getGenerator()const{

}

List<QString> FluxRss::getLink()const{

}

List<QString> FluxRss::getTitle()const{

}
