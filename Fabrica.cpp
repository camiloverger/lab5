#include "Fabrica.h"
#include "ControladorUsuario.h"
#include "ControladorSesion.h"
#include "ControladorMaterial.h"
#include "ControladorPrestamo.h"
#include "ControladorInformacion.h"
#include <iostream>


using namespace std;

Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica(){}

Fabrica::~Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia == NULL){
        instancia = new Fabrica();
    }
    return instancia;
}

IControladorSesion* Fabrica::getIControladorSesion(){
    return ControladorSesion::getInstancia();
}

IControladorUsuario* Fabrica::getIControladorUsuario(){
    return ControladorUsuario::getInstancia();
}

IControladorMaterial* Fabrica::getIControladorMaterial(){
    return ControladorMaterial::getInstancia();
}

IControladorPrestamo* Fabrica::getIControladorPrestamo(){
    return ControladorPrestamo::getInstancia();
}

IControladorInformacion* Fabrica::getIControladorInformacion(){
    return ControladorInformacion::getInstancia();
}

Fabrica::~Fabrica(){}

