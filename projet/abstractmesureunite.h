#ifndef ABSTRACTMESUREUNITE_H
#define ABSTRACTMESUREUNITE_H

#include <cmath>
#include <iostream>


using namespace std;

class AbstractMesureUnite{
protected:
  double _value;
public:
  AbstractMesureUnite();
  AbstractMesureUnite(double);
  AbstractMesureUnite(const AbstractMesureUnite&);
  ~AbstractMesureUnite();
  AbstractMesureUnite &operator=(const AbstractMesureUnite&);

  void setValue(double);
  double getValue()const;

  virtual void afficher(ostream &flux) const = 0;

  friend ostream& operator<<(ostream& flux,const AbstractMesureUnite& u){
    u.afficher(flux);
    return flux;
  }



};

#endif // ABSTRACTMESUREUNITE_H
