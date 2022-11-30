#include <iostream>
#include <stdlib.h>
#include <string>
#include "Pedido.h"
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
void Pedido::finalizarPedido(){

}

int Pedido::getPedidoID(){
    return pedidoID;
}
