#include <iostream>
#include <string>

using namespace std;

// Definici�n de la enumeraci�n Genero
enum Genero {
    ACCION,
    COMEDIA,
    DRAMA,
    CIENCIA_FICCION,
    TERROR,
    NUM_GENEROS // Esta constante puede usarse para saber cu�ntos g�neros hay
};

// Funci�n que devuelve el nombre del g�nero como una cadena de texto
string obtenerNombreGenero(Genero genero) {
    switch(genero) {
        case ACCION: return "Acci�n";
        case COMEDIA: return "Comedia";
        case DRAMA: return "Drama";
        case CIENCIA_FICCION: return "Ciencia Ficci�n";
        case TERROR: return "Terror";
        default: return "Desconocido";
    }
}

int main() {
    int eleccion;

    cout << "Seleccione un g�nero de pelicula:" << endl;
    cout << "0. Accion" << endl;
    cout << "1. Comedia" << endl;
    cout << "2. Drama" << endl;
    cout << "3. Ciencia Ficci�n" << endl;
    cout << "4. Terror" << endl;

    cout << "Ingrese el n�mero correspondiente al g�nero: ";
    cin >> eleccion;

    if (eleccion < 0 || eleccion >= NUM_GENEROS) {
        cout << "Opci�n inv�lida." << endl;
    } else {
        Genero generoSeleccionado = static_cast<Genero>(eleccion);
        cout << "Has seleccionado el g�nero: " << obtenerNombreGenero(generoSeleccionado) << endl;
    }

    return 0;
}

