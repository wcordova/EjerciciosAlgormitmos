#include <iostream>

enum DiaSemana {
    LUNES,    // 0
    MARTES,   // 1
    MIERCOLES, // 2
    JUEVES,   // 3
    VIERNES,  // 4
    SABADO,   // 5
    DOMINGO   // 6
};

int main() {
    DiaSemana hoy = MIERCOLES;
    
    // Operaciones con valores ordinales
    std::cout << hoy % 7 << std::endl;
    DiaSemana manana = static_cast<DiaSemana>((hoy + 1) % 7); // Día siguiente
    DiaSemana ayer = static_cast<DiaSemana>((hoy - 1 + 7) % 7); // Día anterior

    // Imprimir el día de hoy y el día siguiente
    std::cout << "Hoy es MIERCOLES." << std::endl;
    std::cout << "Manana sera ";

    switch (manana) {
        case LUNES: std::cout << "LUNES"; break;
        case MARTES: std::cout << "MARTES"; break;
        case MIERCOLES: std::cout << "MIERCOLES"; break;
        case JUEVES: std::cout << "JUEVES"; break;
        case VIERNES: std::cout << "VIERNES"; break;
        case SABADO: std::cout << "SABADO"; break;
        case DOMINGO: std::cout << "DOMINGO"; break;
    }
    std::cout << "." << std::endl;

    std::cout << "Ayer fue ";

    switch (ayer) {
        case LUNES: std::cout << "LUNES"; break;
        case MARTES: std::cout << "MARTES"; break;
        case MIERCOLES: std::cout << "MIERCOLES"; break;
        case JUEVES: std::cout << "JUEVES"; break;
        case VIERNES: std::cout << "VIERNES"; break;
        case SABADO: std::cout << "SABADO"; break;
        case DOMINGO: std::cout << "DOMINGO"; break;
    }
    std::cout << "." << std::endl;

    return 0;
}

