#include <iostream>
using namespace std;

// Función recursiva para sumar dos números n veces
int sumarTresVeces(int num1, int num2, int veces) {
    if (veces == 0) {
        return 0; // Caso base: si no se debe sumar más veces
    } else {
        return (num1 + num2) + sumarTresVeces(num1, num2, veces - 1); // Llamada recursiva
    }
}

int main() {
    int numero1, numero2;
    cout << "Ingresa el primer número entero: ";
    cin >> numero1;
    cout << "Ingresa el segundo número entero: ";
    cin >> numero2;

    int resultado = sumarTresVeces(numero1, numero2, 3); // Llamamos a la función 3 veces
    cout << "La suma de los dos números tres veces seguidas es: " << resultado << endl;

    return 0;
}

