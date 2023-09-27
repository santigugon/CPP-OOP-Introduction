#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include"Triangle.h"
#include "Coord.h"

int main(){

Triangle triangulo(Coord(1,2), Coord(3,2), Coord(2,5))
triangulo.area();
triangulo.perimetro();

return 0;
}