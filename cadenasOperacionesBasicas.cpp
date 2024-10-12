#include <iostream>
#include <string>

int main() {
    std::string saludo = "Hola";
    std::string nombre = "Mundo";

    // Concatenación
    std::string mensaje = saludo + " " + nombre + "!";
    std::cout << mensaje << std::endl;

    // Acceder a caracteres individuales
    char primera_letra = saludo[2];
    std::cout << "La segunda letra de '" << saludo << "' es '" << primera_letra << "'" << std::endl;

    // Longitud de la cadena
    std::cout << "La longitud del mensaje es: " << mensaje.length() << std::endl;

    return 0;
}

