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


// Constructor
Carrito::Carrito(){
}

// Destructor
Carrito::~Carrito(){
}

// Agregar productos al carrito
void Carrito::addProdCar(){
    int numProd;
    string producto_añadir;
    cout << "Este es nuestro catalogo de productos al momento" <<endl;
    int size = productosCarr.size();
    for(int i=0;i<size;i++){
        cout<< productosCarr[i].getNombreProducto()<< endl;
    }
    cout << "Cuantos productos desea añadir?: ";
    cin >> numProd;
    for(int i=0;i<numProd;i++){
        string nomProd;
        cout << "Ingrese el nombre del " << i << " producto que desea añadir: ";
        cin >> nomProd;
        bool isProd=false;
        for(int i=0;i<size;i++){
            if(nomProd==productosCarr[i].getNombreProducto()){
                productosCarr.push_back(productosCarr[i]);
                isProd=true;
            }
        }
        if(isProd){
            cout << "El producto se añadio correctamente!";
        }else{
            cout << "Lo sentimos, no contamos con ese producto. Su producto no se añadio";
            i = i-1;
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
