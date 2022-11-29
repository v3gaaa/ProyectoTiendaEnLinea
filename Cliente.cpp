#include <iostream>
#include <stdlib.h>
#include <string>
#include "Cliente.h"
using namespace std;

// Constructor
Cliente::Cliente(int _userID, string _nombre, string _correo, string _contrasena, string _direccionEntrega, double _balance):User(_userID, _nombre, _correo, _contrasena){
    direccionEntrega = _direccionEntrega;
    balance = _balance;
}

// Destructor
Cliente::~Cliente(){
}

// Conseguir ID
int Cliente::getClientID(){
    return getUserID();
}
