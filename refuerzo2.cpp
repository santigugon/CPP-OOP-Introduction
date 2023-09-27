#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <ctime>

using namespace std;

int main(){
int arreglo1[10];
int x;
x=0;

std::cout<< std::fixed;
std::cout<< std::setprecision(2);


//Ejercicio 1
for (x;x<=9;x++){
arreglo1[x]=x*3;
cout<<arreglo1[x]<<" indice "<<x<<endl;
}
// Ejercicio 2
int arreglo3[10];
x=0;
int acumArray3=0;

for(x;x<=9;x++){
    int numUsuario;
    cout<<" \n Ingresa un numero \n";
    cin>>numUsuario;
    arreglo3[x]=numUsuario;
    acumArray3+=numUsuario;
}
for(x;x<=9;x++){
  cout<<arreglo3[x]<<endl;
}
cout<<"La suma del arreglo es "<<acumArray3<<endl;



//Ejercicio 3
srand( time(nullptr));


int arreglo2[50];
int acumuladorarreglo2=0;
double promedioarreglo2;


x=0;
for(x;x<50;x++){
int random = rand()%(200-1)+1; 
acumuladorarreglo2+=random;
arreglo2[x]=random;
cout<<arreglo2[x]<<endl;
}

promedioarreglo2=acumuladorarreglo2/50;
cout<<"El promedio de los valores aleatorios es: "<<promedioarreglo2<<endl;

//Ejercicio 4
int arreglo4[25],max=0;
x=0;
for(x;x<25;x++){
   int random = rand()%(500-0)+0;
   arreglo4[x]=random;
   cout<<arreglo4[x]<<" posicion "<<x<<endl;
}

x=0;
for(x;x<25;x++){
   if(arreglo4[x]>max){
    max=arreglo4[x];
   }
}
cout<<"El maximo es "<<max<<endl;

// Ejercicio 5
string frase="Pensamiento Computacional Orientado a objetos";

cout<<"El tamaño de la frase es "<<size(frase);

int a=0;

for(a; a<size(frase);a++){
cout<<frase[a]<<endl;
}



}