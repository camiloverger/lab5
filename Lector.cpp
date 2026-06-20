//
//  Lector.cpp
//  Biblioteca
//
//  Created by Gonzalo Cabrera on 10/6/26.
//

#include "Lector.h"
#include "Prestamo.h"
#include "Puntaje.h"
#include "Date.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <set>

using namespace std;

Lector::Lector() : Usuario(), fechaRegistro(){}

DtLector Lector::getDatosLector(){ // implementacion
    return DtLector(getIdentificador(), getNombre(), getPassword(), fechaRegistro);
}

set<Prestamo*> Lector::getPrestamos(){
    return this->prestamos;
}

Lector::Lector(string identificador, string nombre, string password, Date fechaRegistro) : Usuario(identificador, nombre, password) {
    this->fechaRegistro = fechaRegistro;
}

Date Lector::getFechaRegistro(){
    return this->fechaRegistro;
}

void Lector::setFechaRegistro(Date fechaRegistro){
    this->fechaRegistro = fechaRegistro;
}

void Lector::agregarPrestamo(Prestamo* p){
    prestamos.insert(p);
}


Lector::~Lector(){}




/*
 
 Lector();
 Lector(string, string, string, Date);
 Lector(Lector &);
 Date getFechaRegistro();
 void setFechaRegistro();
 void agregarPrestamo(Prestamo p);
 ~Lector();
 
 */
