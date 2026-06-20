#ifndef ICONTROLADORMATERIAL_H
#define ICONTROLADORMATERIAL_H

#include <string>

using namespace std;

class IControladorMaterial{

public:
    virtual static ControladorMaterial* getInstancia() = 0;
    virtual void registrarMaterial(int codigo, string titulo, int anio) = 0;

};

#endif
