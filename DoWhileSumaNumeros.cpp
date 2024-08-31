#include <iostream>

int main() {
    int numero;
    int suma = 0;

    std::cout << "Ingrese un n�mero entero positivo: ";
    std::cin >> numero;

    // Bucle do-while que suma los d�gitos del n�mero
    do {
        suma += numero % 10; // Suma el �ltimo d�gito del n�mero a la variable suma
        numero /= 10;        // Elimina el �ltimo d�gito del n�mero
    } while (numero > 0);    // Repetir mientras queden d�gitos en el n�mero

    std::cout << "La suma de los d�gitos es: " << suma << std::endl;

    return 0;
}

