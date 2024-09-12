#include <iostream>
#include <cmath>
using namespace std;

// Función para obtener el dígito en la posición dada
int obtenerDigito(int numero, int posicion) {
    // Convertir la posición a 0-indexada (posición desde la derecha)
    int longitud = log10(numero) + 1; // Calculamos el número de dígitos
    int posDesdeDerecha = longitud - posicion;
    
    // Extraemos el dígito en la posición deseada
    int digito = (numero / static_cast<int>(pow(10, posDesdeDerecha))) % 10;
    
    return digito;
}

int main() {
    int numero, posicion;
    cout << "Ingresa un numero entero: ";
    cin >> numero;
    cout << "Ingresa la posición del digito que deseas obtener: ";
    cin >> posicion;
    
    // Validar si la posición es válida
    int longitud = log10(numero) + 1;
    if (posicion > longitud || posicion < 1) {
        cout << "La posicion es invalida." << endl;
    } else {
        int digito = obtenerDigito(numero, posicion);
        cout << "El digito en la posicion " << posicion << " es: " << digito << endl;
    }
    
    return 0;
}

