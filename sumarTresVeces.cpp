#include <iostream>
using namespace std;

// Funci�n recursiva para sumar dos n�meros n veces
int sumarTresVeces(int num1, int num2, int veces) {
    if (veces == 0) {
        return 0; // Caso base: si no se debe sumar m�s veces
    } else {
        return (num1 + num2) + sumarTresVeces(num1, num2, veces - 1); // Llamada recursiva
    }
}

int main() {
    int numero1, numero2;
    cout << "Ingresa el primer n�mero entero: ";
    cin >> numero1;
    cout << "Ingresa el segundo n�mero entero: ";
    cin >> numero2;

    int resultado = sumarTresVeces(numero1, numero2, 3); // Llamamos a la funci�n 3 veces
    cout << "La suma de los dos n�meros tres veces seguidas es: " << resultado << endl;

    return 0;
}

