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
    virtual void confirmarLector() = 0;
    virtual void cancelarLector() = 0;
    virtual DtFuncionario ingresarDatosFuncionario(string, string, string, int) = 0;
    virtual void confirmarFuncionario() = 0;
    virtual void cancelarFuncionario() = 0;
};


#endif // ICONTROLADORUSUARIO_H


/*
public:
- ingresarDatosLector(cedula : String, nombre : String, password : String, fechaRegistro : Date) : DtLector
- confirmarLector()
- cancelarLector()
- ingresarDatosFuncionario(cedula : String, nombre : String, password : String, numeroEmpledo : Integer) : DtFuncionario
- confirmarFuncionario()
- cancelarFuncionario()

*/