#ifndef DTREVISTA_H
#define DTREVISTA_H

#include "DtMaterial.h"
#include <string>

using namespace std;

class DtRevista : public DtMaterial {
private:
    int numeroEdicion;
    bool esMensual;

public:

    // Inicialización del DataType
    DtRevista(
        int codigo,
        string titulo,
        int anioPublicacion,
        int numeroEdicion,
        bool esMensual
    );

    // Destructor
    virtual ~DtRevista();

    // Consultas
    int getNumeroEdicion();

    bool getEsMensual();
};

#endif
