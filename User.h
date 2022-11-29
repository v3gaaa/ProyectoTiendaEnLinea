#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class User{
    protected:
        int userID;
        string nombre, correo, contrasena;
        string getUserPassword(); // Checar
    public:
        User(int, string, string, string);
        ~User();
        //void login(); //ver como hacer el login
        void logout();  //ver como se hace el logout
        int getUserID();
        string getUserName();
        string getUserEmail();
};

#endif
