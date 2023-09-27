
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
