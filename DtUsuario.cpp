//
//  Usuario.cpp
//  Biblioteca
//
//  Created by Gonzalo Cabrera on 10/6/26.
//

#include <stdio.h>
#include "DtUsuario.h"
#include <string>
#include <iostream>

using namespace std;

DtUsuario::DtUsuario(){
    this->identificador = " ";
    this->nombre = " ";
    this->password = " ";
}

DtUsuario::DtUsuario(string identificador, string nombre, string password){
    this->identificador = identificador;
    this->nombre = nombre;
    this->password = password;
}

DtUsuario::DtUsuario(const DtUsuario &otro){
    this->identificador = otro.identificador;
    this->nombre = otro.nombre;
    this->password = otro.password;
}

string DtUsuario::getIdentificador(){
    return this->identificador;
}

string DtUsuario::getNombre(){
    return this->nombre;
}


string DtUsuario::getPassword(){
    return this->password;
}






