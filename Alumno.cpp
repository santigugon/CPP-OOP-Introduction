

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include "Alumno.h"

#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

using namespace std;

Alumno::Alumno(){
string matricula="A00";
string nombre="Default";
int edad=0;
string carrera="N/A";
}

Alumno::Alumno(string matriculaA, string nombreE, int edadD, string carreraA){
matricula=matriculaA;
nombre=nombreE;
edad=edadD;
carrera=carreraA;
}
string Alumno::getMatricula(){
    return matricula;
}
string Alumno::getNombre(){
    return nombre;

}

int Alumno::getEdad(){
    return edad;
}
string Alumno::getCarrera(){
    return carrera;
}
void Alumno::setMatricula(string matriculaA){
matricula=matriculaA;
}
void Alumno::setNombre(string nombreE){
    nombre=nombreE;
}
void Alumno::setEdad(int edadD){
    edad=edadD;
}
void Alumno::setCarrera(string carreraA){
    carrera=carreraA;
}
void Alumno::imprimirAlumno(){
cout<<"El alumno "<<nombre<<" con matricula "<<matricula<<" y edad de "<<edad<<" anios, estudia la carrera "<<carrera<<endl;
}void Alumno::cumpleAnios(){
edad++;
}
#endif 