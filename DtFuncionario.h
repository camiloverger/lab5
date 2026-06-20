#ifndef DTFUNCIONARIO_H
#define DTFUNCIONARIO_H

#include "DtUsuario.h"
#include "Date.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class DtFuncionario : public DtUsuario
{
private:
    int numeroEmpleado;
public:
    DtFuncionario();
    DtFuncionario(string, string, string, int);
    DtFuncionario(DtFuncionario &);
    int getNumeroEmpleado();
    ~DtFuncionario();
};




#endif // DTFUNCIONARIO_H