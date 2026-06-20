#include "DtLibro.h"


DtLibro::DtLibro() : DtMaterial(), autor(" "), cantPaginas(0) {}

DtLibro::DtLibro(
    int codigo,
    string titulo,
    int anioPublicacion,
    string autor,
    int cantPaginas
) : DtMaterial(codigo, titulo, anioPublicacion)
{
    this->autor = autor;
    this->cantPaginas = cantPaginas;
}

// Destructor
DtLibro::~DtLibro() {}

// Consultas
string DtLibro::getAutor() {
    return autor;
}

int DtLibro::getCantPaginas() {
    return cantPaginas;
}

