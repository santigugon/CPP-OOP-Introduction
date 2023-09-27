#include <iostream>
#include "Rectangulo.h"

using namespace std;

//Paso 1: Creo  constructor para la clase, e inicializo valores largo y ancho..
Rectangulo::Rectangulo(){
    largo = 0;
    ancho = 0;

}

double Rectangulo::calcArea(){
    return largo*ancho;
}

void Rectangulo::setLargo(double la){
    largo = la;
}

void Rectangulo::setAncho(double an){
    ancho = an;
}


double Rectangulo::getLargo(){
    return largo;
}

double Rectangulo::getAncho(){
    return ancho;
}
