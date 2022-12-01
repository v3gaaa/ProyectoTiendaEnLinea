#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream> 
#include <cstring>
#include <algorithm>

#include "User.cpp"
#include "Cliente.cpp"
#include "Pedido.cpp"
//#include "Carrito.cpp"
#include "Producto.cpp"
using namespace std;




//NO TOCAR O LOS MATO

//Variables GLOBALES
vector<Producto> Productos; //Vector con todos los pasajeros


    //Nombre:filldata
//Descripcion: Metodo para llenar los objetos y vectores PRODUCTO
//              
//Entrada:
//          
//Salida:
//
void filldata(){
    //Variables Producto
    string texto;
    int cantidad;
    int cont=0;
    double precio; 
    Producto producto;
    //Personas

    //Se realiza una lectura en el archivo contenedor de productos
    ifstream MyReadFile("productos.txt");
    while (getline (MyReadFile, texto)) {//mientras que existan lineas en el archivo
        istringstream ss(texto); //Agarra lo que haya en la linea y lo pone como string
        do { 
            string word; 
            ss >> word; //se crea un string por linea y va rellenando el objeto producto
            if(cont== 0){
                producto.setNombre(word);
            }else if(cont== 1){
                precio = stoi(word);
                producto.setPrecio(precio);
            }else if(cont== 2){
                cantidad = stoi(word); //stoi convierte de valor string a valor numerico
                producto.setCantidad(cantidad);
            }
            cont++;
        } while (ss);
        Productos.push_back(producto); //añadimos el objeto producto al vector productos
        cont=0;
    }
    MyReadFile.close(); //CERRAMOS EL ARCHIVO
}





int main(){

    filldata();
    cout << Productos[0].getNombreProducto()<< endl; //USAMOS EL METODO GET NOMBRE EN EL OBJETO GUARDADO EN EL VECTOR PRODUCTOS EN LA POSICION 0
    cout << Productos[0].getPrecioProducto()<< endl;

    /*Producto producto[11];
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
    producto[10] = Producto("Cerveza Bichola", 45, 4);*/

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
    
    /*printf("BIENVENIDO A NUESTRA TIENDA ONLINE: \n");
    int opc = 0;
    printf("Ingrese: \n1:Login  \n2:Registro\n");
    do{
        printf("BIENVENIDO A NUESTRA TIENDA ONLINE: \n");
    int opc = 0;
    printf("Ingrese: \n1:Login  \n2:Registro\n"); cin >> opc;
    do{
        switch (opc){
            case 1: //LOGIN
                bool clave = false, cuentaExiste = false; 
                User usuario;
                string correo; cout << "\nIngrese su correo: "; cin >> correo;
                string contrasena; cout << "Ingrese su contraseña: "; cin >> contrasena;

                usuario.setUserEmail(correo);
                usuario.setUserPassword(contrasena);
                usuario = usuario.login(usuario, clave, cuentaExiste);
                
                if (clave){ // Si es true el usuario es Admin
                    printf("\nBienvenido %s, eres Admin\n", usuario.getUserName().c_str());
                } else{
                    printf("\nBienvenido %s, eres un Cliente\n", usuario.getUserName().c_str());
                }
                opc = 0;
        }
                

            case 2: //REGISTRO
                printf("Ingrese su correo: ");
                //TENEMOS QUE ENCONTRAR UNA FORMA DE CONFIRMAR QUE EL CORREO NO EXISTA
                printf("\nIngrese contraseña: ");
                //SOLO SE PUEDEN REGISTRAR CLIENTES LOS ADMINS YA VAN A ESTAR REGISTRADOS POR DENTRO DEL CODIGO
                break;
        }
    } while (opc != 0);
*/


    /*int n, opcion;
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

    } while (true);*/

    return 0;
}
