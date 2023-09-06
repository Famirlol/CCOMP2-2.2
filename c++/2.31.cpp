#include <iostream>

using namespace std;

int main()
{
int m,g,l,p,t;
cout<<"ingrese el total de millas conducidas";cin>>m;
cout<<"Ingrese el costo de la gasolina";cin>>g;
cout<<"ingrese el consumo de millas por galon";cin>>l;
cout<<"ingrese el dinero gastado en estacionamiento";cin>>p;
cout<<"ingrese los peajes";cin>>t;
cout<<"su gasto en gasolina es de"<<(m/l)*g<<"y gasta un total de"<<(m/l)*g+p+t;
    return 0;
}
