#include "ItemCarrito.h"

ItemCarrito::ItemCarrito(const Producto& producto, int cantidad)
    : producto(producto), cantidad(cantidad) {}

ItemCarrito::~ItemCarrito() {}

const Producto& ItemCarrito::getProducto() const {
    return producto;
}

int ItemCarrito::getCantidad() const {
    return cantidad;
}

void ItemCarrito::setCantidad(int nuevaCantidad) {
    cantidad = nuevaCantidad;
}
