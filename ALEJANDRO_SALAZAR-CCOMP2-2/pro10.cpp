#include <iostream>
using namespace std;
bool veri (long long num) 
{
    for (int i = 2; i * i <= num; i++) 
    { 
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    long long suma{0};
    for(int i = 2; i <= 2000000; i++) 
    {
        if(veri(i))
        {
            suma = suma + i;
        }
    }
    cout << "La suma de todos lo números primos hasta el 2000000 es: " << suma;
    return 0;
}