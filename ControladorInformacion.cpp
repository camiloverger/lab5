#include "ControladorInformacion.h"

#include "ManejadorMaterial.h"
#include "ManejadorUsuario.h"

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

ControladorInformacion::ControladorInformacion() {
}

ControladorInformacion::~ControladorInformacion() {
}

DtMaterial ControladorInformacion::consultarMaterial(int codMaterial) {

    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->find(codMaterial);

    this->materialActual = m;

    return m->getDatosMaterial();
}                   

DtLibro ControladorInformacion::seleccionarMaterialLibro(int codMaterial) {

    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->find(codMaterial);

    this->materialActual = m;

    Libro* libro = dynamic_cast<Libro*>(m);

    DtLibro datosLibro = libro->getDatosMaterial();

    float suma = 0;
    int cantidad = 0;

    map<int, Puntaje*>::iterator it;

    for (it = libro->getPuntajes().begin();
         it != libro->getPuntajes().end();
         ++it)
    {
        Puntaje* p = it->second;

        suma += p->getValor();

        cantidad++;
    }

    float promedio = 0;

    if (cantidad > 0)
        promedio = suma / cantidad; 

    return datosLibro;
}

DtRevista ControladorInformacion::seleccionarMaterialRevista(int codMaterial) {

    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->find(codMaterial);

    this->materialActual = m;

    Revista* revista = dynamic_cast<Revista*>(m);

    DtRevista datosRevista = revista->getDatosMaterial();

    float suma = 0;
    int cantidad = 0;

    map<int, Puntaje*>::iterator it;

    for (it = revista->getPuntajes().begin();
         it != revista->getPuntajes().end();
         ++it)
    {
        Puntaje* p = it->second;

        suma += p->getValor();

        cantidad++;
    }

    float promedio = 0;

    if (cantidad > 0)
        promedio = suma / cantidad;

    return datosRevista;
}

void ControladorInformacion::consultarPrestamo(string identLector) {

    ManejadorUsuario* mu = ManejadorUsuario::getInstancia();

    // Buscar el lector por identificador
    Lector* l = mu->find(identLector);

    // Obtener nombre del lector
    string nombre = l->getNombre();

    // Recorrer préstamos del lector
    map<int, Prestamo*>::iterator it;

    for (it = l->getPrestamos().begin();
         it != l->getPrestamos().end();
         ++it)
    {
        Prestamo* p = it->second;

        Material* m = p->getMaterial();

        DtMaterial dtM = m->getDatosMaterial();

        int codigo = m->getCodigo();

        string titulo = m->getTitulo();


    }
}