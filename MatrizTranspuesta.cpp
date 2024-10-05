#include <iostream>
using namespace std;

// Función para transponer una matriz NxM
void transponerMatriz(int matriz[][3], int transpuesta[][2], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

// Función para imprimir una matriz NxM
void imprimirMatriz(int matriz[][2], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int N = 2, M = 3;
    int matriz[N][M] = {{1, 2, 3}, {4, 5, 6}};
    int transpuesta[M][N]; // Matriz transpuesta

    // Obtener la transpuesta
    transponerMatriz(matriz, transpuesta, N, M);

	cout << "Matriz transpuesta:" << endl;
    imprimirMatriz(matriz, N, M);

    // Imprimir la transpuesta
    cout << "Matriz transpuesta:" << endl;
    imprimirMatriz(transpuesta, M, N);

    return 0;
}

