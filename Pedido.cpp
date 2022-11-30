#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Pedido.h"
#include "Producto.cpp"
using namespace std;

// Constructor
Pedido::Pedido(int _pedidoID, string _detallesEnvio, double _totalCompra){
    pedidoID = _pedidoID;
    detallesEnvio = _detallesEnvio;
    totalCompra = _totalCompra;
}

// Destructor
Pedido::~Pedido(){
}

// Finalizar Pedido
void Pedido::iniciarPedido(vector<Producto> _ProductosCarrito){
    for (int i; i< _ProductosCarrito.size(); i++){
        cout<<_ProductosCarrito[i].getNombreProducto()<<" ";
        cout<<_ProductosCarrito[i].getPrecioProducto()<< " ";
        cout<<_ProductosCarrito[i].getNombreProducto()<< " ";
        cout<<endl;
    }

    cout<<"SI todo los productos estan bien por favor ingresa un 1, si no, ingresa 0"<<endl;
    int input;
    cin>>input;
    if (input == 1){
        cout<<"El pedido esta hecho";
    }
}

int Pedido::getPedidoID(){
    return pedidoID;
}
