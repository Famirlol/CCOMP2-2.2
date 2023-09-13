#include <iostream>
using namespace std;
#include "date.h"
int main() {
    Date fecha(9, 12, 3);
    fecha.mirarm(12);
    cout << "Fecha: ";
    fecha.mostrar();
    return 0;
}