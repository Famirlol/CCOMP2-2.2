#include <iostream>
using namespace std;
int main() {
    int x(1),y(0);

    while (x<1000){
        if (x%3==0 || x%5==0){
            y=y+x;
        }
        x+=1;
    }
    cout<<y;
    return 0;
}
