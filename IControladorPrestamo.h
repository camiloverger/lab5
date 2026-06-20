#ifndef ICONTROLADORPRESTAMO_H
#define ICONTROLADORPRESTAMO_H

#include <string>

using namespace std;

class DtLector;
class DtLibro;
class DtRevista;
class Date;

class IControladorPrestamo {
public:

    virtual ~IControladorPrestamo() {}

    virtual DtLector registrarPrestamo(string identLector) = 0;

    virtual DtLibro ingresarCodMaterialLibro(int codMaterial) = 0;

    virtual DtRevista ingresarCodMaterialRevista(int codMaterial) = 0;

    virtual void detallesPrestamo(Date fechaPrestamo, int cantDias) = 0;

    virtual void confirmarPrestamo(bool confirmacion) = 0;
};

#endif