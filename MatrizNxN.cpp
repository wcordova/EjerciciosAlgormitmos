#include <iostream>
using namespace std;

int sumarMatriz(int matriz[][3], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            suma += matriz[i][j];
        }
    }
    return suma;
}

int main() {
    const int N = 3;
    int matriz[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    int sumaTotal = sumarMatriz(matriz, N);
    
    cout << "Suma de los elementos: " << sumaTotal << endl;
    return 0;
}

