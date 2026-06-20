#ifndef ICONTROLADORINFORMACION_H
#define ICONTROLADORINFORMACION_H

#include <string>

using namespace std;

class DtMaterial;
class DtLibro;
class DtRevista;

class IControladorInformacion {
public:

    virtual ~IControladorInformacion() {}

    virtual DtMaterial consultarMaterial(int codMaterial) = 0;

    virtual DtLibro seleccionarMaterialLibro(int codMaterial) = 0;

    virtual DtRevista seleccionarMaterialRevista(int codMaterial) = 0;

    virtual void consultarPrestamo(string identLector) = 0;
};

#endif