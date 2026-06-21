/* CAMILO - GONZALO - FRANCO */

#include "Fabrica.h"
#include "IControladorUsuario.h"
#include "IControladorSesion.h"
#include "IControladorMaterial.h"
#include "IControladorPrestamo.h"
#include "IControladorInformacion.h"
#include "DtLector.h"
#include "DtFuncionario.h"
#include "DtLibro.h"
#include "DtRevista.h"
#include "Date.h"
#include "Reloj.h"
#include <iostream>
#include <string>

using namespace std;

// FIRMAS FUNCIONES INTERNAS

bool esFuncionario();
void iniciarSesion();
void registrarLector();
void registrarFuncionario();
void registrarMaterial();

int main(){

    Fabrica* fabrica = Fabrica::getInstancia();

    bool flag = true;
    while(flag){

        cout << "Bienvenido!\nElija una opción:\n(1) Iniciar Sesión\n(2) Cerrar Sesión\n(3) Registrar Lector\n(4) Registrar Funcionario\n(5) Registrar Material\n(6) Registrar Préstamo\n(7) Consultar Préstamos Lector\n(8) Ver Información Material\n(9) Puntuar Material\n(10) Consultar Puntajes Material\n(11) Eliminar Lector\n(12) Eliminar Material\n(0) Salir\nOpción: ";

        int opcion;
        cin >> opcion;

        switch(opcion) {

            case 1: // iniciar sesión
                iniciarSesion();
                break;
            case 2: // cerrar sesión
                ControladorSesion::cerrarSesion("guest");
                break;
            case 3: // registrar lector
                registrarLector();
                break;
            case 4: // registrar funcionario
                registrarFuncionario();
                break;
            case 5: // registrar material
                registrarMaterial();
                break;
            case 6: // registrar préstamo
                break;
            case 7: // consultar préstamos lector
                break;
            case 8: // ver información material
                break;
            case 9: // puntuar material
                break;
            case 10: // consultar puntajes material
                break;
            case 11: // eliminar lector
                break;
            case 12: // eliminar material
                break;
            case 0: // salir
                flag = false;
                break;
            default:
                cout << "Opción incorrecta.\n";
                break;

        }

    }

    return 0;

}

// FUNCIONES INTERNAS

bool esFuncionario(){/*

    Usuario usr = ControladorSesion::getUsuario(); // VER
    if(usr == NULL) return false;
    if(strcmp(usr.getTipo(), "Funcionario")) return true;
    else */return false;

}

void iniciarSesion(){
/*
    string usr;
    string pass;
    cout << "Usuario: ";
    cin >> usr;
    cout << "Contraseña: ";
    cin >> pass;
    bool sesion = ControladorSesion::ingresarCredenciales(usr, pass);
    if(!sesion){
        int opcion;
        cout << "Usuario o contraseña incorrectos.\n(0) Volver a intentar - (1) Cancelar\nOpción: ";
        cin >> opcion;
        if(opcion == 0) iniciarSesion();
    }*/
}

void registrarLector(){
/*
    if(esFuncionario()){

        Date fecha = Reloj::getFecha();
        string ci, usr, pass;
        cout << "Ingrese documento, nombre y contraseña:\n"
        cin >> ci >> usr >> pass;
        int opcion;

        DtLector lector = ControladorUsuario::ingresarDatosLector(ci,usr,pass,fecha); // VER
        cout << "Documento: " << lector.cedula << "\nNombre: " << lector.nombre << "\nContraseña: " << lector.password << "\nFecha: " << fecha.dia << fecha.mes << fecha.anio;
        cout << "Confirmar registro?\n (0) SI - (1) NO\n";
        cin >> opcion;

        if(opcion == 0) ControladorUsuario::confirmarLector(); // VER

    }else cout << "Debe ser funcionario.";
*/
}

void registrarFuncionario(){
/*
    if(esFuncionario()){

        string ci, usr, pass;
        int num, opcion;
        cout << "Ingrese documento, nombre, contraseña y número de empleado:\n"
        cin >> ci >> usr >> pass >> num;

        DtFuncionario func = ControladorUsuario::ingresarDatosFuncionario(ci,usr,pass,num); // VER
        cout << "Documento: " << func.cedula << "\nNombre: " << func.nombre << "\nContraseña: " << func.password << "\nNúmero de empleado: " << func.numeroEmpleado;
        cout << "Confirmar registro?\n (0) SI - (1) NO\n";
        cin >> opcion;

        if(opcion == 0) ControladorUsuario::confirmarFuncionario(); // VER

    }else cout << "Debe ser funcionario.";
*/
}

void registrarMaterial(){
/*
    if(esFuncionario()){

        int cod, anio, tipo, opcion;
        string titulo;
        cout << "Ingrese código, título y año:\n";
        cin >> cod >> titulo >> anio;
        cout << "Ingrese tipo:\n(0) LIBRO - (1) REVISTA\n";
        cin >> tipo;
        if(tipo == 0){

            string autor;
            int cantPag;
            cout << "Ingrese autor y cantidad de páginas:\n";
            cin >> autor >> cantPag;
            cout << "\nCódigo: " << cod << "\nTítulo: " << titulo << "\nAño: " << anio << "\nAutor: " << autor << "\nCantidad de páginas: " << cantPag;
            cout << "Confirmar registro?\n (0) SI - (1) NO\n";
            cin >> opcion;
            if(opcion == 0) confirmarRegistro(); // VER

        }else{
            if(tipo == 1){

                int edicion;
                string mensual;
                cout << "Ingrese en número de edición: ";
                cin >> edicion;
                cout << "Es mensual?\n (0) SI - (1) NO\n";
                cin >> opcion;
                if(opcion == 0) mensual = "SI";
                else mensual = "NO";
                cout << "\nCódigo: " << cod << "\nTítulo: " << titulo << "\nAño: " << anio << "\nEdición: " << edicion << "\nMensual: " << mensual;
                cout << "Confirmar registro?\n (0) SI - (1) NO\n";
                cin >> opcion;
                if(opcion == 0) confirmarRegistro(); // VER

            }else cout << "Tipo incorrecto.";
        }

    }else cout << "Debe ser funcionario.";
*/
}
























