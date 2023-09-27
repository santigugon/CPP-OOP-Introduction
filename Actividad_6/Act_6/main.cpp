#include <iostream>
#include "Triangle.h"
#include"Coord.h"

using namespace std;

int main()
{
Triangle trianguloDefault;

cout<<"Para el primer triangulo tenemos que: "<<endl;
trianguloDefault.perimetro();
trianguloDefault.area();

Coord V1(1,2), V2(2,5), V3(3,2);
Triangle trianguloDos(V1,V2,V3);
cout<<"Para el segundo triangulo tenemos que: "<<endl;
trianguloDos.perimetro();
trianguloDos.area();


Triangle trianguloTres(Coord(1,2),Coord(2,5),Coord(10,2));
cout<<"Para el segundo triangulo tenemos que: "<<endl;
trianguloTres.perimetro();
trianguloTres.area();
    return 0;
}
