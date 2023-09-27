#include <iostream>
#include "Auto.h"

int main() {
    Auto miAuto("Toyota", "Corolla", 2021);

    std::cout << "Marca: " << miAuto.getMarca() << std::endl;
    std::cout << "Modelo: " << miAuto.getModelo() << std::endl;
    std::cout << "Año: " << miAuto.getAnio() << std::endl;

    return 0;
}
