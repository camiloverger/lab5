#ifndef CONTROLADORPRESTAMO_H
#define CONTROLADORPRESTAMO_H

#include "IControladorPrestamo.h"
#include "Date.h"      // <-- agregar esto
#include <string>

using namespace std;

class Lector;
class Material;

class DtLector;
class DtLibro;
class DtRevista;

// ya no hace falta "class Date;" porque incluimos Date.h completo

class ControladorPrestamo : public IControladorPrestamo {
private:

    static ControladorPrestamo* instancia;

    Lector* lectorActual;
    Material* materialActual;
    Date fechaPrestamo;
    int cantDias;

    ControladorPrestamo();

public:

    static ControladorPrestamo* getInstancia();

    virtual ~ControladorPrestamo();

    DtLector registrarPrestamo(string identLector);

    DtLibro ingresarCodMaterialLibro(int codMaterial);

    DtRevista ingresarCodMaterialRevista(int codMaterial);

    void detallesPrestamo(Date fechaPrestamo, int cantDias);

    void confirmarPrestamo(bool confirmacion);
};

#endif