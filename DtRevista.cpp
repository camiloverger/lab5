#include "DtRevista.h"

DtRevista::DtRevista(
    int codigo,
    string titulo,
    int anioPublicacion,
    int numeroEdicion,
    bool esMensual
) : DtMaterial(codigo, titulo, anioPublicacion)
{
    this->numeroEdicion = numeroEdicion;
    this->esMensual = esMensual;
}

// Destructor
DtRevista::~DtRevista() {}

// Consultas
int DtRevista::getNumeroEdicion() {
    return numeroEdicion;
}

bool DtRevista::getEsMensual() {
    return esMensual;
}