#include <iostream>

int main() {
    int num;

    std::cout << "Ingresa un numero: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "El numero es positivo." << std::endl;
    } else if (num < 0) {
        std::cout << "El numero es negativo." << std::endl;
    } else {
        std::cout << "El numero es cero." << std::endl;
    }

    return 0;
}
