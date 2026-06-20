#ifndef MANEJADORUSUARIO_H
#define MANEJADORUSUARIO_H

#include "Usuario.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

class ManejadorUsuario
{
private:
    static ManejadorUsuario* instancia;
    ManejadorUsuario();
    ~ManejadorUsuario();
    map<string, Usuario*> colUsuarios;
public:
    static ManejadorUsuario* getInstancia();
    void agregarUsuario(Usuario*);
    Usuario* buscarUsuario(string);
    void removerUsuario(Usuario*);
};





#endif // MANEJADORUSUARIO_H
