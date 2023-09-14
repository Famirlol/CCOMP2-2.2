#include <iostream>
using namespace std;
int main()
{
    int i,h,a(1);	
	
    cout << "Introduce un numero: ";cin >> h;
    while(a<=h){
        i=2;          
        while(a%i!=0) 
        {
            i++;     
        }
        if(i==a)  {    
            cout <<a<< endl;  }
    a=a+1;
    }
}