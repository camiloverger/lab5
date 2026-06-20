#include "ControladorPrestamo.h"

#include "ManejadorMaterial.h"
#include "ManejadorUsuario.h"

#include "Material.h"
#include "Libro.h"
#include "Revista.h"

#include "Lector.h"

#include "Prestamo.h"

#include "DtLector.h"
#include "DtLibro.h"
#include "DtRevista.h"

#include "Date.h"


ControladorMaterial::ControladorPrestamo() {  
}

ControladorMaterial::~ControladorPrestamo() { 
}

DtLector ControladorMaterial::registrarPrestamo(string identLector) {

    ManejadorUsuario* mu = ManejadorUsuario::getInstancia();

    Lector* l = mu->find(identLector);    

    this->lectorActual = l; 

    return l->getDatosLector(); 

}


DtLibro ControladorMaterial::ingresarCodMaterialLibro(int codMaterial) {
    
    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->find(codMaterial); // buscar material asociado al cod
 
    this->materialActual = m; // recordar material

    Libro* libro = dynamic_cast<Libro*>(m); // Convertir el material encontrado a Libro ya que libro tiene atrbutor proios uqe no estan enmaterial 

    return libro->getDatosMaterial(); // retornar informacion
}



DtRevista ControladorMaterial::ingresarCodMaterialRevista(int codMaterial) {

    ManejadorMaterial* mm = ManejadorMaterial::getInstancia();

    Material* m = mm->find(codMaterial);

    this->materialActual = m;

    Revista* revista = dynamic_cast<Revista*>(m);

    return revista->getDatosMaterial();
}



void ControladorMaterial::detallesPrestamo(Date fechaPrestamo, int cantDias) {

    this->fechaPrestamo = fechaPrestamo;
    this->cantDias = cantDias;

}



void ControladorMaterial::confirmarPrestamo(bool confirmacion) {

        // Crear el préstamo con los datos recordados
        Prestamo* p = new Prestamo(
            this->fechaPrestamo,
            this->cantDias
        );

        p->setMaterial(this->materialActual); // Asociar el material seleccionado al préstamo

        this->lectorActual->addPrestamo(p); // Agregar el préstamo al lector seleccionado

    }



