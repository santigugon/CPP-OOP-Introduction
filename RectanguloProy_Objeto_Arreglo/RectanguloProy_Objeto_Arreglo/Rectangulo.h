#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

#include <iostream>
using namespace std;

class Rectangulo{
    private:
        double largo, ancho;
    public:
        Rectangulo();
        double calcArea();
        void setLargo(double la);
        void setAncho(double an);
        double getLargo();
        double getAncho();

};



#endif // RECTANGULO_H_INCLUDED
