#include <iostream>
using namespace std;
long long MD( long long x,  long long y)
{
    while(x!= 0)
    {
        long long z = x;
        x = y % x;
        y = z;
    }
    return y; 
}

 long long MM( long long a,  long long b)
    {
        return a * (b / (MD(a,b)));
    }

int main()
{
     long long r{1};

    for(int i = 2; i <= 20; ++i)
    {
        r = MM(r,i);
    }

    cout << "El menor número que es divisible entre 1 a 20 es: "<< r << endl;
    return 0;
}