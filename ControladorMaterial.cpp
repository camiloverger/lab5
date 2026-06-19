#include "ControladorMaterial.h"
#include "Material.h"
#include "ManejadorMaterial.h"
#include "DtMaterial.h"
#include "DtLibro.h"
#include "DtRevista.h"

using namespace std;

// FIRMAS FUNCIONES INTERNAS

TipoMaterial ingresarTipo();
DtLibro detallesLibro();
DtRevista detallesRevista();
bool confirmarRegistro();

// FUNCIONES PRINCIPALES

ControladorMaterial* ControladorMaterial::instancia = NULL;
ControladorMaterial::ControladorMaterial(){}
ControladorMaterial::~ControladorMaterial(){}

ControladorMaterial* ControladorMaterial::getInstancia(){
    if(instancia == NULL) instancia = new ControladorMaterial();
    return instancia;
}

void registrarMaterial(int codigo, String titulo, int anio){

    DtMaterial material = new DtMaterial(codigo, titulo, anio);
    if(ingresarTipo() == Libro){
        DtLibro detalles = detallesLibro();
        cout << "Código: " << material.codigo <<;
        cout << "Título: " << material.titulo <<;
        cout << "Año: " << material.anio <<;
        cout << "Autor: " << detalles.autor <<;
        cout << "Cantidad de páginas: " << detalles.cantPaginas <<;

        if(confirmarRegistro()){
            Libro libro = new Libro();
            libro->codigo = material->codigo;
            libro->titulo = material->titulo;
            libro->anio = material->anio;
            libro->autor = detalles->autor;
            libro->cantPaginas = detalles->cantPaginas;

            ManejadorMaterial manejador = new ManejadorMaterial();
            manejador.agregarMaterial(libro);

        }

    }else{
        DtRevista detalles = detallesRevista();
        cout << "Código: " << material.codigo <<;
        cout << "Título: " << material.titulo <<;
        cout << "Año: " << material.anio <<;
        cout << "Número de edición: " << detalles.edicion <<;
        if(detalles.mensual) cout << "Mensual: SI" <<;
        else cout << "Mensual: NO" <<;

        if(confirmarRegistro()){
            Revista revista = new Revista();
            revista->codigo = material->codigo;
            revista->titulo = material->titulo;
            revista->anio = material->anio;
            revista->edicion = detalles->edicion;
            revista->mensual = detalles->mensual;

            ManejadorMaterial manejador = new ManejadorMaterial();
            manejador.agregarMaterial(revista);

        }

    }

}

// FUNCIONES INTERNAS

TipoMaterial ingresarTipo(){

    int tipo;
    cout << "Ingrese el tipo de material.\n (1) Libro - (2) Revista\n";
    cin >> tipo;
    if(tipo == 1) return Libro;
    if(tipo == 2) return Revista;
    else ingresarTipo();

}

DtLibro detallesLibro(){

    String autor;
    int cantPaginas;
    cout << "Autor: ";
    cin >> autor;
    cout << "Cantidad de páginas: ";
    cin >> cantPaginas;

    DtLibro libro = new DtLibro(autor, cantPaginas);
    return libro;

}

DtRevista detallesRevista(){

    int edicion;
    bool mensual;
    cout << "Número de edición: ";
    cin >> edicion;
    cout << "Publicación mensual\n(0) NO - (1) SI: ";
    cin >> mensual;

    DtRevista revista = new DtRevista(edicion, mensual);
    return revista;

}

bool confirmarRegistro(){

    int confirmacion;
    cout << "¿confirmar el registro?" <<;
    cout << "(0) NO - (1) SI"
    if(confirmacion) return true;
    if(confirmacion == 0) return false;
    else confirmarRegistro();

}
