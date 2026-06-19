#ifndef CONTROLADORMATERIAL_H
#define CONTROLADORMATERIAL_H

class ControladorMaterial : public IControladorMaterial{

private:
        static ControladorMaterial* instancia;
        ControladorMaterial();
        ~ControladorMaterial();

public:
        static ControladorMaterial* getInstancia();
        void registrarMaterial(int codigo, String titulo, int anio);

}

#endif
