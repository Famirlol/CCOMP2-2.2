#include <iostream>
using namespace std;
int main()
{
    int contador{2};
    int primo{0};
    bool e_p{true};

    for (int i = 3; contador <10002; i ++)
    {
        for (int j = 2; j < i; j ++)
        {
            e_p = true;
            if (i % j == 0)
            {
                e_p = false;
                break;
            }
            if (contador == 10001)
            {
                primo = i;
            }
        }
        if (e_p == true)
        {
            contador += 1;
        }
    }
    cout << "El numero primo 10001 es el " << primo ;
    return 0;
}