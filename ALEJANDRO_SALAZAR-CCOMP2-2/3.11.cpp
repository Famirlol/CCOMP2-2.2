#include <iostream>
#include <string>
#include "carro.h"
using namespace std;
int main() {
    carro carro("Toyota", "Gasolina", 2023, "azul", 2000);
    cout << "Detalles del carro:" <<endl;
    carro.Mostrar();

    return 0;
}