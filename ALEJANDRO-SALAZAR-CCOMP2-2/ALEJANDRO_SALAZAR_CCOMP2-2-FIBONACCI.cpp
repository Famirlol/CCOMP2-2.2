#include <iostream>
using namespace std;
int main(){
    int y(0),x(1),z(1),d;
    cout<<"Ingrese hasta que numero quiere";cin>>d;
for(int i=1;i<=d;i++){
    cout<<z<<" ";
    z=x+y;
    x=y; 
    y=z;  
}
    return 0;
}