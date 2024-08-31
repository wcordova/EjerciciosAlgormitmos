#include <iostream>

int main() {
    int edad;
    bool esEstudiante;
    bool esMiembro;

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    std::cout << "¿Eres estudiante? (1 para si, 0 para no): ";
    std::cin >> esEstudiante;

    std::cout << "¿Eres miembro del parque? (1 para si, 0 para no): ";
    std::cin >> esMiembro;

    if ((edad < 18 || edad >= 65) && esEstudiante) {
        std::cout << "Recibes un descuento porque eres estudiante y menor de 18 o mayor de 65 anios." << std::endl;
    } else if (esMiembro || esEstudiante) {
        std::cout << "Recibes un descuento porque eres miembro o estudiante." << std::endl;
    } else {
        std::cout << "No recibes un descuento." << std::endl;
    }

    return 0;
}

