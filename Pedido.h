#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Pedido{
    protected:
        int pedidoID;
        string detallesEnvio;
        double totalCompra;
    public:
        Pedido(int, string, double);
        ~Pedido();
        void finalizarPedido();
        int getPedidoID();
};

#endif
