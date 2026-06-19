#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "Date.h"
#include "Material.h"

class Prestamo{

private:
    Date fechaPrestamo;
    int diasPermitidos;
    Material* material;
public:
    Prestamo();
    Prestamo(Date*, int, Material*);
    Prestamo(Prestamo &);
    Date* getFechaPrestamo();
    void setFechaPrestamo(Date*);
    int getDiasPermitidos();
    void setDiasPermitidos(int);
    Material* getMaterial();
    void setMaterial(Material*);
    ~Prestamo();

};

#endif
