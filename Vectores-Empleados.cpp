#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Empleado {
    string nombre;
    int edad;
    float salarioPorHora;
    int horasTrabajadas;
    float salarioMensual;
};

void llenarDatosEmpleados(vector<Empleado>& empleados) {
    Empleado empleado;
    int cantidad;

    cout << "¿Cuántos empleados desea ingresar?: ";
    cin >> cantidad;
    cin.ignore();  

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese los datos del empleado " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, empleado.nombre); 

        cout << "Edad: ";
        cin >> empleado.edad;

        cout << "Salario por hora: ";
        cin >> empleado.salarioPorHora;

        cout << "Horas trabajadas en el mes: ";
        cin >> empleado.horasTrabajadas;

        empleado.salarioMensual = empleado.salarioPorHora * empleado.horasTrabajadas;

        cin.ignore();  

        empleados.push_back(empleado);
    }
}

void mostrarDatosEmpleados(const vector<Empleado>& empleados) {
    cout << "\nLista de empleados ingresados:\n";
    for (size_t i = 0; i < empleados.size(); i++) {
        cout << "Empleado " << i + 1 << ":\n";
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Edad: " << empleados[i].edad << endl;
        cout << "Salario por hora: $" << empleados[i].salarioPorHora << endl;
        cout << "Horas trabajadas en el mes: " << empleados[i].horasTrabajadas << endl;
        cout << "Salario mensual: $" << empleados[i].salarioMensual << endl;
        cout << "--------------------------" << endl;
    }
}

int main() {
    vector<Empleado> empleados;

    llenarDatosEmpleados(empleados);

    mostrarDatosEmpleados(empleados);

    return 0;
}

