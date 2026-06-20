//
//  Usuario.h
//  Biblioteca
//
//  Created by Gonzalo Cabrera on 10/6/26.
//

#ifndef Usuario_h
#define Usuario_h

#include <iostream>
#include <string>

using namespace std;

class Usuario {
private:
    string identificador;
    string nombre;
    string password;
public:
    Usuario();
    Usuario(string, string, string);
    string getIdentificador();
    void setIdentificador(string);
    string getNombre();
    void setNombre(string);
    string getPassword();
    void setPassword(string);
    bool validarContrasenia(string);
    virtual string tipoUsuario() = 0;
    virtual ~Usuario();
};



#endif /* Usuario_h */
