#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

/**
 * @brief Clase que representa un producto disponible en la tienda.
 */
class Producto {
private:
    std::string nombre;   /**< Nombre del producto */
    float precio;         /**< Precio unitario del producto */
    int stock;            /**< Cantidad disponible en inventario */
public:
    /**
     * @brief Constructor de Producto.
     * @param nombre Nombre del producto.
     * @param precio Precio unitario.
     * @param stock Cantidad disponible.
     */
    Producto(const std::string& nombre, float precio, int stock);

    /**
     * @brief Obtiene el nombre del producto.
     * @return Nombre como string.
     */
    std::string getNombre() const;

    /**
     * @brief Obtiene el precio del producto.
     * @return Precio como float.
     */
    float getPrecio() const;

    /**
     * @brief Obtiene el stock disponible.
     * @return Stock como int.
     */
    int getStock() const;

    // Otros métodos setter/getter si lo deseas
};

#endif // PRODUCTO_H
