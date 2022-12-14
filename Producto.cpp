#include <iostream>
#include <stdlib.h>
#include <string>
#include "Producto.h"
using namespace std;

// Constructor
Producto::Producto(){}
Producto::Producto(string _nombre, double _precio, int _cantidad){
    nombre = _nombre;
    precio = _precio;
    cantidad = _cantidad;
}

// Destructor
Producto::~Producto(){
}

// Get Nombre Producto
string Producto::getNombreProducto(){
    return nombre;
}
double Producto::getPrecioProducto(){
    return precio;
}
int Producto::getCantidadProducto(){
    return cantidad;
}

void Producto::setNombre(string _nombre){
    nombre = _nombre;
}
void Producto::setPrecio(double _precio){
    precio = _precio;
}
void Producto::setCantidad(int _cantidad){
    cantidad = _cantidad;
}
