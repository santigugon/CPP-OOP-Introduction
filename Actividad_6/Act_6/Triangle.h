#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "Coord.h"
class Triangle{
    public:
        Triangle();
        Triangle(Coord, Coord, Coord);
        double perimetro();
        double area();
        void setVertices(Coord, Coord, Coord);
        int getX(Coord);
        int getY(Coord);

    private:
        Coord v1;
        Coord v2;
        Coord v3;

        double lado_12;
        double lado_13;
        double lado_23;

        double area_v;
        double perimetro_v;

};

#endif // TRIANGLE_H_INCLUDED
