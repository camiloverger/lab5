#ifndef FABRICA_H
#define FABRICA_H

#include "IControladorUsuario.h"
#include "IControladorSesion.h"
#include "IControladorMarerial.h"
#include "IControladorPrestamo.h"
#include "IControladorInformacion.h"
#include <iostream>


using namespace std;

class Fabrica
{
private:
    static Fabrica* instancia;
    Fabrica();
public:
    static Fabrica* getInstancia();
    IControladorSesion* getIControladorSesion();
    IControladorUsuario* getIControladorUsuario();
    IControladorMaterial* getIControladorMaterial();
    IControladorPrestamo* getIControladorPrestamo();
    IControladorInformacion* getIControladorInformacion();
    ~Fabrica();
};


#endif // FABRICA_H


