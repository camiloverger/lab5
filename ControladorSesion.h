#ifndef CONTROLADORSESION_H
#define CONTROLADORSESION_H

class ControladorSesion : public IControladorSesion{

private:
    static ControladorSesion* instancia;
    ControladorSesion();
    ~ControladorSesion();

public:
    static ControladorSesion* getInstancia();
    bool ingresarCredenciales(String idUsuario, String passUsuario);
    void cerrarSesion();

}

#endif
