#ifndef ICONTROLADORMATERIAL_H
#define ICONTROLADORMATERIAL_H

#include <string>
#include "DtMaterial.h"
#include "DtLibro.h"
#include "DtRevista.h"

using namespace std;

class IControladorMaterial{

public:
    virtual DtMaterial registrarMaterial(int, string, int) = 0;
    virtual string ingresarTipo(string tipo) = 0;
    virtual DtLibro detallesLibro(string, int) = 0;
    virtual DtRevista detallesRevista(int, bool) = 0;
    virtual void confirmarRegistro() = 0;
};

#endif
