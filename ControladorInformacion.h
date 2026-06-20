#ifndef CONTROLADORINFORMACION_H
#define CONTROLADORINFORMACION_H

#include "IControladorInformacion.h"

class Material;
class Libro;
class Revista;

class DtMaterial;
class DtLibro;
class DtRevista;


class ControladorInformacion : public IControladorInformacion {

private:

    Material* materialActual;

public:

    ControladorInformacion();

    virtual ~ControladorInformacion();

    DtMaterial consultarMaterial(int codMaterial);

    DtLibro seleccionarMaterialLibro(int codMaterial);

    DtRevista seleccionarMaterialRevista(int codMaterial);

    void consultarPrestamo(string identLector);
};

#endif