#include <iostream>

int main() {
    int a = 17;  
    int b = 5;   

    // Operación de división
    int resultado_division = a / b; // Resultado de 17 dividido por 5
    int resultado_modulo = a % b;   // Residuo de 17 dividido por 5

    // Imprimir los resultados
    std::cout << "Resultado de la división: " << resultado_division << std::endl; // Imprime 3
    std::cout << "Residuo de la división: " << resultado_modulo << std::endl;   // Imprime 2

    return 0;
}

