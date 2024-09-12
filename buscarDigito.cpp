#include <iostream>
#include <cmath>
using namespace std;

// Funci�n para obtener el d�gito en la posici�n dada
int obtenerDigito(int numero, int posicion) {
    // Convertir la posici�n a 0-indexada (posici�n desde la derecha)
    int longitud = log10(numero) + 1; // Calculamos el n�mero de d�gitos
    int posDesdeDerecha = longitud - posicion;
    
    // Extraemos el d�gito en la posici�n deseada
    int digito = (numero / static_cast<int>(pow(10, posDesdeDerecha))) % 10;
    
    return digito;
}

int main() {
    int numero, posicion;
    cout << "Ingresa un numero entero: ";
    cin >> numero;
    cout << "Ingresa la posici�n del digito que deseas obtener: ";
    cin >> posicion;
    
    // Validar si la posici�n es v�lida
    int longitud = log10(numero) + 1;
    if (posicion > longitud || posicion < 1) {
        cout << "La posicion es invalida." << endl;
    } else {
        int digito = obtenerDigito(numero, posicion);
        cout << "El digito en la posicion " << posicion << " es: " << digito << endl;
    }
    
    return 0;
}

