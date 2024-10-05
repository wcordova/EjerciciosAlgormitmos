#include <iostream>
#include <string>
using namespace std;

// Función para ingresar los datos de los productos
void ingresarProductos(string productos[][3], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        cin >> productos[i][0];  // Nombre

        cout << "Ingrese la cantidad del producto " << i + 1 << ": ";
        cin >> productos[i][1];  // Cantidad

        cout << "Ingrese el precio del producto " << i + 1 << ": ";
        cin >> productos[i][2];  // Precio
        cout << endl;
    }
}

// Función para mostrar los productos ingresados
void mostrarProductos(string productos[][3], int n) {
    cout << "Listado de productos:" << endl;
    cout << "Nombre\tCantidad\tPrecio" << endl;
    for (int i = 0; i < n; i++) {
        cout << productos[i][0] << "\t" << productos[i][1] << "\t\t" << productos[i][2] << endl;
    }
}

int main() {
    const int N = 3;  // Número de productos
    string productos[N][3];  // Matriz para almacenar nombre, cantidad y precio

    // Ingresar datos de productos
    ingresarProductos(productos, N);

    // Mostrar productos
    mostrarProductos(productos, N);

    return 0;
}

