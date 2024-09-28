#include <iostream>
#include <vector>

using namespace std;

void llenarVector(vector<int>& numeros) {
    int num;
    cout << "Ingrese 5 n�meros: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> num;
        numeros.push_back(num); 
    }
}

void mostrarVector(const vector<int>& numeros) {
    cout << "Los n�meros ingresados son: ";
    for (size_t i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";  
    }
    cout << endl;
}

int main() {
    vector<int> numeros;

    llenarVector(numeros);

    mostrarVector(numeros);

    return 0;
}

