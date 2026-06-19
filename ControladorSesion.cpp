#include "ControladorSesion.h"
#include "Sesion.h"
#include "Usuario.h"
#include "ManejadorUsuario.h"

using namespace std;

// FIRMAS FUNCIONES INTERNAS

bool validar(String idUsuario, String passUsuario);

// FUNCIONES PRINCIPALES

ControladorSesion* ControladorSesion::instancia = NULL;
ControladorSesion::ControladorSesion(){}
ControladorSesion::~ControladorSesion(){}

ControladorSesion* ControladorSesion::getInstancia(){
    if(instancia == NULL) instania = new ControladorSesion();
    return instancia;
}

bool ingresarCredenciales(String idUsuario, String passUsuario){

    if(!validar(idUsuario, passUsuario)){
        sesion.setIdUsuario(nullptr);
        return false;
    }
    else{
        sesion.setIdUsuario(idUsuario);
        return true;
    }

}

void cerrarSesion(){

    Sesion se = new Sesion();
    Sesion sesion = se.getInstancia();
    sesion.setUsuario(nullptr);

}

// FUNCIONES INTERNAS

bool validar(String idUsuario, String passUsuario){

    ManejadorUsuario manejador = new ManejadorUsuario();
    Usuario usuario = manejador.buscarUsuario(idUsuario);
    if(usuario == NULL) return false;
    if(strcmp(usuario.password, passUsuario)) return true;
    else return false;

}
