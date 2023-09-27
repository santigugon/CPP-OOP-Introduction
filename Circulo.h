#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include "Coord.h"



class Circulo{

    public:
        Circulo();
        Circulo(Coord, int);
        void setCentro(Coord);
        Coord getCentro();
        void setRadio(int);
        int getRadio();
        void print();
    
    private:
        Coord centro;//Tipo de dato coordenada con relacion de composicion
        int radio;

};

