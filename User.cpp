#include <iostream>
//#include <string>
#include <stdlib.h>
#include "User.h"
using namespace std;

User::User(){
    userID = 1234;;
    correo = "A016@ere";
    contrasena = "asdasca";
}

int main(){
    User u1;
    cout << u1;
    return 0;
}