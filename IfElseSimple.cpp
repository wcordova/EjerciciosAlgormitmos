#include <iostream>

int main() {
    int edad;
    bool tieneLicencia;

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    std::cout << "¿Tienes licencia de conducir? (1 para si, 0 para no): ";
    std::cin >> tieneLicencia;

    if (edad >= 18 && tieneLicencia) {
        std::cout << "Puedes conducir." << std::endl;
    } else if (edad >= 18 && !tieneLicencia) {
        std::cout << "No puedes conducir porque no tienes licencia." << std::endl;
    } else {
        std::cout << "No puedes conducir porque eres menor de edad." << std::endl;
    }

    return 0;
}
