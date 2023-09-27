#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){

class Destinatario{

public:
string nombre;
int telefono;
string direccion;
float peso;
int dimensiones;






Destinatario(string nombre, int telefono, string direccion, float peso, int dimensiones){
this->nombre=nombre;
this->telefono=telefono;
this->direccion=direccion;
this->peso=peso;
this->dimensiones=dimensiones;
}

void impresionEtiqueta(){
cout<<"Nombre: "<<nombre<<"\nDireccion: "<<direccion<<"\nPeso: "<<peso<<"kg\nDimensiones: "<<dimensiones<<endl; 

}

};

class Enviador{
public:
string nombre;
int telefono;
string direccion;


Enviador(string nombre, int telefono, string direccion){
this->nombre=nombre;
this->telefono=telefono;
this->direccion=direccion;
}
};

Destinatario santi("Santiago Gutierrez",4791370321,"Santa Cruz 315",4.05,50);

santi.impresionEtiqueta();

return 0;
}
