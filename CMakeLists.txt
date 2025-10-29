cmake_minimum_required(VERSION 3.10)
project(CarritoComprasProject)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(include)
set(SOURCE_FILES
    src/main.cpp
    src/Producto.cpp
    src/ItemCarrito.cpp
    src/CarritoCompras.cpp
    src/Usuario.cpp
)
add_executable(carrito_compras ${SOURCE_FILES})
