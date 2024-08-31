#include <iostream>

int main() {
    int opcion;
    double num1, num2, resultado;

    std::cout << "Calculadora simple" << std::endl;
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicación" << std::endl;
    std::cout << "4. División" << std::endl;
    std::cout << "Selecciona una opción (1-4): ";
    std::cin >> opcion;

    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            std::cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << std::endl;
            break;
        case 2:
            resultado = num1 - num2;
            std::cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << std::endl;
            break;
        case 3:
            resultado = num1 * num2;
            std::cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                std::cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << std::endl;
            } else {
                std::cout << "Error: División por cero no permitida." << std::endl;
            }
            break;
        default:
            std::cout << "Opción no válida. Por favor selecciona una opción entre 1 y 4." << std::endl;
            break;
    }

    return 0;
}

