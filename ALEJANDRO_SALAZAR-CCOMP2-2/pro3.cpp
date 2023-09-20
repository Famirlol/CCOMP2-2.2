#include <iostream>
using namespace std;
int main(){
    long long y=600851475143;
    for(long long x=3;x<y;x+=2){
            if (y%x==0){
                y=y/x;
            }
    }
    cout<<"el numero es"<<y;
    return 0;
}