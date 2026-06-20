#ifndef CONTROLADORPRESTAMO_H
#define CONTROLADORPRESTAMO_H

#include "ControladorPrestamo.h"

class Lector;
class Material;

class DtLector;
class DtLibro;
class DtRevista;

class Date;

class ControladorPrestamo : public IControladorPrestamo {
private:

    static ControladorMaterial* instancia;
  
    Lector* lectorActual; 
    Material* materialActual; 
    Date fechaPrestamo;
    int cantDias;
    

public:

    ControladorPrestamo();
    virtual ~ControladorPrestamo();
    
    DtLector registrarPrestamo(string identLector); //firma

    DtLibro ingresarCodMaterialLibro(int codMaterial);

    DtRevista ingresarCodMaterialRevista(int codMaterial);

    void detallesPrestamo(Date fechaPrestamo, int cantDias);

    void confirmarPrestamo(bool confirmacion);
};

#endif