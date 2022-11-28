#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <stdlib.h>
#include "User.h"
using namespace std;

class Cliente:public User{
    private:
        string direccionEntrega;
        double balance;
    public:
        Cliente(int, string, string, string, string, double);
        ~Cliente();
};

#endif
