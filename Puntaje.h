#ifndef PUNTAJE_H
#define PUNTAJE_H

class Puntaje{

private:
    int valor;
public:
    Puntaje();
    Puntaje(int valor);
    Puntaje(Puntaje &);
    int getValotr();
    void setValor(int valor);
    ~Valor();

};

#endif
