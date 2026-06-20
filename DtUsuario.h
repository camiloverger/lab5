#ifndef DtUsuario_h
#define DtUsuario_h

#include <iostream>
#include <string>

using namespace std;

class DtUsuario {
private:
    string identificador;
    string nombre;
    string password;
public:
    DtUsuario();
    DtUsuario(string, string, string);
    DtUsuario(const DtUsuario &);
    string getIdentificador();
    string getNombre();
    string getPassword();
    virtual ~DtUsuario();
};



#endif