#ifndef MANEJADORMATERIAL_H
#define MANEJADORMATERIAL_H

#include "Material.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

class ManejadorMaterial
{
private:
    static ManejadorMaterial* instancia;
    ManejadorMaterial();
    ~ManejadorMaterial();
    map<int, Material*> colMateriales;
public:
    static ManejadorMaterial* getInstancia();
    void agregarMaterial(Material*);
    Material* buscarMaterial(int);
    void removerMaterial(Material*);
};

#endif

/*
private:
+ instancia : ManejadorMaterial

*/

/*. 
+ getInstancia() : ManejadorMaterial
+ agregarMaterial(Material)
+ buscarMaterial(codMaterial) : Material

*/