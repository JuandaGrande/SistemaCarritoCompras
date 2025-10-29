#include "Usuario.h"

/**
 * @brief Constructor de Usuario.
 * @param nombre Nombre del usuario.
 * @param id Identificador único.
 */
Usuario::Usuario(const std::string& nombre, int id)
    : nombre(nombre), id(id), cantidadCompras(0), cantidadItemsComprados(0), dineroGastado(0.0f) {
    // Código adicional de inicialización si es necesario
}

/**
 * @brief Destructor de Usuario.
 */
Usuario::~Usuario() {
    // No hay recursos explícitos que liberar
}
