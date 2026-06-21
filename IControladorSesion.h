#ifndef ICONTROLADORSESION_H
#define ICONTROLADORSESION_H

#include <string>

using namespace std;

class IControladorSesion{

public:
    virtual bool ingresarCredenciales(string, string) = 0;
    virtual void cancelarInicioSesion() = 0;
    virtual void cerrarSesion(string) = 0;

};

#endif
