#include <iostream>
#include <stdlib.h>
#include <string>
#include "Carrito.h"
//#include "Producto.cpp"
using namespace std;

// Constructor
Carrito::Carrito(){
}

// Destructor
Carrito::~Carrito(){
}

// Agregar productos al carrito
void Carrito::addProdCar(){
    string producto;
    cout << "Que producto quieres agregar: " << endl;
    cin >> producto;

    for(int i=0;i<100;i++){
        if (listaProducto[i] == producto){
            Producto objetoprod == listaProducto[i];
        }
    }



    for(int i=0;listaProducto[i]=="";i++){
        if (listaProducto[i] == ""){
            listaProducto[i] = objetoprod;
        }

    }
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
