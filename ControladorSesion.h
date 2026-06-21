#ifndef CONTROLADORSESION_H
#define CONTROLADORSESION_H

#include "IControladorSesion.h"
#include "Sesion.h"
#include <string>
#include <set>

using namespace std;

class ControladorSesion : public IControladorSesion{

private:
    static ControladorSesion* instancia;
    ControladorSesion();
    ~ControladorSesion();
    set<Sesion*> sesiones;
public:
    static ControladorSesion* getInstancia();
    Sesion* buscarSesion(string);
    bool ingresarCredenciales(string, string);
    void cancelarInicioSesion();
    void cerrarSesion(string);
    
};

#endif
