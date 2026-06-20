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
    map<string, Material*> colMateriales;
public:
    ManejadorMaterial* getInstancia();
    void agregarMaterial(Material*);
    Material* buscarMaterial(string);
    void removerMaterial(Material*);
};




#endif // MANEJADORMATERIAL_H


/*
private:
+ instancia : ManejadorMaterial

*/

/*. 
+ getInstancia() : ManejadorMaterial
+ agregarMaterial(Material)
+ buscarMaterial(codMaterial) : Material

*/