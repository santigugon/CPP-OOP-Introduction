#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
int prueba[3]={1,2,3};
int cuadrado[3][3]={{1,1,1},{1,1,1},{1,1,1}};
bool cuadroJuego;
cuadroJuego=true;
srand( time(nullptr));
int random = rand()%(20-10)+10;  
cout<<random<<endl;
int numMagico= random;
cout<<"El num magico es "<<numMagico<<endl;

int z=0;

while (cuadroJuego)
{
int x,y;
x=0;
y=0;
for(x;x<=2;x++){
y=0;
for(y;y<=2;y++){
int random = 1+ (rand() % 15);
cuadrado[x][y]=random; 

}  
}

z++;

if(cuadrado[0][0]+cuadrado[0][1]+cuadrado[0][2]==numMagico &&cuadrado[1][0]+cuadrado[1][1]+cuadrado[1][2]==numMagico
&& cuadrado[2][0]+cuadrado[2][1]+cuadrado[2][2]==numMagico 
&&cuadrado[0][0]+cuadrado[1][0]+cuadrado[2][0]==numMagico 
&&cuadrado[0][1]+cuadrado[1][1]+cuadrado[2][1]==numMagico&& cuadrado[0][2]+cuadrado[1][2]+cuadrado[2][2]==numMagico
&&cuadrado[0][0]+cuadrado[1][1]+cuadrado[2][2]==numMagico 
// &&cuadrado[0][2]+cuadrado[1][1]+cuadrado[2][0]==numMagico
)
{

cout<<endl;
x=0;
for(x;x<=2;x++){
y=0;
for(y;y<=2;y++){
cout<<cuadrado[x][y]<<" ";
}  
cout<<"\n";
}
cuadroJuego=false;

cout<<"El numero de operaciones fue de "<<z<<"\n";
}
}

return 0;
}