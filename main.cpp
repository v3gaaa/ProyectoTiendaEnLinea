#include <iostream>
#include <stdlib.h>
#include <string>
#include "User.cpp"
#include "Cliente.cpp"
#include "Pedido.cpp"
//#include "Carrito.cpp"
#include "Producto.cpp"
using namespace std;

int main(){
    Producto producto[11];
    producto[0] = Producto("Cerveza Pacífico", 19, 12);
    producto[1] = Producto("Cerveza Modelo", 20, 5);
    producto[2] = Producto("Cerveza Barrilito", 12, 23);
    producto[3] = Producto("Cerveza Bohemia", 20.5, 4);
    producto[4] = Producto("Cerveza Zorra", 99.35, 10);
    producto[5] = Producto("Cerveza Tecate", 15.5, 31);
    producto[6] = Producto("Cerveza Stella Artois", 25, 19);
    producto[7] = Producto("Cerveza Ultra", 19.20, 9);
    producto[8] = Producto("Cerveza Minerva", 40, 23);
    producto[9] = Producto("Cerveza Tres Islas", 39, 7);
    producto[10] = Producto("Cerveza Bichola", 45, 4);

    /*
    Cliente c1(123, "Pepe", "adaa@", "ascdaa", "adfada", 1231.1231);
    cout << c1.getClientID() << endl;

    Pedido p1(123, "qrq", 123.1231323);
    cout << p1.getPedidoID() << endl;

    Carrito car1("apple, mango, banana", 1500);
    cout << car1.displayCarrito() << endl;

    Producto prod1("Manzana", 123.123, 12);
    cout << prod1.getNombreProducto() << endl;

    cout << producto[0].getNombreProducto() << endl;
    */

    //APARTIR DE AQUI EMPIEZA EL CODIGO BIEN ARRIBA SON PURAS PRUEBAS
    
    printf("BIENVENIDO A NUESTRA TIENDA ONLINE: \n");
    int opc = 0;
    printf("Ingrese: \n1:Login  \n2:Registro\n");
    /*
    do{
        switch (opc){
            case 1: //LOGIN
                printf("Ingrese su correo: ");
                //TENEMOS QUE BUSCAR UNA FORMA PARA CONFIRMA QUE EXISTA Y/O CREAR UN OBJETO A PARTIR DE ESO
                printf("\nIngrese contraseña: ");
                
                if(Base de datos??? in columna status == Cliente){
                    userStatus = Cliente;
                } else{
                    userStatus = Admin;
                }
                break; 
                

            case 2: //REGISTRO
                printf("Ingrese su correo: ");
                //TENEMOS QUE ENCONTRAR UNA FORMA DE CONFIRMAR QUE EL CORREO NO EXISTA
                printf("\nIngrese contraseña: ");
                //SOLO SE PUEDEN REGISTRAR CLIENTES LOS ADMINS YA VAN A ESTAR REGISTRADOS POR DENTRO DEL CODIGO
                break;
        }
    } while (true);
*/


    int n, opcion;
    do {
        printf("Productos disponibles: \n");
        printf("%s:  |  Precio: %f\n", producto[0].getNombreProducto(), producto[0].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[1].getNombreProducto(), producto[1].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[2].getNombreProducto(), producto[2].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[3].getNombreProducto(), producto[3].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[4].getNombreProducto(), producto[4].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[5].getNombreProducto(), producto[5].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[6].getNombreProducto(), producto[6].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[7].getNombreProducto(), producto[7].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[8].getNombreProducto(), producto[8].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[9].getNombreProducto(), producto[9].getPrecioProducto());
        printf("%s:  |  Precio: %f\n", producto[10].getNombreProducto(), producto[10].getPrecioProducto());
        printf("Elija una opción: ");


        scanf("%d", &opcion);


        switch (opcion){
            case 1: //CODIGO
                    

            case 2: //CODIGO
                    

            case 3: //CODIGO

            default:
                break;
        }

    } while (true);

    return 0;
}
