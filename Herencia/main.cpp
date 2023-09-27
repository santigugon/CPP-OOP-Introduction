#include <iostream>
#include "C:\Users\santi\CPP-Proyectos\helloworld\Herencia\Eauto}+.h"
#include "C:\Users\santi\CPP-Proyectos\helloworld\Herencia\Auto.h"

using namespace std;



int main() {
  Auto miAuto("Ram",100);
  miAuto.Acelerar();

  Eauto miEauto;
  cout << miAuto.marca + " " + miAuto.modelo + " " + miEauto.sub_modelo ;
  return 0;
}
