#include "DtPrestamo.h"
#include "Date.h"
#include "Material.h

using namespace std;

DtPrestamo::DtPrestamo() : fechaPrestamo(nullptr), diasPermitidos(0), material(nullptr){}

DtPrestamo::DtPrestamo (Date* fechaPrestamo, int diasPermitidos, Material* material){
    this->fechaPrestamo = fechaPrestamo;
    this->diasPermitidos = diasPermitidos;
    this->material = material;
}

DtPrestamo::DtPrestamo (DtPrestamo &prestamo){
    fechaPrestamo = prestamo.fechaPrestamo;
    diasPermitidos = prestamo.diasPermitidos;
    material = prestamo.material;
}

Date* DtPrestamo::getFechaPrestamo(){
    return this->fechaPrestamo;
}

int DtPrestamo::getDiasPermitidos(){
    return this->diasPermitidos;
}

Material* DtPrestamo::getMaterial(){
    return this->material;
}

DtPrestamo::~DtPrestamo(){}
