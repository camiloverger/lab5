#ifndef CONTROLADORSESION_H
#define CONTROLADORSESION_H

#include <string>

using namespace std;

class ControladorSesion : public IControladorSesion{

private:
    static ControladorSesion* instancia;
    ControladorSesion();
    ~ControladorSesion();

public:
    static ControladorSesion* getInstancia();
    bool ingresarCredenciales(string idUsuario, string passUsuario);
    void cerrarSesion();

};

#endif
