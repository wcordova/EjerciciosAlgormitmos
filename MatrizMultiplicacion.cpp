#include <iostream>
using namespace std;

// Función para multiplicar dos matrices NxN
void multiplicarMatrices(int A[][2], int B[][2], int C[][2], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0; // Inicializar el valor
            for (int k = 0; k < n; k++) {
            	int result = A[i][k] * B[k][j];
                C[i][j] += A[i][k] * B[k][j];
                cout << i << "-" << j << ":" << A[i][k] << " * " << B[k][j] << " = " << result << "\n";
            }
        }
    }
}

// Función para imprimir una matriz NxN
void imprimirMatriz(int matriz[][2], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int N = 2;
    int A[N][N] = {{1, 2}, {3, 4}};
    int B[N][N] = {{5, 6}, {7, 8}};
    int C[N][N]; // Matriz resultante

    // Multiplicar matrices A y B
    multiplicarMatrices(A, B, C, N);
    
    // Imprimir matriz resultante
    cout << "Matriz resultante de A x B:" << endl;
    imprimirMatriz(C, N);
    
    return 0;
}

