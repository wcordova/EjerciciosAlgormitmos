#include <iostream>
#include <string>

using namespace std;

// Definición de la enumeración Genero
enum Genero {
    ACCION,
    COMEDIA,
    DRAMA,
    CIENCIA_FICCION,
    TERROR,
    NUM_GENEROS // Esta constante puede usarse para saber cuántos géneros hay
};

// Función que devuelve el nombre del género como una cadena de texto
string obtenerNombreGenero(Genero genero) {
    switch(genero) {
        case ACCION: return "Acción";
        case COMEDIA: return "Comedia";
        case DRAMA: return "Drama";
        case CIENCIA_FICCION: return "Ciencia Ficción";
        case TERROR: return "Terror";
        default: return "Desconocido";
    }
}

int main() {
    int eleccion;

    cout << "Seleccione un género de pelicula:" << endl;
    cout << "0. Accion" << endl;
    cout << "1. Comedia" << endl;
    cout << "2. Drama" << endl;
    cout << "3. Ciencia Ficción" << endl;
    cout << "4. Terror" << endl;

    cout << "Ingrese el número correspondiente al género: ";
    cin >> eleccion;

    if (eleccion < 0 || eleccion >= NUM_GENEROS) {
        cout << "Opción inválida." << endl;
    } else {
        Genero generoSeleccionado = static_cast<Genero>(eleccion);
        cout << "Has seleccionado el género: " << obtenerNombreGenero(generoSeleccionado) << endl;
    }

    return 0;
}

