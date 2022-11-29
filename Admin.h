#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include <stdlib.h>
using namespace std;

class Admin: public User{
    public:
        Admin(int _userID, string _nombre, string _correo, string _contrasena);
        ~Admin();
        void addProd();
        void deleteProd();
        void deleteUser();
        void deleteClient();  
};

#endif
