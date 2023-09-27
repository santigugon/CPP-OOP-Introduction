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

class Videojuegos{

public:
string nombre;
string controlador;
string plataforma;
int imagen; 
string audio; 
string retroDevice;
int numJug; 
float precio;
int anioLanzamiento;


Videojuegos(string nombre,string controlador, string plataforma, int imagen, string audio, string retroDevice, int numJug, float precio, int anioLanzamiento){
this->nombre= nombre;
this->controlador=controlador;
this->plataforma= plataforma;
this->imagen=imagen;
this->audio= audio;
this->retroDevice=retroDevice;
this->numJug=numJug;
this->precio=precio;
this->anioLanzamiento=anioLanzamiento;
}

int descripcion (){
cout<<"El juego "<<nombre<<" de la plataforma "<<plataforma<<" se juega con un "<<controlador<<".\n Se recomienda para el audio "<<audio<<" y una resolucion de "<<imagen<<".\n Tiene un precio de "<<precio<<" y se lanzo en el año"<< anioLanzamiento<<" y es de "<<numJug<<" jugadores."; 
return 0;
}

};

Videojuegos gta("Grand theft auto","control","Xbox",1920,"Bocinas","Vibracion",1,59.99,2013);

gta.descripcion();



return 0;
}