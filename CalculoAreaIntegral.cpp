#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <ctime>



int main(){

double x2,x1,x,deltax,sumaRiemman;
int n;
std::cout<<"Ingresa primero x2 y luego x1";
std::cin>>x2;
std::cin>>x1;
std::cout<<"Ingresa n como numero entero";
std::cin>>n;
deltax=(x2-x1)/n;
sumaRiemman=0;
x=0;
for(x;x<n;x+=deltax){

sumaRiemman=sumaRiemman+(deltax*x);

}
std::cout<<"El resultado de la suma de Riemman es= "<<sumaRiemman;
return 0;    
}

double ecuacion(double x){
double resultado =pow(x,2)+5*x;

return resultado;
}