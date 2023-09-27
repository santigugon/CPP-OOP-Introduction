#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <ctime>
#include "C:\Users\santi\CPP-Proyectos\helloworld\Alumno.h"


using namespace std;

int main(){

Alumno santi("A00572499","Santiago Gutierrez",18,"ITC");
cout<<santi.getCarrera()<<endl;
cout<<santi.getEdad()<<endl;
cout<<santi.getMatricula()<<endl;
cout<<santi.getNombre()<<endl;
string nombre;
cin>>nombre;
santi.setNombre(nombre);
string matricula;
cin>>matricula;
santi.setMatricula(matricula);

santi.cumpleAnios();
santi.imprimirAlumno();
return 0;
}
