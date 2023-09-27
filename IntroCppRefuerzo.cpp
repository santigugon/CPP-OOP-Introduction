#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <ctime>

using namespace std;

double calculadoraEdad(int edadTierra, int dias){
double y;
y=(edadTierra*365)/dias;
cout<<y;
return y;
}
double calculadoraInversion(int p, int r, int n){
double inversion;
inversion=(p*(1-pow((r/100),n+1)))/(1-(r/100));
return inversion;
}

int main(){
// Ejercicio1
int altura,peso;
double iMC;
cout<<"Ingresa tu altura en cm \n";
cin>>altura;
cout<<"Ingresa tu peso en kg \n";
cin>>peso;
iMC=peso/pow(altura,2)*10000;
cout<<"El IMC es de "<<iMC<<endl;

// Ej 2
std::cout<< std::fixed;
std::cout<< std::setprecision(2);
double celsius,fahrenheit;
cout<<"Ingresa los grados en Celsius \n";
cin>>celsius;
fahrenheit=(9.0/5.0)*celsius+32;
cout<<celsius<<" grados celsius equivale a "<<fahrenheit<<" grados fahrenheit"<<endl;

// Ej3
int edadTierra;
double edadMercurio,edadVenus,edadJupiter,edadSaturno;
cout<<"Ingresa tu edad en la Tierra \n";
cin>>edadTierra;
cout<<"\n Tu edad en Mercurio es ";
edadMercurio=calculadoraEdad(edadTierra,88);
cout<<"\n Tu edad en Venus es ";
edadVenus=calculadoraEdad(edadTierra,225);
cout<<"\n Tu edad en Jupiter es ";
edadJupiter=calculadoraEdad(edadTierra,4380);
cout<<"\n Tu edad en Saturno es ";
edadSaturno=calculadoraEdad(edadTierra,10767);

// Ej4
int a,b,c;
double solucionEcuacion1,solucionEcuacion2;
cout<<endl<<"Recuerda que la ecuacion cuadratica es Ax^2+Bx+C";
cout<<"Ingresa el coeficiente A mayor que 0";
cin>>a;
cout<<"Ingresa el coeficiente B ";
cin>>b;
cout<<"Ingresa el coeficiente C ";
cin>>c;
cout<<"La soluciones de la ecuaciones son" ;
solucionEcuacion1=(-b+sqrt(b*b)-4*a*c)/(2*a);
solucionEcuacion2=(-b-sqrt(b*b)-4*a*c)/(2*a);
cout<<solucionEcuacion1;
cout<<solucionEcuacion2;

// Ej5
int euros,anios;
double tasaInteres,inversion;

inversion=calculadoraInversion(euros,tasaInteres,anios);
cout<<"La cantidad ganada sera de "<< inversion;


}

