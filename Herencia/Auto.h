#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED

#include "Vehiculo.h"

// clase derivada / hija
class Auto: public Vehiculo {
  public:
    std::string modelo;
    int velocida;
    Auto(){
      modelo="Sin especificar";
      velocida=0;
    }
    Auto(std::string,int);
    void Acelerar();
};


#endif // AUTO_H_INCLUDED
