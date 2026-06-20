#ifndef CONTROLADORMATERIAL_H
#define CONTROLADORMATERIAL_H

#include "IControladorMaterial.h"
#include <string>

using namespace std;

class ControladorMaterial : public IControladorMaterial {

private:
        static ControladorMaterial* instancia;
        ControladorMaterial();
        ~ControladorMaterial();
        DtMaterial materialActual;
        DtLibro datosLibro;
        DtRevista datosRevista;
        string tipoActual;
public:
        static ControladorMaterial* getInstancia();
        DtMaterial registrarMaterial(int, string, int);
        string ingresarTipo(string);
        DtLibro detallesLibro(string, int);
        DtRevista detallesRevista(int, bool);
        void confirmarRegistro();
};

#endif


