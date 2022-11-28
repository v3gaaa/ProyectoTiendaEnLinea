#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include <stdlib.h>
using namespace std;

class Admin: public User{
    public:
        Admin();
        ~Admin();
        void addProd();
        void deleteProd();
        void deleteUser();
        void deleteClient();  
};

#endif