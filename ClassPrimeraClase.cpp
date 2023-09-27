#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <ctime>

using namespace std;

class Auto{

public:
    string marca;
    string nombre;
    string placa;
    float motor;
    int modelo;
    int velocidad;

    Auto(string mar, string nom, string pla, float mot, int mod){
        this->marca=mar;
        this->nombre=nom;
        this->placa=pla;
        this->motor=mot;
        this->modelo=mod;
    }



    void accelerate(){
        this->velocidad+=10;
        cout<<this->velocidad<<endl;
    }; //Metodos
    void frenar();
};

void Auto::frenar(){
    velocidad-=10;
    cout<<velocidad<<" Despues del frenado"<<endl;

};


int main(){
Auto vocho("VW","Vocho","Gl34UW",5.7,2017);
cout<<vocho.marca<<endl;
vocho.velocidad=150;
vocho.accelerate();
vocho.frenar();
return 0;
}