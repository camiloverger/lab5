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

    DtRevista();
    DtRevista(
        int codigo,
        string titulo,
        int anioPublicacion,
        int numeroEdicion,
        bool esMensual
    );

    virtual ~DtRevista();
    int getNumeroEdicion();
    bool getEsMensual();
    DtRevista getDatosMaterial();
};

#endif
