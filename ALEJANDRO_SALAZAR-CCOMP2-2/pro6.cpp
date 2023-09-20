#include <iostream>
using namespace std;
int main()
{
    long long x{0};
    long long y{0};
    long long di;
    for (int i = 0; i <= 100; i++)
    {
        x += (i*i);
        y += i; 
    }
    di = (y*y) - x;
    cout<< di;

    return 0;
}