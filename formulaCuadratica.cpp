#include <iostream>
#include <cmath> // Para sqrt()

int main() {
    double a, b, c;
    double discriminante, raiz1, raiz2;

    std::cout << "Ingresa los coeficientes a, b y c: ";
    std::cin >> a >> b >> c;
	
    // Calcular el discriminante
    discriminante = b * b - 4 * a * c;
	
    if (discriminante > 0) {
        // Dos raíces reales y distintas
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        std::cout << "Las raices son reales y distintas." << std::endl;
        std::cout << "Raiz 1: " << raiz1 << std::endl;
        std::cout << "Raiz 2: " << raiz2 << std::endl;
    } else if (discriminante == 0) {
        // Una raíz real doble
        raiz1 = -b / (2 * a);
        std::cout << "La raiz es real y doble." << std::endl;
        std::cout << "Raiz: " << raiz1 << std::endl;
    } else {
        // Raíces complejas
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        std::cout << "Las raices son complejas y distintas." << std::endl;
        std::cout << "Raiz 1: " << parteReal << " + " << parteImaginaria << "i" << std::endl;
        std::cout << "Raiz 2: " << parteReal << " - " << parteImaginaria << "i" << std::endl;
    }

    return 0;
}

