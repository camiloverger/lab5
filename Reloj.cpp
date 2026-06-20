#include "Date.h"
#include "Hora.h"
#include "Reloj.h"


Reloj* Reloj::instancia = NULL;

Reloj::Reloj() { };

Reloj::~Reloj() { };

Reloj* Reloj::getInstancia(){
    if (instancia == NULL){
        instancia = new Reloj();
    }
    return instancia;
}


Date Reloj::getFecha(){
    return this->fecha;
}

void Reloj::setFecha(Date fecha){
    this->fecha = fecha;
}

Hora Reloj::getHora(){
    return this->hora;
}

void Reloj::setHora(Hora hora){
    this->hora = hora;
}


