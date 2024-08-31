#include <iostream>

enum DiaDeLaSemana {
    LUNES = 1,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};

int main() {
    int opcion;
    std::cout << "Selecciona un día de la semana (1-7): " << std::endl;
    std::cout << "1. Lunes" << std::endl;
    std::cout << "2. Martes" << std::endl;
    std::cout << "3. Miércoles" << std::endl;
    std::cout << "4. Jueves" << std::endl;
    std::cout << "5. Viernes" << std::endl;
    std::cout << "6. Sábado" << std::endl;
    std::cout << "7. Domingo" << std::endl;
    std::cin >> opcion;

    DiaDeLaSemana dia = static_cast<DiaDeLaSemana>(opcion);

    switch (dia) {
        case LUNES:
            std::cout << "Hoy es Lunes." << std::endl;
            break;
        case MARTES:
            std::cout << "Hoy es Martes." << std::endl;
            break;
        case MIERCOLES:
            std::cout << "Hoy es Miércoles." << std::endl;
            break;
        case JUEVES:
            std::cout << "Hoy es Jueves." << std::endl;
            break;
        case VIERNES:
            std::cout << "Hoy es Viernes." << std::endl;
            break;
        case SABADO:
            std::cout << "Hoy es Sábado." << std::endl;
            break;
        case DOMINGO:
            std::cout << "Hoy es Domingo." << std::endl;
            break;
        default:
            std::cout << "Opción no válida. Por favor selecciona un número entre 1 y 7." << std::endl;
            break;
    }

    return 0;
}

