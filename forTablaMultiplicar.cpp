#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un número entero para mostrar su tabla de multiplicar: ";
    std::cin >> numero;

    // Bucle for para iterar desde 1 hasta 10
    for (int i = 1; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}

