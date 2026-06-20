#include "DtFuncionario.h"
#include "Date.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

DtFuncionario::DtFuncionario() : DtUsuario(), numeroEmpleado(0) {}

DtFuncionario::DtFuncionario(string identificador, string nombre, string password, int numeroEmpleado) : DtUsuario(identificador, nombre, password) {
    this->numeroEmpleado = numeroEmpleado;
}

DtFuncionario::DtFuncionario(const DtFuncionario &otro) : DtUsuario(otro) {
    this->numeroEmpleado = otro.numeroEmpleado;
}

int DtFuncionario::getNumeroEmpleado(){
    return this->numeroEmpleado;
}

DtFuncionario::~DtFuncionario(){}




/* 
DtFuncionario();
    DtFuncionario(string, string, string, int);
    DtFuncionario(DtFuncionario &);
    int getNumeroEmpleado();
    ~DtFuncionario();
*/