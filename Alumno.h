#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>



using namespace std;

class Alumno{


public:
Alumno();
Alumno(string , string , int , string );
int getEdad();
string getMatricula();
string getNombre();
string getCarrera();
void setMatricula(string);
void setNombre(string);
void setEdad(int);
void setCarrera(string);
void imprimirAlumno();
void cumpleAnios();

private:
std::string matricula;
string nombre;
int edad;
string carrera;
};
#endif 