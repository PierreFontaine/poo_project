#include "fluxatom.h"

FluxAtom::FluxAtom(){
  initLists();
}

FluxAtom::~FluxAtom(){

}

void FluxAtom::initLists(){
  _feed = new List<QString>();
  _rigths = new List<QString>();
  _subtitle = new List<QString>();
  _summary = new List<QString>();
  _content = new List<QString>();
  _id = new List<QString>();
  _logo = new List<QString>();
  _entry = new List<QString>();
  _updated = new List<QString>();
  _contributor = new List<QString>();
  _published = new List<QString>();
}
//INHERITED FROM FLUX.H
List<QString> FluxAtom::getAuthor()const{

}

List<QString> FluxAtom::getCategory()const{

}

List<QString> FluxAtom::getGenerator()const{

}

List<QString> FluxAtom::getLink()const{

}

List<QString> FluxAtom::getTitle()const{

}

//ATOM
List<QString> FluxAtom::getFeed()const{

}

List<QString> FluxAtom::getRigths()const{

}

List<QString> FluxAtom::getSubtitle()const{

}

List<QString> FluxAtom::getSummary()const{

}

List<QString> FluxAtom::getContent()const{

}

List<QString> FluxAtom::getId()const{

}

List<QString> FluxAtom::getLogo()const{

}

List<QString> FluxAtom::getEntry()const{

}

List<QString> FluxAtom::getUpdated()const{

}

List<QString> FluxAtom::getContributor()const{

}

List<QString> FluxAtom::getPublished()const{

}
