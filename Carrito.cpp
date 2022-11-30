#include <iostream>
#include <stdlib.h>
#include <string>
#include "Carrito.h"
#include "Producto.cpp"
using namespace std;

// Constructor
Carrito::Carrito(){
}

// Destructor
Carrito::~Carrito(){
}

// Agregar productos al carrito
void Carrito::addProdCar(){
    cout << "Ingrese el nombre del producto que desea agregar" <<endl;
    ifstream MyReadFile("productos.txt");
    while (getline (MyReadFile, texto)) {//mientras que existan lineas en el archivo
        istringstream ss(texto); //Agarra lo que haya en la linea y lo pone como string
        do { 
            string word; 
            ss >> word; //se crea un string por linea y va rellenando el objeto producto
            if(cont== 0){
                producto.setNombre(word);
            }else if(cont== 1){
                precio = stoi(word);
                producto.setPrecio(precio);
            }else if(cont== 2){
                cantidad = stoi(word); //stoi convierte de valor string a valor numerico
                producto.setCantidad(cantidad);
            }
            cont++;
        } while (ss);
        Productos.push_back(producto); //añadimos el objeto producto al vector productos
        cont=0;
    }
    MyReadFile.close(); //CERRAMOS EL ARCHIVO
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
