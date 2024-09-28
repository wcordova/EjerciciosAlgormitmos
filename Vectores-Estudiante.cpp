#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

void llenarDatosEstudiantes(vector<Estudiante>& estudiantes) {
    Estudiante estudiante;
    int cantidad;

    cout << "¿Cuántos estudiantes desea ingresar?: ";
    cin >> cantidad;
    cin.ignore();  

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese los datos del estudiante " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, estudiante.nombre); 

        cout << "Edad: ";
        cin >> estudiante.edad;

        cout << "Promedio: ";
        cin >> estudiante.promedio;

        cin.ignore();  

        estudiantes.push_back(estudiante);
    }
}

void mostrarDatosEstudiantes(const vector<Estudiante>& estudiantes) {
    cout << "\nLista de estudiantes ingresados:\n";
    for (size_t i = 0; i < estudiantes.size(); i++) {
        cout << "Estudiante " << i + 1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        cout << "--------------------------" << endl;
    }
}

int main() {
    vector<Estudiante> estudiantes;

    llenarDatosEstudiantes(estudiantes);

    mostrarDatosEstudiantes(estudiantes);

    return 0;
}

