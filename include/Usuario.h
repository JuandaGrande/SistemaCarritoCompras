#ifndef USUARIO_H
#define USUARIO_H

#include <string>

/**
 * @brief Clase que modela un usuario de la tienda en línea.
 */
class Usuario {
private:
    std::string nombre;          /**< Nombre del usuario */
    int id;                      /**< Identificador único */
    int cantidadCompras;         /**< Número de compras realizadas */
    int cantidadItemsComprados;  /**< Total de ítems comprados */
    float dineroGastado;         /**< Dinero total gastado */
public:
    /**
     * @brief Constructor de Usuario.
     * @param nombre Nombre del usuario.
     * @param id Identificador único.
     */
    Usuario(const std::string& nombre, int id);

    /**
     * @brief Destructor de Usuario.
     */
    ~Usuario();
    // Métodos getter y setter opcionales
};

#endif // USUARIO_H
