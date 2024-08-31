#include <iostream>

int main() {
    int numero_secreto = 7; // N�mero que el usuario debe adivinar
    int intento; // Variable para almacenar el intento del usuario

    // Bucle do-while que se ejecuta al menos una vez
    do {
        std::cout << "Adivina el n�mero entre 1 y 10: ";
        std::cin >> intento; // Leer el intento del usuario

        if (intento != numero_secreto) {
            std::cout << "Incorrecto. Intenta nuevamente." << std::endl;
        }
    } while (intento != numero_secreto); // Repetir mientras el n�mero no sea correcto

    std::cout << "�Felicidades! Adivinaste el n�mero." << std::endl;

    return 0;
}

