#include <iostream>
#include <string>
#include <stdlib.h>
#include "User.h"
using namespace std;

// Constructor
User::User(int _userID, string _nombre,  string _correo, string _contrasena){
    userID = _userID;
    nombre = _nombre;
    correo = _correo;
    contrasena = _contrasena;
}

// Destructor
User::~User(){
}

//Ingresar a la sesion
//void User::login(){

//}


// Salirse de la sesión
void User::logout(){
}


// Devuelve el ID del Usuario 
int User::getUserID(){
    return userID;
}

// Devuelve el nombre del Usuario 
string User::getUserName(){
    return nombre;
}

// Devuelve el correo del Usuario 
string User::getUserEmail(){
    return correo;
}

// Devuelve la contraseña del Usuario 
string User::getUserPassword(){
    return contrasena;
}
