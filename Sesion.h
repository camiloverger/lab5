#ifndef SESION_H
#define SESION_H

class Sesion{

private:
    static Sesion* instancia;
    Usuario* usuario;

public:
    Sesion();
    Sesion(String idUsuario);
    String getUsuario();
    void setUsuario(Usuario);
    static Sesion* getInstancia();
    ~Sesion();

}

#endif
