#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <ctime>



int main(){
std::cout<<add(4,5)<<endl;

double suma= (float) ( (.2 + .1) );
std::cout<<suma;
std::cout<< std::fixed;
std::cout<< std::setprecision(100);
std::cout<< suma<<"\n";

srand( time(nullptr));




double arrAleatorio[10];
//ACtividad Presentacion
int x=0;
for(x;x<10;x++){
int random = rand()%(100-1)+1;
arrAleatorio[x]=random;
std::cout<<arrAleatorio[x]<<std::endl;
}
// Ejercicio 4
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

// Ejercicio 5-Num Magico


bool juegoNumMagico=true;
int numMagico= rand()%(100-1)+1;
int intentos=0;
while(juegoNumMagico){
int prueba;
std::cout<<"Ingresa un numero entero entre 1-100 \n";
std::cin>>prueba;
if(prueba==numMagico){
std::cout<<"Es correcto felicidades! "<<"el valor magico es "<<numMagico<<" lo obtuviste despues de "<<intentos<<" intentos \n";
juegoNumMagico=false;
}
else if(prueba<numMagico){
std::cout<<"Prueba mas alto \n";
intentos+=1;
}
else if(prueba>numMagico){
std::cout<<"Prueba mas bajo \n";
intentos+=1;
}

}
//COnversion Celsius Fahrenheit
double celsius, fahrenheit;
int numConversiones,a,b;

std::cout<<"Ingresa el num de temperaturas a convertir\n";
std::cin>>numConversiones;


x=0;
for (x;x<numConversiones;x++){
std::cout<<"\nIngresa el valor en celsius\n";
std::cin>>celsius;
std::cout<<"Fahrenheit         Celsius\n";
std::cout<<(9.0/5.0)*celsius+32;
std::cout<<"         ";
std::cout<<celsius;


}


return 0;
}