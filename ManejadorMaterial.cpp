#include "Material.h"
#include "ManejadorMaterial.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

ManejadorMaterial* ManejadorMaterial::instancia = NULL;

ManejadorMaterial::ManejadorMaterial(){}

ManejadorMaterial::~ManejadorMaterial(){}

ManejadorMaterial* ManejadorMaterial::getInstancia(){
    if (instancia == NULL){
        instancia = new ManejadorMaterial();
    }
    return instancia;
}

void ManejadorMaterial::agregarMaterial(Material* m){
    colMateriales[m->getCodigo()] = m;
}

Material* ManejadorMaterial::buscarMaterial(string codigo){
    map<string, Material*>::iterator it = colMateriales.find(codigo);

    if (it != colMateriales.end()){
        return it->second;
    }
    return NULL;
}

void ManejadorMaterial::removerMaterial(Material* m){
    string clave = m->getCodigo();

    map<string, Material*>::iterator it = colMateriales.find(clave);

    if (it != colMateriales.end()){
        colMateriales.erase(it);
    }
}




