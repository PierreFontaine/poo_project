#include "flux.h"

Flux::Flux(){
  initLists();
}

Flux::~Flux(){

}

void Flux::initLists(){
  _author = new List<QString>();
  _category = new List<QString>();
  _generator = new List<QString>();
  _link = new List<QString>();
  _title = new List<QString>();
}

List<QString> * Flux::getAuthor() const{
  return _author;
}

List<QString> * Flux::getCategory() const{
  return _category;
}

List<QString> * Flux::getGenerator() const{
  return _generator;
}

List<QString> * Flux::getLink() const{
  return _link;
}

List<QString> * Flux::getTitle() const{
  return _title;
}
