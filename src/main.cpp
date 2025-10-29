/**
 * @file main.cpp
 * @brief Programa principal para probar el sistema de carrito de compras.
 */

#include <iostream>
#include "../include/Producto.h"
#include "../include/ItemCarrito.h"
#include "../include/CarritoCompras.h"
#include "../include/Usuario.h"

/**
 * @brief Función principal del sistema de carrito de compras.
 * 
 * Crea productos, usuarios y realiza operaciones de agregar/eliminar productos,
 * mostrando el total al final.
 */
int main() {
    // Crear productos de ejemplo
    Producto prod1("Laptop", 2500.0, 12);
    Producto prod2("Mouse", 15.5, 100);

    // Crear usuario
    Usuario usuario("Juan Perez", 1001);

    // Crear carrito de compras
    CarritoCompras carrito;

    // Agregar productos al carrito
    carrito.agregarProducto(prod1, 1);
    carrito.agregarProducto(prod2, 2);

    // Mostrar total de la compra
    std::cout << "Total de la compra: $" << carrito.calcularTotal() << std::endl;

    // Eliminar producto del carrito
    carrito.eliminarProducto(prod2);
    std::cout << "Total después de eliminar Mouse: $" << carrito.calcularTotal() << std::endl;

    system("pause");
    return 0;
}
