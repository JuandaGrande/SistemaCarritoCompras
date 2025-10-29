#include "Producto.h"

Producto::Producto(const std::string& nombre, float precio, int stock)
    : nombre(nombre), precio(precio), stock(stock) {}

std::string Producto::getNombre() const {
    return nombre;
}

float Producto::getPrecio() const {
    return precio;
}

int Producto::getStock() const {
    return stock;
}
