#ifndef LIBRO_H
#define LIBRO_H

#include "Material.h"
#include "DtLibro.h"

#include <string>

using namespace std;

class Libro : public Material { // herdeda de material, reprsenta a libro
    
private:
    // Datos específicos del libro
    string autor;
    int cantPaginas;

public:

    Libro( int codigo, string titulo, int anioPublicacion, string autor, int cantPaginas);
    virtual ~Libro();
    string getAutor();
    int getCantPaginas();
    DtLibro getDatosMaterial();
};

#endif