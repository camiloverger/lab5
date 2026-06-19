#ifndef ICONTROLADORMATERIAL_H
#define ICONTROLADORMATERIAL_H

class IControladorMaterial{

public:
    virtual static ControladorMaterial* getInstancia() = 0;
    virtual void registrarMaterial(int codigo, String titulo, int anio) = 0;

}

#endif
