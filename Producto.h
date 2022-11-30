#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Producto{
    protected:
        string nombre;
        double precio;
        int cantidad;
    public:
        Producto();
        Producto(string, double, int);
        ~Producto();
        void editProducto();
        string getNombreProducto();
        double getPrecioProducto();
        int getCantidadProducto();
        void setNombre(string);
        void setPrecio(double);
        void setCantidad(int);
};

#endif
