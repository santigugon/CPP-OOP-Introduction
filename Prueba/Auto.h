#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include "Vehiculo.h"

// clase derivada / hija
class Auto: public Vehiculo {
  public:
    string modelo = "Mustang";
  void acelera();
};
#endif // AUTO_H_INCLUDED