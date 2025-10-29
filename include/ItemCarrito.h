#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include "Producto.h"

/**
 * @brief Representa un producto agregado al carrito, incluyendo la cantidad.
 */
class ItemCarrito {
private:
    Producto producto;    /**< Producto seleccionado */
    int cantidad;         /**< Cantidad agregada al carrito */
public:
    /**
     * @brief Constructor de ItemCarrito.
     * @param producto Producto a agregar.
     * @param cantidad Cantidad seleccionada.
     */
    ItemCarrito(const Producto& producto, int cantidad);

    /**
     * @brief Destructor de ItemCarrito.
     */
    ~ItemCarrito();

    /**
     * @brief Obtiene el producto almacenado en este ítem.
     * @return Referencia constante al producto.
     */
    const Producto& getProducto() const;

    /**
     * @brief Obtiene la cantidad de producto en el ítem.
     * @return Cantidad de productos.
     */
    int getCantidad() const;

    /**
     * @brief Actualiza la cantidad de producto en el ítem.
     * @param nuevaCantidad Nuevo valor para cantidad.
     */
    void setCantidad(int nuevaCantidad);
};

#endif // ITEMCARRITO_H
