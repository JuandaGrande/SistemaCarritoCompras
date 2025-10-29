#include "CarritoCompras.h"

/**
 * @brief Agrega un producto al carrito.
 * @param prod Producto a agregar.
 * @param cantidad Cantidad deseada.
 */
void CarritoCompras::agregarProducto(const Producto& prod, int cantidad) {
    // Busca si el producto ya existe en el carrito
    for (auto& item : listaItems) {
        // Supongamos que comparas por nombre
        // (puede mejorar si tienes ID único en Producto)
        if (item.getProducto().getNombre() == prod.getNombre()) {
            // Si existe, suma la cantidad
            item.setCantidad(item.getCantidad() + cantidad);
            return;
        }
    }
    // Si no existe, lo agrega como nuevo item
    listaItems.emplace_back(prod, cantidad);
}   

/**
 * @brief Elimina un producto del carrito.
 * @param prod Producto a eliminar.
 */
void CarritoCompras::eliminarProducto(const Producto& prod) {
    for (auto it = listaItems.begin(); it != listaItems.end(); ++it) {
        if (it->getProducto().getNombre() == prod.getNombre()) {
            listaItems.erase(it);
            return;
        }
    }
}

/**
 * @brief Calcula el total de la compra.
 * @return Total en dinero de los productos del carrito.
 */
float CarritoCompras::calcularTotal() const {
    float total = 0.0f;
    for (const auto& item : listaItems) {
        total += item.getProducto().getPrecio() * item.getCantidad();
    }
    return total;
}
