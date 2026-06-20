//
//  Funcionario.h
//  Biblioteca
//
//  Created by Gonzalo Cabrera on 10/6/26.
//

#ifndef Funcionario_h
#define Funcionario_h

#include "Usuario.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Funcionario : public Usuario {
private:
    int numeroEmpleado;
public:
    Funcionario();
    Funcionario(string, string, string, int);
    int getNumeroEmpleado();
    void setNumeroEmpleado(int);
    string tipoUsuario();
    ~Funcionario();
};


#endif /* Funcionario_h */


