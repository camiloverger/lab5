#ifndef ICONTROLADORSESION_H
#define ICONTROLADORSESION_H

#include <string>

using namespace std;

class IControladorSesion{

public:
    virtual static ControladorSesion* getInstancia() = 0;
    virtual bool ingresarCredenciales(string idUsuario, string passUsuario) = 0;
    virtual void cerrarSesion() = 0;

};

#endif
