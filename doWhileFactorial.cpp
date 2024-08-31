#include <iostream>

int main() {
    int n;
    int factorial = 1; // Inicializaci�n del factorial en 1
    int i = 1;         // Variable de control para el bucle

    std::cout << "Ingrese un n�mero entero positivo: ";
    std::cin >> n;

    // Bucle do-while que calcula el factorial
    do {
        factorial *= i; // Multiplica el valor actual de factorial por i
        i++;            // Incrementa i en 1 en cada iteraci�n
    } while (i <= n);    // El bucle se repite mientras i sea menor o igual a n

    std::cout << "El factorial de " << n << " es: " << factorial << std::endl;

    return 0;
}

