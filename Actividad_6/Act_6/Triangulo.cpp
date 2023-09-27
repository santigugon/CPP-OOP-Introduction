#include <iostream>
#include "Triangle.h"
#include <cmath>
#include "Coord.h"

using namespace std;

Triangle::Triangle(){
Coord V1(0,0);
Coord V2(50,30);
Coord V3(25,10);

v1=V1;
v2=V2;
v3=V3;
}

Triangle::Triangle(Coord val_v1, Coord val_v2, Coord val_v3){
v1 = val_v1;
v2 = val_v2;
v3 = val_v3;
}

double Triangle::perimetro(){
lado_12= sqrt(pow(v2.getX()-v1.getX(),2) +pow(v2.getY()-v1.getY(),2));
lado_13= sqrt(pow(v3.getX()-v1.getX(),2) +pow(v3.getY()-v1.getY(),2));
lado_23= sqrt(pow(v3.getX()-v2.getX(),2) +pow(v3.getY()-v2.getY(),2));

perimetro_v= lado_12+ lado_13+ lado_23;

cout<<"Perimetro= "<<perimetro_v<<"uds."<<endl;
}

double Triangle::area(){
double s= (lado_12+lado_13+lado_23)/2;
area_v=sqrt(s*(s-lado_12)*(s-lado_13)*(s-lado_23));
cout<<"area= "<<area_v<<endl;
}
