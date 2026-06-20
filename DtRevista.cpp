#include "DtRevista.h"


DtRevista::DtRevista() : DtMaterial(), numeroEdicion(0), esMensual(false) { }

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

DtRevista::~DtRevista() {}

int DtRevista::getNumeroEdicion() {
    return numeroEdicion;
}

bool DtRevista::getEsMensual() {
    return esMensual;
}


