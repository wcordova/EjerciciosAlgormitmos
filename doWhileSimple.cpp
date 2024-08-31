#include <iostream>

int main() {
    int numero_secreto = 7; // Número que el usuario debe adivinar
    int intento; // Variable para almacenar el intento del usuario

    // Bucle do-while que se ejecuta al menos una vez
    do {
        std::cout << "Adivina el número entre 1 y 10: ";
        std::cin >> intento; // Leer el intento del usuario

        if (intento != numero_secreto) {
            std::cout << "Incorrecto. Intenta nuevamente." << std::endl;
        }
    } while (intento != numero_secreto); // Repetir mientras el número no sea correcto

    std::cout << "¡Felicidades! Adivinaste el número." << std::endl;

    return 0;
}

