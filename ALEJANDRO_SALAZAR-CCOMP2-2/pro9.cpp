#include <iostream>
using namespace std;
int main() {
    int p = 1000;

    for (int a = 1; a < p; a++) {
        for (int b = a + 1; b < p; b++) {
            int c = p - a - b;
            if (a * a + b * b == c * c) {
                long long p = static_cast<long long>(a) * b * c;
                cout << "La terna pitagórica es: a = " << a << ", b = " << b << ", c = " << c << endl;
                cout << "El po abc es: " << p << endl;
                return 0;
            }
        }
    }
    return 0;
}