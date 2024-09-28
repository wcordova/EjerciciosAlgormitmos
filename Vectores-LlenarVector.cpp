#include <iostream>
#include <vector>

using namespace std;

void llenarVector(vector<int>& numeros) {
    int num;
    cout << "Ingrese 5 números: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> num;
        numeros.push_back(num); 
    }
}

void mostrarVector(const vector<int>& numeros) {
    cout << "Los números ingresados son: ";
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

