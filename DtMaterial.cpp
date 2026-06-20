#include "DtMaterial.h"

// Constructor
DtMaterial::DtMaterial() : codigo(0), titulo(" "), anioPublicacion(0) { }

DtMaterial::DtMaterial(int codigo, string titulo, int anioPublicacion) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
}

DtMaterial::DtMaterial(const DtMaterial &otro){
    this->codigo = otro.codigo;
    this->titulo = otro.titulo;
    this->anioPublicacion = otro.anioPublicacion;
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