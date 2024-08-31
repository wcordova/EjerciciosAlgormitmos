#include <iostream>

int main() {
    int opcion;
    double num1, num2, resultado;

    std::cout << "Calculadora simple" << std::endl;
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicaci�n" << std::endl;
    std::cout << "4. Divisi�n" << std::endl;
    std::cout << "Selecciona una opci�n (1-4): ";
    std::cin >> opcion;

    std::cout << "Ingresa el primer n�mero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo n�mero: ";
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
                std::cout << "Error: Divisi�n por cero no permitida." << std::endl;
            }
            break;
        default:
            std::cout << "Opci�n no v�lida. Por favor selecciona una opci�n entre 1 y 4." << std::endl;
            break;
    }

    return 0;
}

