#ifndef REVISTA_H
#define REVISTA_H

#include "Material.h"
#include "DtRevista.h"

#include <string>

using namespace std;

class Revista : public Material {
private:

    int numeroEdicion;
    bool esMensual;

public:
    Revista(int codigo, string titulo, int anioPublicacion, int numeroEdicion, bool esMensual);

    virtual ~Revista();

    int getNumeroEdicion();
    bool getEsMensual();
    DtRevista getDatosMaterial();   // <-- agregar esto

};

#endif