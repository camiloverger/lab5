#ifndef DTPRESTAMO_H
#define DTPRESTAMO_H

#include "Date.h"
#include "Material.h"

class DtPrestamo{

private:
    Date* fechaPrestamo;
    int diasPermitidos;
    Material* material;
public:
    DtPrestamo();
    DtPrestamo(Date*, int, Material*);
    DtPrestamo(DtPrestamo &);
    Date* getFechaPrestamo();
    int getDiasPermitidos();
    Material* getMaterial();
    ~DtPrestamo();

};

#endif
