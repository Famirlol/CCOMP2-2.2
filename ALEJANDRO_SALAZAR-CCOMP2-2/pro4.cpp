#include <iostream>
using namespace std;

bool esPalindromo(int num) {
    int ori = num;
    int inver = 0;

    while (num > 0) {
        int val = num % 10;
        inver = inver * 10 + val;
        num /= 10;
    }

    return ori == inver;
}

int main() {
    int palindromoMasGrande = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int producto = i * j;
            if (producto > palindromoMasGrande && esPalindromo(producto)) {
                palindromoMasGrande = producto;
            }
        }
    }

    cout << "El palíndromo es: " << palindromoMasGrande << endl;
    return 0;
}