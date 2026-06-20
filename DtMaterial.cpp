#include "DtMaterial.h"

// Constructor
DtMaterial::DtMaterial(int codigo, string titulo, int anioPublicacion) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
}

// Destructor
DtMaterial::~DtMaterial() {
}

// Getters
int DtMaterial::getCodigo() const {
    return codigo;
}

string DtMaterial::getTitulo() const {
    return titulo;
}

int DtMaterial::getAnioPublicacion() const {
    return anioPublicacion;
}