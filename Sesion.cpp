#include "Sesion.h"
#include "Usuario.h"

using namespace std;

Sesion* Sesion::instancia = NULL;
Sesion::Sesion(){}

Sesion::Sesion(String idUsuario){
    this->idUsuario = idUsuario;
}

String Sesion::getUsuario(){
    return this->usuario;
}

void Sesion::setUsuario(Usuario usuario){
    this->usuario = usuario;
}

Sesion* Sesion::getInstancia(){
    if(instancia == NULL) instancia = new Sesion();
    return instancia;
}

Sesion::~Sesion(){}
