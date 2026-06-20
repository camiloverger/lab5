#ifndef PUNTAJE_H
#define PUNTAJE_H

class Puntaje{

private:
    int valor;
public:
    Puntaje();
    Puntaje(int valor);
    Puntaje(Puntaje &);
    int getValor(); // "valor" mal escrito 
    void setValor(int valor);
    ~Puntaje();   // <-- corregido 

};

#endif
