#ifndef ICONTROLADORMATERIAL_H
#define ICONTROLADORMATERIAL_H

#include <string>

class ControladorMaterial;

using namespace std;

class IControladorMaterial{

public:
    virtual void registrarMaterial(int codigo, string titulo, int anio) = 0;

};

#endif
