#include <iostream>
using namespace std;

// Función para calcular el determinante de una matriz 3x3
int determinante3x3(int matriz[3][3]) {
    int det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
              matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
              matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
    return det;
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {0, 4, 5},
        {1, 0, 6}
    };

    int det = determinante3x3(matriz);
    cout << "El determinante de la matriz es: " << det << endl;

    return 0;
}

