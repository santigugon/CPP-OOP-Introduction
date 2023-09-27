#include <iostream>
#include "Coord.h"

using namespace std;

    Coord::Coord(){
    x=0;
    y=0;    }

    Coord::Coord(int valorX, int valorY){
    x=valorX;
    y=valorY;   }

    void Coord::setX(int valorX){
    x=valorX;   }

    void Coord::setY(int valorY){
    y=valorY;   }

    int Coord::getX(){
    return x;   }

    int Coord::getY(){
    return y;   }

    void Coord::print(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}
