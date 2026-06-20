#include "ControladorUsuario.h"
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

ControladorUsuario* ControladorUsuario::instancia = NULL;

ControladorUsuario::ControladorUsuario(){}

ControladorUsuario::~ControladorUsuario(){}

ControladorUsuario* ControladorUsuario::getInstancia(){
    if (instancia == NULL){
        instancia = new ControladorUsuario();
    }
    return instancia;
}

DtLector ControladorUsuario::ingresarDatosLector(string cedula, string nombre, string password, Date fechaRegistro){
    return DtLector(cedula, nombre, password, fechaRegistro);
}

void ControladorUsuario::confirmarLector(DtLector &datosLector){
    Lector* nuevoLector = new Lector(datosLector.getIdentificador(), datosLector.getNombre(), datosLector.getPassword(), datosLector.getFechaRegistro());
    ManejadorUsuario* colUsuarios = ManejadorUsuario::getInstancia();
    colUsuarios->agregarUsuario(nuevoLector);
}

void ControladorUsuario::cancelarLector(DtLector &datosLector){
}

DtFuncionario ControladorUsuario::ingresarDatosFuncionario(string cedula, string nombre, string password, int numeroEmpleado){
    return DtFuncionario(cedula, nombre, password, numeroEmpleado);
}

void ControladorUsuario::confirmarFuncionario(DtFuncionario &datosFuncionario){
    Funcionario* nuevoFuncionario = new Funcionario(datosFuncionario.getIdentificador(), datosFuncionario.getNombre(), datosFuncionario.getPassword(), datosFuncionario.getNumeroEmpleado());
    ManejadorUsuario* colUsuarios = ManejadorUsuario::getInstancia();
    colUsuarios->agregarUsuario(nuevoFuncionario);
}

void ControladorUsuario::cancelarFuncionario(DtFuncionario &datosFuncionario){}




