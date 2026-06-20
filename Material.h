#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>

using namespace std;

class Material {
protected:
    // Datos comunes de todo material
    int codigo;
    string titulo;
    int anioPublicacion;

public:

    Material(int codigo, string titulo, int anioPublicacion); 
    virtual ~Material();

    // Consultas
    int getCodigo();
    string getTitulo();
    int getAnioPublicacion(); 
};

#endif