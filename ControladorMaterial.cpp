#include "ControladorMaterial.h"
#include "Material.h"
#include "Libro.h"
#include "Revista.h"
#include "ManejadorMaterial.h"
#include "DtMaterial.h"
#include "DtLibro.h"
#include "DtRevista.h"
#include <string>

using namespace std;



ControladorMaterial* ControladorMaterial::instancia = NULL;
ControladorMaterial::ControladorMaterial(){}
ControladorMaterial::~ControladorMaterial(){}

ControladorMaterial* ControladorMaterial::getInstancia(){
    if(instancia == NULL) 
        instancia = new ControladorMaterial();
    return instancia;
}

DtMaterial ControladorMaterial::registrarMaterial(int codigo, string titulo, int anio){
    materialActual = DtMaterial(codigo, titulo, anio);
    return materialActual;
}

//pre: tipo = "Libro" o "Revista"
string ControladorMaterial::ingresarTipo(string tipo){
    this->tipoActual = tipo;
    return tipoActual;
}

DtLibro ControladorMaterial::detallesLibro(string autor, int paginas){
    return DtLibro(materialActual.getCodigo(), 
                    materialActual.getTitulo(), 
                    materialActual.getAnioPublicacion(), 
                    autor, 
                    paginas);
}

DtRevista ControladorMaterial::detallesRevista(int edicion, bool mensual){
    return DtRevista(materialActual.getCodigo(),
                    materialActual.getTitulo(),
                    materialActual.getAnioPublicacion(),
                    edicion,
                    mensual);
}

void ControladorMaterial::confirmarRegistro(){
    if (tipoActual == "Libro")
    {
        Libro* l = new Libro(
            materialActual.getCodigo(), 
            materialActual.getTitulo(), 
            materialActual.getAnioPublicacion(), 
            datosLibro.getAutor(),  
            datosLibro.getCantPaginas()
        );
        ManejadorMaterial* mm = ManejadorMaterial::getInstancia();
        mm->agregarMaterial(l);
    }
    else if (tipoActual == "Revista")
    {
        Revista* r = new Revista(
            materialActual.getCodigo(), 
            materialActual.getTitulo(), 
            materialActual.getAnioPublicacion(), 
            datosRevista.getNumeroEdicion(), 
            datosRevista.getEsMensual()
        );
        ManejadorMaterial* mm = ManejadorMaterial::getInstancia();
        mm->agregarMaterial(r);
    }
    
    

    
}
 




