#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H

#include "IControladorUsuario.h"
#include "ManejadorUsuario.h"
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

class ControladorUsuario : public IControladorUsuario
{
private:
    static ControladorUsuario* instancia;
    ControladorUsuario();
    ~ControladorUsuario();
    DtLector datosLector;
    DtFuncionario datosFuncionario;
public:
    static ControladorUsuario* getInstancia();
    DtLector ingresarDatosLector(string, string, string, Date);
    void confirmarLector(DtLector &);
    void cancelarLector(DtLector &);
    DtFuncionario ingresarDatosFuncionario(string, string, string, int);
    void confirmarFuncionario(DtFuncionario &);
    void cancelarFuncionario(DtFuncionario &);
};


#endif // CONTROLADORUSUARIO_H
