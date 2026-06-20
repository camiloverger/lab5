#include "Material.h"

// Implementar

Material::Material(
    int codigo,
    string titulo,
    int anioPublicacion
) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
}


Material::~Material() {}


int Material::getCodigo()  {
    return codigo;
}

string Material::getTitulo()  {
    return titulo;
}

int Material::getAnioPublicacion()  {
    return anioPublicacion;
}