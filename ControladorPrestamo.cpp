#include "ControladorPrestamo.h"

#include "ManejadorMaterial.h"
#include "ManejadorUsuario.h"

#include "Usuario.h"
#include "Material.h"
#include "Libro.h"
#include "Revista.h"

#include "Lector.h"

#include "Prestamo.h"

#include "DtLector.h"
#include "DtLibro.h"
#include "DtRevista.h"

#include "Date.h"

#include <stdexcept>

ControladorPrestamo* ControladorPrestamo::instancia = NULL;

ControladorPrestamo::ControladorPrestamo() {
    this->lectorActual = NULL;
    this->materialActual = NULL;
    this->cantDias = 0;
}

ControladorPrestamo::~ControladorPrestamo() {
}

ControladorPrestamo* ControladorPrestamo::getInstancia() {
    if (instancia == NULL) {
        instancia = new ControladorPrestamo();
    }
    return instancia;
}


// a implementar

DtLector ControladorPrestamo::registrarPrestamo(string identLector) {

    ManejadorUsuario* mu = ManejadorUsuario::getInstancia();

    Usuario* u = mu->buscarUsuario(identLector);

    if (u == NULL) {
        throw runtime_error("Lector no encontrado: " + identLector);
    }

    Lector* l = dynamic_cast<Lector*>(u);

    if (l == NULL) {
        throw runtime_error("El usuario encontrado no es un Lector: " + identLector);
    }

    this->lectorActual = l;

    return l->getDatosLector();
}


DtLibro ControladorPrestamo::ingresarCodMaterialLibro(int codMaterial) {

    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->buscarMaterial(codMaterial); // buscar material asociado al cod

    if (m == NULL) {
        throw runtime_error("Material no encontrado");
    }

    this->materialActual = m; // recordar material

    Libro* libro = dynamic_cast<Libro*>(m); // Convertir el material encontrado a Libro

    if (libro == NULL) {
        throw runtime_error("El material encontrado no es un Libro");
    }

    return libro->getDatosMaterial(); // retornar informacion
}


DtRevista ControladorPrestamo::ingresarCodMaterialRevista(int codMaterial) {

    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->buscarMaterial(codMaterial);

    if (m == NULL) {
        throw runtime_error("Material no encontrado");
    }

    this->materialActual = m;

    Revista* revista = dynamic_cast<Revista*>(m);

    if (revista == NULL) {
        throw runtime_error("El material encontrado no es una Revista");
    }

    return revista->getDatosMaterial();
}

void ControladorPrestamo::detallesPrestamo(Date fechaPrestamo, int cantDias) {

    this->fechaPrestamo = fechaPrestamo;
    this->cantDias = cantDias;

}


void ControladorPrestamo::confirmarPrestamo(bool confirmacion) {

    if (!confirmacion) {
        return;
    }

    if (this->lectorActual == NULL || this->materialActual == NULL) {
        throw runtime_error("Faltan datos para confirmar el préstamo");
    }

    Prestamo* p = new Prestamo(
        this->fechaPrestamo,
        this->cantDias,
        this->materialActual
    );

    this->lectorActual->agregarPrestamo(p); // Agregar el préstamo al lector seleccionado

}