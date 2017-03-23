#include "list.h"
#include "string"

int main(int argc, char const *argv[]) {
  List<string> lInt;

  lInt.getLength();

  std::cerr << "insertion de 30 pos 1" << '\n';
  lInt.insertElemAtPos(1,"pierre");
  std::cerr << "insertion de 20 pos 2" << '\n';
  lInt.insertElemAtPos(2,"feuille");
  std::cerr << "insertion de 50 pos 3" << '\n';
  lInt.insertElemAtPos(3,"ciseau");

  cerr << "length : " << lInt.getLength() << endl;


  cerr << "elem pos 1 : " << lInt.getElemAtPos(1) << endl;
  cerr << "elem pos 2 : " << lInt.getElemAtPos(2) << endl;
  cerr << "elem pos 3 : " << lInt.getElemAtPos(3) << endl;


  return 0;
}
