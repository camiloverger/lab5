#ifndef CONTROLADORINFORMACION_H
#define CONTROLADORINFORMACION_H

#include "IControladorInformacion.h"
#include <string>

using namespace std;

class Material;
class Libro;
class Revista;

class DtMaterial;
class DtLibro;
class DtRevista;


class ControladorInformacion : public IControladorInformacion {

private:

    static ControladorInformacion* instancia;

    Material* materialActual;

    ControladorInformacion();

public:

    static ControladorInformacion* getInstancia();

    virtual ~ControladorInformacion();

    DtMaterial consultarMaterial(int codMaterial);

    DtLibro seleccionarMaterialLibro(int codMaterial);

    DtRevista seleccionarMaterialRevista(int codMaterial);

    void consultarPrestamo(string identLector);
};

#endif