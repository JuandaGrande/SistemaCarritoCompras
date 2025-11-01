#include <iostream>
#include "Producto.h"
#include "ItemCarrito.h"
#include "CarritoCompras.h"
#include "Usuario.h"

void mostrarMenu() {
    std::cout << "\nSistema de Carrito de Compras\n";
    std::cout << "1. Agregar producto\n";
    std::cout << "2. Eliminar producto\n";
    std::cout << "3. Mostrar total de la compra\n";
    std::cout << "4. Salir\n";
    std::cout << "Ingrese una opción: ";
}

int main() {
    Usuario usuario("Juan Perez", 1001);
    CarritoCompras carrito;

    // Productos disponibles para agregar
    Producto prod1("Laptop", 2500.0, 12);
    Producto prod2("Mouse", 15.5, 100);
    Producto prod3("Teclado", 45.0, 50);

    bool running = true;
    while (running) {
        mostrarMenu();

        int opcion;
        std::cin >> opcion;
        std::cin.ignore();  // Limpiar buffer

        switch (opcion) {
            case 1: {
                std::cout << "Seleccione producto a agregar (1: Laptop, 2: Mouse, 3: Teclado): ";
                int prodOpt;
                std::cin >> prodOpt;
                std::cin.ignore();

                int cantidad;
                std::cout << "Ingrese cantidad a agregar: ";
                std::cin >> cantidad;
                std::cin.ignore();

                if (cantidad <= 0) {
                    std::cout << "Cantidad inválida.\n";
                    break;
                }

                switch (prodOpt) {
                    case 1: carrito.agregarProducto(prod1, cantidad); break;
                    case 2: carrito.agregarProducto(prod2, cantidad); break;
                    case 3: carrito.agregarProducto(prod3, cantidad); break;
                    default: std::cout << "Producto inválido.\n"; break;
                }
                std::cout << "Producto(s) agregado(s) al carrito.\n";
                break;
            }
            case 2: {
                std::cout << "Seleccione producto a eliminar (1: Laptop, 2: Mouse, 3: Teclado): ";
                int prodOpt;
                std::cin >> prodOpt;
                std::cin.ignore();

                switch (prodOpt) {
                    case 1: carrito.eliminarProducto(prod1); break;
                    case 2: carrito.eliminarProducto(prod2); break;
                    case 3: carrito.eliminarProducto(prod3); break;
                    default: std::cout << "Producto inválido.\n"; break;
                }
                std::cout << "Producto(s) eliminado(s) del carrito.\n";
                break;
            }
            case 3:
                std::cout << "Total actual de la compra: $" << carrito.calcularTotal() << std::endl;
                break;
            case 4:
                std::cout << "Saliendo del sistema...\n";
                running = false;
                break;
            default:
                std::cout << "Opción no válida.\n";
                break;
        }
    }

    return 0;
}
