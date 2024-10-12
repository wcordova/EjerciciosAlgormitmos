#include <iostream>
#include <string>

int main() {
    std::string palabra = "algoritmo";

    std::cout << "Las letras en '" << palabra << "' son: ";
    for (size_t i = 0; i < palabra.length(); ++i) {
        char letra = palabra[i];
        std::cout << letra << ' ';
    }
    std::cout << std::endl;

    return 0;
}

