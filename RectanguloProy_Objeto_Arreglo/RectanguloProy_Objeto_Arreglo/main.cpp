#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
    Rectangulo rect;

    double area;

    rect.setLargo(10);
    rect.setAncho(5);

    area = rect.calcArea();

    cout<<"el resultado del �rea es: "<<area<<endl;


    Rectangulo arregloRect[2];  /* Paso 2, creo una instancia tipo arreglo, lo que suceder� es que los atributos de Rectangulo
                                quedar�n en cada casilla declarada de esta forma por el constructor base:
                                    [largo = 0, ancho = 0] pos 0
                                    [largo = 0, ancho = 0] pos 1

    Paso 3:
    Si quiero acceder a una  posici�n en escpecifico, lo puedo hacer de esta forma:

    areglo[posici�n].m�todo()*/

    cout<<"pos 0 elemento largo: "<<arregloRect[0].getLargo()<<endl; //as� consulto la posici�n 0 para atributo del objeto
    cout<<"pos 0 elemento ancho: "<<arregloRect[0].getAncho()<<endl;

    // Paso 4: as� actualizo los valores de atributos en la posici�n 0:

    arregloRect[0].setAncho(10); //con esto, accedo a la posici�n 0 del array y mediante set(), modifico largo y ancho
    arregloRect[0].setLargo(10);

    /* Paso 5: y para consultar, hago lo mismo, pero con get: */
    cout<<"pos 0 elemento largo: "<<arregloRect[0].getLargo()<<endl;
    cout<<"pos 0 elemento ancho: "<<arregloRect[0].getAncho()<<endl;


    //paso 6, ejecuto funciones de c�lculo que son miembros de la clase:

    cout<<"area calculada con los atributos de la posici�n 0: "<< arregloRect[0].calcArea()<<endl;

    cout<<"area calculada con los atributos de la posici�n 1: "<< arregloRect[1].calcArea()<<endl;


    return 0;
}
