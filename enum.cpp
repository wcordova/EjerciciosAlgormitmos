#include <iostream>

// Definición del enum
enum Color {
    ROJO,     // 0
    VERDE,    // 1
    AZUL      // 2
};

int main() {
    // Declaración e inicialización de una variable de tipo Color
    Color colorFavorito = VERDE;

    // Uso del enum en una estructura de control
    switch (colorFavorito) {
        case ROJO:
            std::cout << "El color favorito es rojo." << std::endl;
            break;
        case VERDE:
            std::cout << "El color favorito es verde." << std::endl;
            break;
        case AZUL:
            std::cout << "El color favorito es azul." << std::endl;
            break;
        default:
            std::cout << "Color no reconocido." << std::endl;
            break;
    }

    return 0;
}

