#include "ControladorSesion.h"
#include "Sesion.h"
#include "Usuario.h"
#include "ManejadorUsuario.h"
#include <string>

using namespace std;

ControladorSesion* ControladorSesion::instancia = NULL;
ControladorSesion::ControladorSesion(){}
ControladorSesion::~ControladorSesion(){}

ControladorSesion* ControladorSesion::getInstancia(){
    if(instancia == NULL) 
        instancia = new ControladorSesion();
    return instancia;
}

Sesion* ControladorSesion::buscarSesion(string idUsuario){
    for (set<Sesion*>::iterator it = sesiones.begin(); it != sesiones.end(); ++it){
        if ((*it)->getUsuario() == idUsuario){
            return *it;
        }
    }
    return NULL;
}

bool ControladorSesion::ingresarCredenciales(string idUsuario, string passUsuario){
    ManejadorUsuario* mm = ManejadorUsuario::getInstancia();
    Usuario* u = mm->buscarUsuario(idUsuario);

    if (u == NULL){
        return false;
    }

    if (!u->validarContrasenia(passUsuario))
    {
        return false;
    }

    //si la sesione esta activa, no tiene sentido ingresar las credenciales
    if(buscarSesion(idUsuario) != NULL){
        return false;
    }

    Sesion* s = new Sesion(idUsuario);
    sesiones.insert(s);
    
    return true;
}

void ControladorSesion::cancelarInicioSesion(){ }

void ControladorSesion::cerrarSesion(string idUsuario){
    for (set<Sesion*>::iterator it = sesiones.begin(); it != sesiones.end(); ++it){
        if ((*it)->getUsuario() == idUsuario)
        {
            delete *it;
            sesiones.erase(it);
            break;
        }
        
    }
}

