#include <iostream>
#include <cmath> // Para sqrt()

int main() {
    double a, b, c;
    double discriminante, raiz1, raiz2;
    int discriminanteCaso;

    std::cout << "Ingresa los coeficientes a, b y c: ";
    std::cin >> a >> b >> c;

    // Calcular el discriminante
    discriminante = b * b - 4 * a * c;
    
    // Determinar el caso del discriminante
    if (discriminante > 0) {
        discriminanteCaso = 1;
    } else if (discriminante == 0) {
        discriminanteCaso = 0;
    } else {
        discriminanteCaso = -1;
    }

    // Determinar la naturaleza de las raíces usando switch y if
    //discriminante > 0 ? 1 : (discriminante == 0 ? 0 : -1)
    switch (discriminante > 0 ? 1 : (discriminante == 0 ? 0 : -1)) {
        case 1:
            // Dos raíces reales y distintas
            raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            raiz2 = (-b - sqrt(discriminante)) / (2 * a);
            std::cout << "Las raíces son reales y distintas." << std::endl;
            std::cout << "Raíz 1: " << raiz1 << std::endl;
            std::cout << "Raíz 2: " << raiz2 << std::endl;
            break;
        case 0:
            // Una raíz real doble
            raiz1 = -b / (2 * a);
            std::cout << "La raíz es real y doble." << std::endl;
            std::cout << "Raíz: " << raiz1 << std::endl;
            break;
        case -1:
            // Raíces complejas
            double parteReal = -b / (2 * a);
            double parteImaginaria = sqrt(-discriminante) / (2 * a);
            std::cout << "Las raíces son complejas y distintas." << std::endl;
            std::cout << "Raíz 1: " << parteReal << " + " << parteImaginaria << "i" << std::endl;
            std::cout << "Raíz 2: " << parteReal << " - " << parteImaginaria << "i" << std::endl;
            break;
    }

    return 0;
}

