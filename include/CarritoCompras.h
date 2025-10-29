#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include <vector>
#include "ItemCarrito.h"
#include "Producto.h"

/**
 * @brief Representa el carrito de compras de un usuario.
 */
class CarritoCompras {
private:
    std::vector<ItemCarrito> listaItems; /**< Lista de productos y cantidades en el carrito */
public:
    /**
     * @brief Agrega un producto al carrito.
     * @param prod Producto a agregar.
     * @param cantidad Cantidad deseada.
     */
    void agregarProducto(const Producto& prod, int cantidad);

    /**
     * @brief Elimina un producto del carrito.
     * @param prod Producto a eliminar.
     */
    void eliminarProducto(const Producto& prod);

    /**
     * @brief Calcula el precio total de la compra.
     * @return Total en dinero de los productos del carrito.
     */
    float calcularTotal() const;
    // Métodos getter y setter opcionales
};

#endif // CARRITOCOMPRAS_H
