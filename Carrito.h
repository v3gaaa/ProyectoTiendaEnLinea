#ifndef CARRITO_H
#define CARRITO_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Producto.cpp"
using namespace std;

class Carrito{
    protected:
        vector<Producto> productosCarr;
        double totalCompra;
    public:
        Carrito();
        ~Carrito();
        void addProdCar();
        void borrarProdCar();
        string displayCarrito();
};

#endif
