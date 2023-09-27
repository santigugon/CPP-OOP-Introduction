#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <ctime>

using namespace std;


int suma(int num1,int num2){
    int resultado;
    resultado=num1+num2;
    return num1+num2;
}


int main(){


std::cout<< std::fixed;
std::cout<< std::setprecision(3);
std::cout<<"Ingresa la cantidad de numeros que desees calcular la media \n";
int numUsuario,y=0;
double media=0;
std::cin>>numUsuario;

for(y;y<numUsuario;y++){
double numCiclo;
std::cout<<"Ingresa el numero "<<y+1<<" \n";
std::cin>>numCiclo;
media+=numCiclo;
}
media=media/numUsuario;
std::cout<<"La media es de "<<media<<std::endl;

if(media<70){
cout<<"lo siento";
}
else if(media>=70 &&media <80){
cout<<"muy bien, lo lograste";
}
else if(media>=80 &&media <90){
cout<<"eres muy bueno!";
}
else if(media>=90 &&media <=100){
cout<<"eres muy bueno!";
}


//Suma de 2 numeros con funciones

int n1;
int n2;

cout<<"Ingresa dos numeros a sumar: \n"<<"Num 1 y Num 2 \n";
cin>>n1;
cin>>n2;
cout<<"El resultado de la suma es "<<suma(n1,n2);

//Tabla de multiplicar

int numeroTabla,x;
cout<<"Ingresa un numero para calcular su tabla hasta el 12 \n";
cin>>numeroTabla;
x=1;
for(x;x<=12;x++){
cout<<numeroTabla*x<<endl;
}

// Factorial
int numeroFactorial,y,acumuladorFactorial;
cout<<"Ingresa un numero para calcular su factorial";
cin>>numeroFactorial;
y=1;
acumuladorFactorial=0;
for(x;x<=numeroFactorial;x++){
acumuladorFactorial=acumuladorFactorial*x;
}
cout<<"\nEl resultado Factorial es "<<acumuladorFactorial;


// Ejercicio Arrays
std::cout<< std::fixed;
std::cout<< std::setprecision(3);

srand( time(nullptr));

double arrAleatorio[10];
//ACtividad Presentacion
int x=0;
for(x;x<10;x++){
int random = rand()%(100-1)+1;
arrAleatorio[x]=random;
std::cout<<arrAleatorio[x]<<std::endl;
}
}
