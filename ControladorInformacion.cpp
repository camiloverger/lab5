#include "ControladorInformacion.h"

#include "ManejadorMaterial.h"
#include "ManejadorUsuario.h"

#include "Usuario.h"
#include "Material.h"
#include "Libro.h"
#include "Revista.h"

#include "Lector.h"
#include "Prestamo.h"
#include "Puntaje.h"

#include "DtMaterial.h"
#include "DtLibro.h"
#include "DtRevista.h"

#include <map>
#include <iostream>
#include <stdexcept>

using namespace std;

ControladorInformacion* ControladorInformacion::instancia = NULL;

ControladorInformacion::ControladorInformacion() {
    this->materialActual = NULL;
}

ControladorInformacion::~ControladorInformacion() {
}

ControladorInformacion* ControladorInformacion::getInstancia(){
    if (instancia == NULL) {
        instancia = new ControladorInformacion();
    }
    return instancia;
}

DtMaterial ControladorInformacion::consultarMaterial(int codMaterial) {

    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->buscarMaterial(codMaterial);

    if (m == NULL) {
        throw runtime_error("Material no encontrado");
    }

    this->materialActual = m;

    return DtMaterial(m->getCodigo(), m->getTitulo(), m->getAnioPublicacion());
}                   

DtLibro ControladorInformacion::seleccionarMaterialLibro(int codMaterial) {

    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->buscarMaterial(codMaterial);

    if (m == NULL) {
        throw runtime_error("Material no encontrado");
    }

    this->materialActual = m;

    Libro* libro = dynamic_cast<Libro*>(m);

    if (libro == NULL) {
        throw runtime_error("El material encontrado no es un Libro");
    }

    return libro->getDatosMaterial();
}

DtRevista ControladorInformacion::seleccionarMaterialRevista(int codMaterial) {

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

void ControladorInformacion::consultarPrestamo(string identLector) {

    ManejadorUsuario* mu = ManejadorUsuario::getInstancia();

    Usuario* u = mu->buscarUsuario(identLector);

    if (u == NULL) {
        throw runtime_error("Lector no encontrado: " + identLector);
    }

    Lector* l = dynamic_cast<Lector*>(u);

    if (l == NULL) {
        throw runtime_error("El usuario encontrado no es un Lector: " + identLector);
    }

    string nombre = l->getNombre();

    // Recorrer préstamos del lector e imprimirlos
    // (set, no map: Lector guarda los préstamos en un set<Prestamo*>)
    for (Prestamo* p : l->getPrestamos()) {

        Material* m = p->getMaterial();

        int codigo = m->getCodigo();
        string titulo = m->getTitulo();

        cout << "Código: " << codigo << " - Título: " << titulo << "\n";
    }
}