#ifndef SESION_H
#define SESION_H

#include <string>

using namespace std;

class Sesion{

private:
    string idUsuario;
public:
    Sesion();
    Sesion(string idUsuario);
    string getUsuario();
    void setUsuario(string);
    ~Sesion();
};

#endif
