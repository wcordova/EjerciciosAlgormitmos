#include <iostream>
using namespace std;

// Funcion para calcular la suma de los primeros k números impares
int sumaImpares(int k) {
    int suma = 0;
    int numeroImpar = 1; // El primer numero impar es 1
    
    for (int i = 0; i < k; i++) {
        suma += numeroImpar;
        numeroImpar += 2; // para seguir la secuencia de los numeros impares
    }
    
    return suma;
}

int main() {
    int k;
    cout << "Ingresa el valor de k: ";
    cin >> k;
    
    int resultado = sumaImpares(k);
    cout << "La suma de los primeros " << k << " numeros impares es: " << resultado << endl;
    
    return 0;
}

