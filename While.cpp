#include <iostream>

int main() {
    int n;
    int suma = 0; // Variable para almacenar la suma
    int i = 1;    // Variable de control para el bucle

    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> n;

    // Bucle while que se ejecuta mientras i sea menor o igual a n
    while (i <= n) {
        suma += i; // Suma el valor de i a la variable suma
        i++;       // Incrementa i en 1 en cada iteración
    }

    std::cout << "La suma de los primeros " << n << " números naturales es: " << suma << std::endl;

    return 0;
}

