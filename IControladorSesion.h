#ifndef ICONTROLADORSESION_H
#define ICONTROLADORSESION_H

#include <string>

class ControladorSesion;

using namespace std;

class IControladorSesion{

public:
    virtual  ControladorSesion* getInstancia() = 0;
    virtual bool ingresarCredenciales(string idUsuario, string passUsuario) = 0;
    virtual void cerrarSesion() = 0;

};

#endif
