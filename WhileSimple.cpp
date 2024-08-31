#include <iostream>

int main() {
    int contador = 0;

    // Bucle while que se ejecuta mientras contador sea menor que 5
    while (contador < 5) {
        std::cout << "Contador: " << contador << std::endl;
        contador++; // Incrementa el valor de contador en 1 en cada iteración
    }

    std::cout << "Bucle terminado." << std::endl;
    return 0;
}

