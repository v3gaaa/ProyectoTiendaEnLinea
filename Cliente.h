#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include "User.h"
#include "Pedido.h"
using namespace std;

class Cliente:public User{
    private:
        string direccionEntrega;
        double balance;
    public:
        Cliente(int _userID, string _nombre, string _correo, string _contrasena, string direccionEntrega, double balance);
        ~Cliente();
        int getClientID();
};

#endif
