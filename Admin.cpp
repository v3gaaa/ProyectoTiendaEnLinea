#include "Admin.h"
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

Admin::Admin(int _userID, string _nombre, string _correo, string _contrasena):User(_userID, _nombre, _correo, _contrasena){

}

Admin::~Admin(){
}
