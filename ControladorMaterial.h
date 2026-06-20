#ifndef CONTROLADORMATERIAL_H
#define CONTROLADORMATERIAL_H

#include <string>

using namespace std;

class ControladorMaterial : public IControladorMaterial{

private:
        static ControladorMaterial* instancia;
        ControladorMaterial();
        ~ControladorMaterial();

public:
        static ControladorMaterial* getInstancia();
        void registrarMaterial(int codigo, string titulo, int anio);

};

#endif
