#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese la cantidad de términos de la secuencia de Fibonacci que desea ver: ";
    std::cin >> n;

    int a = 0, b = 1, siguiente;

    std::cout << "Secuencia de Fibonacci: ";

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            std::cout << a << " ";
        } else if (i == 2) {
            std::cout << b << " ";
        } else {
            siguiente = a + b;
            a = b;
            b = siguiente;
            std::cout << siguiente << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}

