#include "DtLector.h"
#include "Date.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

DtLector::DtLector() : DtUsuario(), fechaRegistro() {}

DtLector::DtLector(string identificador, string nombre, string password, Date fechaRegistro) : DtUsuario(identificador, nombre, password), fechaRegistro(fechaRegistro) {}

DtLector::DtLector(DtLector &otro) : DtUsuario(otro) {
    this->fechaRegistro = otro.fechaRegistro;
}

Date DtLector::getFechaRegistro(){
    return this->fechaRegistro;
}

DtLector::~DtLector(){}
