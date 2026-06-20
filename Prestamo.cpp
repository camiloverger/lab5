#include "Prestamo.h"
#include "Date.h"
#include "Material.h"

using namespace std;

Prestamo::Prestamo() : fechaPrestamo(), diasPermitidos(0), material(NULL){}

Prestamo::Prestamo (Date fechaPrestamo, int diasPermitidos, Material* material){
    this->fechaPrestamo = fechaPrestamo;
    this->diasPermitidos = diasPermitidos;
    this->material = material;
}

Prestamo::Prestamo (Prestamo &prestamo){
    fechaPrestamo = prestamo.fechaPrestamo;
    diasPermitidos = prestamo.diasPermitidos;
    material = prestamo.material;
}

Date Prestamo::getFechaPrestamo(){
    return this->fechaPrestamo;
}

void Prestamo::setFechaPrestamo (Date fechaPrestamo){
    this->fechaPrestamo = fechaPrestamo;
}

int Prestamo::getDiasPermitidos(){
    return this->diasPermitidos;
}

void Prestamo::setDiasPermitidos(int diasPermitidos){
    this->diasPermitidos = diasPermitidos;
}

Material* Prestamo::getMaterial(){
    return this->material;
}

void Prestamo::setMaterial(Material* material){
    this->material = material;
}

Prestamo::~Prestamo(){}
