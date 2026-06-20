#include "Libro.h"

using namespace std;   

Libro::Libro(
    int codigo,
    string titulo,
    int anioPublicacion,
    string autor,
    int cantPaginas

) : Material(codigo, titulo, anioPublicacion) {
    this->autor = autor;
    this->cantPaginas = cantPaginas;
}

// Destructor
Libro::~Libro() {}

// Consultas
string Libro::getAutor() {
    return autor;
}

int Libro::getCantPaginas() {
    return cantPaginas;
}

DtLibro Libro::getDatosMaterial(){
    return DtLibro(getCodigo(), getTitulo(), getAnioPublicacion(), autor, cantPaginas);
}