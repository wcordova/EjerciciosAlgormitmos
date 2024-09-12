#include <iostream>
#include <string>
using namespace std;

// Definici�n de una estructura para un Producto
struct Producto {
    int codigo;
    string nombre;
    int cantidad;
};

// Definir un tama�o m�ximo para el inventario
const int MAX_PRODUCTOS = 100;
Producto inventario[MAX_PRODUCTOS];
int totalProductos = 0;

// Funci�n para agregar un producto al inventario
void agregarProducto() {
    if (totalProductos < MAX_PRODUCTOS) {
        Producto nuevoProducto;
        cout << "Ingrese el c�digo del producto: ";
        cin >> nuevoProducto.codigo;
        cin.ignore();  // Limpiar el buffer antes de leer cadenas
        cout << "Ingrese el nombre del producto: ";
        getline(cin, nuevoProducto.nombre);  // Leer el nombre con espacios incluidos
        cout << "Ingrese la cantidad del producto: ";
        cin >> nuevoProducto.cantidad;
        
        inventario[totalProductos] = nuevoProducto;
        totalProductos++;  // Incrementar el contador de productos
        
        cout << "Producto agregado exitosamente.\n";
        cout << "Total de productos: " << totalProductos << endl;  // Mensaje de depuraci�n
    } else {
        cout << "El inventario est� lleno.\n";
    }
}

// Funci�n para mostrar todos los productos del inventario
void mostrarProductos() {
    if (totalProductos == 0) {
        cout << "No hay productos en el inventario.\n";
    } else {
        cout << "Inventario de productos:\n";
        for (int i = 0; i < totalProductos; i++) {
            cout << "C�digo: " << inventario[i].codigo
                 << " | Nombre: " << inventario[i].nombre
                 << " | Cantidad: " << inventario[i].cantidad << endl;
        }
    }
}

// Funci�n para actualizar la cantidad de un producto
void actualizarProducto() {
    int codigo;
    cout << "Ingrese el c�digo del producto a actualizar: ";
    cin >> codigo;
    
    for (int i = 0; i < totalProductos; i++) {
        if (inventario[i].codigo == codigo) {
            cout << "Ingrese la nueva cantidad: ";
            cin >> inventario[i].cantidad;
            cout << "Producto actualizado exitosamente.\n";
            return;
        }
    }
    cout << "Producto no encontrado.\n";
}

// Funci�n para eliminar un producto del inventario
void eliminarProducto() {
    int codigo;
    cout << "Ingrese el c�digo del producto a eliminar: ";
    cin >> codigo;
    
    for (int i = 0; i < totalProductos; i++) {
        if (inventario[i].codigo == codigo) {
            for (int j = i; j < totalProductos - 1; j++) {
                inventario[j] = inventario[j + 1];
            }
            totalProductos--;
            cout << "Producto eliminado exitosamente.\n";
            return;
        }
    }
    cout << "Producto no encontrado.\n";
}

// Funci�n principal con men�
int main() {
    int opcion;
    do {
        cout << "\n--- Sistema de Gesti�n de Inventario ---\n";
        cout << "1. Agregar producto\n";
        cout << "2. Mostrar productos\n";
        cout << "3. Actualizar cantidad de producto\n";
        cout << "4. Eliminar producto\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opci�n: ";
        cin >> opcion;
        cin.ignore();  // Limpiar el buffer despu�s de leer un n�mero
        
        switch (opcion) {
            case 1:
                agregarProducto();
                break;
            case 2:
                mostrarProductos();
                break;
            case 3:
                actualizarProducto();
                break;
            case 4:
                eliminarProducto();
                break;
            case 5:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opci�n no v�lida.\n";
        }
    } while (opcion != 5);
    
    return 0;
}

