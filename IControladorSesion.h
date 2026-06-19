#ifndef ICONTROLADORSESION_H
#define ICONTROLADORSESION_H

class IControladorSesion{

public:
    virtual static ControladorSesion* getInstancia() = 0;
    virtual bool ingresarCredenciales(String idUsuario, String passUsuario) = 0;
    virtual void cerrarSesion() = 0;

}

#endif
