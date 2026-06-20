#include "Revista.h"

using namespace std;

Revista::Revista(
    int codigo,
    string titulo,
    int anioPublicacion,
    int numeroEdicion,
    bool esMensual
)
: Material(codigo, titulo, anioPublicacion)
{
    this->numeroEdicion = numeroEdicion;
    this->esMensual = esMensual;
}

Revista::~Revista() {
}

int Revista::getNumeroEdicion()
{
    return numeroEdicion;
}

bool Revista::getEsMensual()
{
    return esMensual;
}

DtRevista Revista::getDatosMaterial(){
    return DtRevista(getCodigo(), getTitulo(), getAnioPublicacion(), numeroEdicion, esMensual);
}