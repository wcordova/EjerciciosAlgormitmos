#include <iostream>
#include <string>

int main() {
    std::string texto, texto_invertido;

    std::cout << "Ingresa una cadena: ";
    std::getline(std::cin, texto);

    // Invertir la cadena
    for (int i = texto.length() - 1; i >= 0; --i) {
        texto_invertido += texto[i];
    }
    std::cout << "palabra invertirda: " << texto_invertido << std::endl;

    // Comparar la cadena original con la invertida
    if (texto == texto_invertido) {
        std::cout << "La cadena es un palíndromo." << std::endl;
    } else {
        std::cout << "La cadena no es un palíndromo." << std::endl;
    }

    return 0;
}

