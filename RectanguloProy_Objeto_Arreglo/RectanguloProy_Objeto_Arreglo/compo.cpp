class Cood{

    public:
        Coord();
        Coord(int, int);
        void setX(int);
        void setY(int);
        int getX();
        int getY();
        void print();

    private:
        int x;
        int y;

};



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
        Coord centro;
        int radio;
};





