#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <ctime>
#include "C:\Users\santi\CPP-Proyectos\helloworld\Herencia\Eauto}+.h"
#include "C:\Users\santi\CPP-Proyectos\helloworld\Herencia\Auto.h"

using namespace std;

Auto::Auto(string model, int velocidad){
    modelo=model;
    velocida=velocidad;

};

 void Auto::Acelerar(){
      velocida+=10;
      cout<<"La velocidad es de "<<velocida<<endl;
    }
int add(int x,int y){
    return x+y;
}

int main() {
  Auto miAuto("Ram",100);
  miAuto.Acelerar();

  Eauto miEauto;
  cout << miAuto.marca + " " + miAuto.modelo + " " + miEauto.sub_modelo ;
  return 0;
}