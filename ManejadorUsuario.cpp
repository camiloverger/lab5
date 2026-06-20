#include "Usuario.h"
#include "ManejadorUsuario.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>



ManejadorUsuario* ManejadorUsuario::instancia = NULL;

ManejadorUsuario::ManejadorUsuario(){}

ManejadorUsuario::~ManejadorUsuario(){}

ManejadorUsuario* ManejadorUsuario::getInstancia(){
    if (instancia == NULL){
        instancia = new ManejadorUsuario();
    }
    return instancia;
}

void ManejadorUsuario::agregarUsuario(Usuario* u){
    colUsuarios[u->getIdentificador()] = u;
}

Usuario* ManejadorUsuario::buscarUsuario(string clave){
    //buscamos por clave
    map<string, Usuario*>::iterator it = colUsuarios.find(clave);

    if (it != colUsuarios.end()){
        return it->second;
    }

    return NULL;
}

void ManejadorUsuario::removerUsuario(Usuario* u){
    //obtenemos la clave
    string clave = u->getIdentificador();

    //buscamos el usuario a remover
    map<string, Usuario*>::iterator it = colUsuarios.find(clave);

    if (it != colUsuarios.end()){
        colUsuarios.erase(it);
    }
}

