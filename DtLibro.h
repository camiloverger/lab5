#ifndef DTLIBRO_H
#define DTLIBRO_H

#include "DtMaterial.h"
#include <string>

using namespace std;

class DtLibro : public DtMaterial {
    
private:
    // Datos específicos del libro
    string autor;
    int cantPaginas;

public:

    // Inicialización del DataType
    DtLibro(
        int codigo,
        string titulo,
        int anioPublicacion,
        string autor,
        int cantPaginas
    );

    // Destructor
    virtual ~DtLibro();

    // Consultas
    string getAutor();
    int getCantPaginas();
};

#endif