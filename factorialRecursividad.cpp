#include <iostream>
using namespace std;

// Funci�n recursiva para calcular el factorial de un n�mero
int factorial(int n) {
    if (n == 0) {
        return 1; // Caso base: factorial de 0 es 1
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
    } else {
        int resultado = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }

    return 0;
}

