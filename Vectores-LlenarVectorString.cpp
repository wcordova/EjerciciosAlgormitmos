#include <iostream>
#include <vector>
#include <string>

using namespace std;

void llenarVector(vector<string>& nombres) {
    string nombre;
    cout << "Ingrese 5 nombres: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nombre " << i + 1 << ": ";
        getline(cin, nombre);  
        nombres.push_back(nombre);  
    }
}

void mostrarVector(const vector<string>& nombres) {
    cout << "Los nombres ingresados son: ";
    for (size_t i = 0; i < nombres.size(); i++) {
        cout << nombres[i] << " ";  
    }
    cout << endl;
}

int main() {
    vector<string> nombres;

    llenarVector(nombres);

    mostrarVector(nombres);

    return 0;
}

