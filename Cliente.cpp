#include <iostream>
#include <stdlib.h>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(string _direccionEntrega, double _balance):User(_userID, _nombre, _correo, _contrasena){
    direccionEntrega = _direccionEntrega;
    balance = _balance;
}

Cliente::~Cliente(){}
