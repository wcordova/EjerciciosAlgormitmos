#include <iostream>
#include <string>

int main() {
    std::string texto = "Este es un ejemplo de cadena.";

    // Subcadena
    std::string subcadena = texto.substr(11, 7);  // "ejemplo"
    std::cout << "Subcadena: " << subcadena << std::endl;

    // Encontrar una palabra
    size_t posicion = texto.find("cadena");
    if (posicion != std::string::npos) {
        std::cout << "'cadena' encontrada en la posición: " << posicion << std::endl;
    }

    // Reemplazar una palabra
    texto.replace(posicion, 6, "texto");
    std::cout << "Cadena modificada: " << texto << std::endl;

    // Insertar texto
    texto.insert(0, "¡Hola! ");
    std::cout << "Cadena con inserción: " << texto << std::endl;

    // Eliminar texto
    texto.erase(0, 7);  // Elimina "¡Hola! "
    std::cout << "Cadena después de eliminar: " << texto << std::endl;

    return 0;
}

