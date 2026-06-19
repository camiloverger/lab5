#include "Puntaje.h"

using namespace std;

Puntaje::Puntaje() : valor(0){};

Puntaje::Puntaje(int valor){
    this->valor = valor;
}

Puntaje::Puntaje(Puntaje &puntaje){
    this->valor = puntaje.valor;
}

int Puntaje::getValor(){
    return this->valor;
}

void Puntaje::setValor(int valor){
    this->valor = valor;
}

Puntaje::~Puntaje(){}
