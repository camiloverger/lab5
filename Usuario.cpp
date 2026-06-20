//
//  Usuario.cpp
//  Biblioteca
//
//  Created by Gonzalo Cabrera on 10/6/26.
//

#include <stdio.h>
#include "Usuario.h"
#include <string>
#include <iostream>

using namespace std;

Usuario::Usuario(){
    this->identificador = " ";
    this->nombre = " ";
    this->password = " ";
}

Usuario::Usuario(string identificador, string nombre, string password){
    this->identificador = identificador;
    this->nombre = nombre;
    this->password = password;
}

string Usuario::getIdentificador(){
    return this->identificador;
}

void Usuario::setIdentificador(string identificador){
    this->identificador = identificador;
}

string Usuario::getNombre(){
    return this->nombre;
}

void Usuario::setNombre(string nombre){
    this->nombre = nombre;
}

string Usuario::getPassword(){
    return this->password;
}

void Usuario::setPassword(string password){
    this->password = password;
}

bool Usuario::validarContrasenia(string passwordIngresada){
    return passwordIngresada == this->getPassword();
}

Usuario::~Usuario(){}





