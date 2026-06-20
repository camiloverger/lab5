#ifndef CONTROLADORPRESTAMO_H
#define CONTROLADORPRESTAMO_H

#include <string>

using namespace std;

class DtLector;
class DtLibro;
class DtRevista;
class Date;

// Interfaz del controlador de materiales, SOLO contien las firmas que apararecenen los Diagramas de com
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
