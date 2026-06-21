#include "Sesion.h"
#include "Usuario.h"
#include <string>
#include <iostream>

using namespace std;

Sesion::Sesion() : idUsuario(" ") {}

Sesion::Sesion(string idUsuario) : idUsuario(idUsuario) {}

string Sesion::getUsuario(){
    return this->idUsuario;
}

void Sesion::setUsuario(string idUsuario){
    this->idUsuario = idUsuario;
}

Sesion::~Sesion(){}
