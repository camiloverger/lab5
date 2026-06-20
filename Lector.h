//
//  Lector.h
//  Biblioteca
//
//  Created by Gonzalo Cabrera on 10/6/26.
//

#ifndef Lector_h
#define Lector_h

#include <stdio.h>
#include <iostream>
#include "Usuario.h"
#include "Puntaje.h"
#include "Prestamo.h"
#include "Date.h"
#include <string>
#include <set>

using namespace std;

class Lector : public Usuario {
private:
    Date fechaRegistro;
    set<Puntaje*> puntajes;
    set<Prestamo*> prestamos;
public:
    Lector();
    Lector(string, string, string, Date);
    Date getFechaRegistro();
    void setFechaRegistro(Date);
    void agregarPrestamo(Prestamo* p);
    ~Lector();
};

#endif /* Lector_h */
