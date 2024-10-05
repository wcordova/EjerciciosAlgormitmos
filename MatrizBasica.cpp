#include <iostream>
using namespace std;

void imprimirMatriz(int matriz[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[2][2] = {{1, 2}, {3, 4}};
    
    imprimirMatriz(matriz);

    return 0;
}

