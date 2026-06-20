//
//  Funcionario.cpp
//  Biblioteca
//
//  Created by Gonzalo Cabrera on 10/6/26.
//

#include "Funcionario.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

Funcionario::Funcionario() : Usuario(), numeroEmpleado(0) {}

Funcionario::Funcionario(string identificador, string nombre, string password, int numeroEmpleado) : Usuario(identificador, nombre, password) {
    this->numeroEmpleado = numeroEmpleado;
}

int Funcionario::getNumeroEmpleado(){
    return this->numeroEmpleado;
}

void Funcionario::setNumeroEmpleado(int numeroEmpleado){
    this->numeroEmpleado = numeroEmpleado;
}

Funcionario::~Funcionario(){}


