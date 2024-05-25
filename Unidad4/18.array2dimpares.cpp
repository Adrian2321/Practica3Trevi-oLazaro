#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int numeros[3][3], num = 2;

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            numeros[x][y] = num;
            num += 2;
        }
    }

    int x, y;
    cout << "introduce la coordenada x: ";
    cin >> x;
    cout << "Introduce la coordenada y: ";
    cin >> y;

    cout << "El numero es: " << numeros[x][y] << endl;

    return 0;
}

