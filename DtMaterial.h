#ifndef DTMATERIAL_H
#define DTMATERIAL_H

#include <string>

using namespace std;

// definicion de el data type
    
class DtMaterial {
private:
    int codigo;
    string titulo;
    int anioPublicacion;

public:
    // Constructor
    DtMaterial();
    DtMaterial(int codigo, string titulo, int anioPublicacion);
    DtMaterial(const DtMaterial &);

    // Destructor
    virtual ~DtMaterial();

    // Getters
    int getCodigo() const;
    string getTitulo() const;
    int getAnioPublicacion() const;
};

#endif