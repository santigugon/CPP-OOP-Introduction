#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

// clase Base / Padre
class Vehiculo {
  public:
    string marca = "Ford";
    void acelera() {
      cout << "Run, Run! \n" ;
    }
};



#endif // VEHICULO_H_INCLUDED
