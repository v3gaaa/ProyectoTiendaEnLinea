#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Carrito.h"
#include "Producto.cpp"
using namespace std;

//Variable global de los productos añadidos a carrito
vector<Producto> productosCarr;

// Constructor
Carrito::Carrito(){
}

// Destructor
Carrito::~Carrito(){
}

// Agregar productos al carrito
void Carrito::addProdCar(vector<Producto> _productos){
    cout << "Ingrese el nombre del producto que desea agregar" <<endl;
    int size = _productos.size();
}

// Borrar productos del Carrito
void Carrito::borrarProdCar(){
    // Borrar objeto Producto
}

// Mostrar Carrito -> get()
string Carrito::displayCarrito(){
    //Aqui tenemoes que poner un for que imprima los nombres producto por producto
    //return listaProducto;
}
