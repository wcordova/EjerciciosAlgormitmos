#include <iostream>

int main() {
    int numero;
    int suma = 0;

    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    // Bucle do-while que suma los dígitos del número
    do {
        suma += numero % 10; // Suma el último dígito del número a la variable suma
        numero /= 10;        // Elimina el último dígito del número
    } while (numero > 0);    // Repetir mientras queden dígitos en el número

    std::cout << "La suma de los dígitos es: " << suma << std::endl;

    return 0;
}

