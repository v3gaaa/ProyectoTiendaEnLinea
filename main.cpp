#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream> 
#include <cstring>
#include <algorithm>
#include "Pedido.h"
#include "Admin.h"
using namespace std;

//NO TOCAR O LOS MATO
//Variables GLOBALES //Vector con todos los pasajeros
void menuAdmin(Admin);
void menuCliente(Cliente);
vector<Producto> menuCarrito();

    //Nombre:filldata
//Descripcion: Metodo para llenar los objetos y vectores PRODUCTO
//              
//Entrada:
//          
//Salida:
//
vector<Producto> filldata(vector<Producto> Productos){
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
                //producto.setPrecio(precio);
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
    return Productos;
}

int main(){
    //filldata();
    //cout << Productos[0].getNombreProducto()<< endl; //USAMOS EL METODO GET NOMBRE EN EL OBJETO GUARDADO EN EL VECTOR PRODUCTOS EN LA POSICION 0
    //cout << Productos[0].getPrecioProducto()<< endl;

    printf("BIENVENIDO A NUESTRA TIENDA ONLINE: \n");
    int opc;
    do {
        printf("Ingrese: \n1:Login  \n2:Registro\n"); printf("Elija una opción: "); cin >> opc;
        switch (opc){
            case 1: {//LOGIN
                bool clave = false, cuentaExiste = false; 
                User usuario;
                string correo; cout << "\nIngrese su correo: "; cin >> correo;
                string contrasena; cout << "Ingrese su contraseña: "; cin >> contrasena;

                usuario.setUserEmail(correo);
                usuario.setUserPassword(contrasena);
                usuario = usuario.login(usuario, clave, cuentaExiste);
                if (cuentaExiste) {
                    if (clave){ // Si es true el usuario es Admin
                        printf("\nBienvenido %s, eres Admin\n", usuario.getUserName().c_str());
                        Admin adminp(usuario.getUserID(), usuario.getUserName(), usuario.getUserEmail(), usuario.getUserPassword());
                        usuario.~User();
                        menuAdmin(adminp);

                        opc = 0;
                    } else{
                        printf("\nBienvenido %s\n", usuario.getUserName().c_str());
                        Cliente cliente(usuario.getUserID(), usuario.getUserName(), usuario.getUserEmail(), usuario.getUserPassword(), "");
                        usuario.~User();
                        menuCliente(cliente);

                        opc = 0;
                }
                } else {
                    cout << "Datos incorrectos/repetidos, vuelva a intentarlo\n" << endl;
                    usuario.~User();
                }
                break;
            }
            case 2: {// REGISTRO
                bool cuentaExiste = true; // No sabemos si existe su cuenta o no
                User usuario;
                string _clave;
                string nombre; cout << "\nIngrese su nombre: "; cin >> nombre;
                string correo; cout << "Ingrese su correo: "; cin >> correo;
                string contrasena; cout << "Ingrese su contraseña: "; cin >> contrasena;
                int userID; cout << "Ingrese su ID: "; cin >> userID;
                //int userID = (rand()%(100-2) + 1); // número aleatorio del 1 al 100

                // Saber si se registra una cuenta de Admin o de Cliente
                if (correo[0] == 'L') {
                    _clave = "admin";
                } else {
                    _clave = "client";
                }
                
                usuario.setUserEmail(correo);
                usuario.setUserPassword(contrasena);
                usuario.setUserName(nombre);
                usuario.setUserID(userID);
                usuario.setUserClave(_clave);
                cuentaExiste = usuario.buscar(usuario);

                if (cuentaExiste) {
                    printf("¡¡¡Bienvenido, ha creado su cuenta!!!\n");
                    ofstream file("users.txt", ios::app);
                    file << endl << userID << " " << correo << " " << contrasena << " " << nombre << " " << _clave << " ";
                    usuario.~User();
                    file.close(); 
                } else {
                    printf("Datos incorrectos/repetidos, vuelva a intentarlo\n");
                    usuario.~User();
                }
                break;
            }
        } 
    } while (opc != 0);
    
    
    //filldata();

    /*
    cout << Productos[0].getNombreProducto()<< endl; //USAMOS EL METODO GET NOMBRE EN EL OBJETO GUARDADO EN EL VECTOR PRODUCTOS EN LA POSICION 0
    cout << Productos[0].getPrecioUnitario()<< endl;
    */
    //Pedido prueba(1, "prrueba", 34.);
    return 0;
}


void menuAdmin(Admin a){
    int validator = 0;
    do {
        printf("Ingresa cual opcion quieres ejecutar como admin \n");
        printf("1. Añadir producto\n2.Añadir Cliente \n3.Salir");
        int opc; cin>>opc;
        switch (opc){
            case 1: {
                printf("Ingresa el nombre de producto (sin espacios): "); string name; cin>>name;
                printf("Ingresa el precio unitario del producto: "); int precioU; cin>>precioU;
                a.addProd(name, precioU);
            }
            case 2: {
                printf("Ingresa el id del cliente: "); int id; cin >>id;
                printf("Ingresa el nombre del cliente: "); string name; cin >>name;
                printf("Ingresa el correo del cliente: "); string email; cin>>email;
                printf("Ingresa la contrasena del cliente: "); string pass; cin>>pass;
                a.addClient(id, name, email, pass);
            }
            case 3: {
                validator = 1;
            }
            break;
        }
    } while (validator == 0);
}

void menuCliente(Cliente c){
    int validator = 0;
    do {
        printf("\n                    OPCIONES\n");
        printf("1. Iniciar Compra\n2. Finalizar Pedido \n3. Salir\n"); int opc; cin>>opc;
        vector<Producto> productosCarro;
        switch (opc){
            case 1: {
                productosCarro = menuCarrito();
                //cout << productosCarro[0].getNombreProducto();
                break;
            }
            case 2: {
                cout << productosCarro[0].getNombreProducto() << endl;
                Pedido p;
                p.iniciarPedido(productosCarro, c);
            }
            case 3:{
                validator = 1;
                break;
            }
            break;
        }
    } while(validator == 0);
}

vector<Producto> menuCarrito(){
    Carrito car1;
    int n, opcion;
    vector<Producto> Productos;
    Productos = filldata(Productos);
    //cout << Productos[1].getNombreProducto() << endl;
    do
    {
        cout << "\n 1. Ingresar Productos";
        cout << "\n 2. Display Carrito";
        cout << "\n 3. Borrar Productos";
        cout << "\n 4. Salir" <<endl;

        cin >> opcion;

        switch ( opcion )
        {
            case 1: {
                car1.addProdCar(Productos);
                break;
            }

            case 2: {
                car1.displayCarrito();
                break;
            }

            case 3: {
                car1.borrarProdCar();
                break;
            }
        } 

    } while ( opcion != 4 );

    // Rergresar al menú del cliente
    return car1.getVectorProducto();
}
