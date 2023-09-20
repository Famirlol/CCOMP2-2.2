#include <iostream>
using namespace std;
long long suma_par_fib(int a)
{
    int n = 1, z = 2, suma = 0;
    while (n < a)
    {
        if(n % 2 == 0)
        {
            suma += n;
        }
        int x = z + n;
        n = z;
        z = x;
    }
    return suma;
}
int main()
{
    cout <<"El resultado de la suma de los numeros pares en la sucesión fibonacci es: "
    << suma_par_fib(4000000) << endl;
    return 0;
}