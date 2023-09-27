#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{

// Ejercicio 1
cout<<endl<<"Ejercicio 1"<<endl;
cout<<"Hola mundo";

// Ejercicio 2
cout<<endl<<"Ejercicio 2"<<endl;
int n1_ej2,n2_ej2;
n1_ej2=15;
n2_ej2=4;
int suma=n1_ej2+n2_ej2;
cout<<suma;

//Ejercicio 3 Area de rectangulo
cout<<endl<<"Ejercicio 3"<<endl;

double area;
double base;
double altura;

std::cout<<"Ingresa primero la base y luego la altura \n";
std::cin>>base;
std::cin>>altura;
area=base*altura;
std::cout<<"El area es "<<area<<(endl);

//Ejercicio 4
cout<<endl<<"Ejercicio 4"<<endl;
string minombre, apellido;
cout<<"Ingresa tu nombre\n";
cin>>minombre;
cout<<"Ingresa tu apellido\n";
cin>>apellido;
cout<<"Bienvenido "<<minombre<<" "<<apellido<<" al increible mundo de C++ \n";

//Ejercicio 5

cout<<endl<<"Ejercicio 5"<<endl;
string operacion;
double n1,n2;
cout<<"Ingresa el tipo de operacion que vas a realizar \n";
cin>>operacion;
transform(operacion.begin(), operacion.end(), operacion.begin(),
    [](unsigned char c){ return std::tolower(c); });
cout<<"Ingresa n1 \n";
cin>>n1;
cout<<"Ingresa n2 \n ";
cin>>n2;

if(operacion=="suma"){
cout<<"El resultado de "<<n1<<" + "<<n2<<"= ";
cout<<n1+n2;
}else if (operacion=="multiplicacion")
{
cout<<"El resultado de "<<n1<<" * "<<n2<<"= ";
cout<<n1*n2;
}else if (operacion=="resta")
{
cout<<"El resultado de "<<n1<<" - "<<n2<<"= ";
cout<<n1-n2;
}else if (operacion=="division")
{
cout<<"El resultado de "<<n1<<" / "<<n2<<"= ";
cout<<n1/n2;
}





// Ejercicio 6
cout<<endl<<"Ejercicio 6"<<endl;

float precio_base, porcentaje_desc,precio_final;

cout<<"Ingresa el precio base= ";
cin>>precio_base;
cout<<"Ingresa el porcentaje de IVA= ";
cin>>porcentaje_desc;

precio_final=precio_base*((porcentaje_desc/100)+1);

cout<<"El precio  del producto con el "<<porcentaje_desc<<"% de IVA es $"<<precio_final<<endl;


// Ejercicio 7
cout<<endl<<"Ejercicio 7"<<endl;
double n1_ej7,n2_ej7,n_medio;
cout<<"Ingresa n1 \n";
cin>>n1_ej7;
cout<<"\n Ingresa n2 \n";
cin>>n2_ej7;

n_medio=n1_ej7;
n1_ej7=n2_ej7;
n2_ej7=n_medio;

cout<<"Los valores intercambiados son \n n1="<<n1_ej7<<"\n n2="<<n2_ej7;

// Ejercicio 8
cout<<endl<<"Ejercicio 8"<<endl;
float cal1,cal2,cal3,promedio;
string nombre_alumno;

cout<<"Introduce el nombre del alumno ";
cin>>nombre_alumno;
cout<<"Introduce la calificacion 1= ";
cin>>cal1;
cout<<"Introduce la calificacion 2= ";
cin>>cal2;
cout<<"Introduce la calificacion 3 =";
cin>>cal3;
promedio=(cal1+cal2+cal3)/3;

cout<<"El promedio de "<<nombre_alumno<<" es "<<promedio;



// Ejercicio 9
cout<<endl<<"Ejercicio 9"<<endl;

float ladoa,ladob,hipotenusa;
cout<<"Ingresa el lado a ";
cin>>ladoa;
cout<<"Ingresa el lado b ";
cin>>ladob;

hipotenusa=hypot(ladoa,ladob);

cout<<"La hipotenusa del triangulo con lado a "<<ladoa<<" y lado b "<<ladob<<" es de "<<hipotenusa;


// Ejercicio 10
cout<<endl<<"Ejercicio 10"<<endl;
float x1,y1,x2,y2,distanciax,distanciay;
cout<<"Ingresa x1 ";
cin>>x1;
cout<<"Ingresa y1 ";
cin>>y1;
cout<<"Ingresa x2 ";
cin>>x2;
cout<<"Ingresa y2 ";
cin>>y2;

distanciax=x2-x1;
distanciay=y2-y1;

cout<<"La distancia es ("<<distanciax<<","<<distanciay<<")";


}