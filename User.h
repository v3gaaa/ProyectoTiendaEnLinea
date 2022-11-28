#ifndef USER_H
#define USER_H
//#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class User{
    private:
        int userID;
        string correo, contrasena;
    public:
        User();
        ~User();
        void login();
        void registrar();
        void logout();
        void deletePedido();  
};

#endif