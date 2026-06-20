#ifndef ICONTROLADORUSUARIO_H
#define ICONTROLADORUSUARIO_H

#include "Usuario.h"
#include "Lector.h"
#include "Funcionario.h"
#include "Date.h"
#include "DtUsuario.h"
#include "DtLector.h"
#include "DtFuncionario.h"
#include <iostream>
#include <string>


using namespace std;


class IControladorUsuario
{
public:
    virtual DtLector ingresarDatosLector(string, string, string, Date) = 0;
    virtual void confirmarLector(DtLector &) = 0;
    virtual void cancelarLector(DtLector &) = 0;
    virtual DtFuncionario ingresarDatosFuncionario(string, string, string, int) = 0;
    virtual void confirmarFuncionario(DtFuncionario &) = 0;
    virtual void cancelarFuncionario(DtFuncionario &) = 0;
};


#endif // ICONTROLADORUSUARIO_H


