#include "Hora.h"

using namespace std;

Hora::Hora() : h(0), min(0) {}

Hora::Hora(unsigned int h, unsigned int min){
    this->h = h;
    this->min = min;
}

unsigned int Hora::getH(){
    return this->h;
}

void Hora::setH(unsigned int h){
    this->h = h;
}

unsigned int Hora::getMin(){
    return this->min;
}

void Hora::setMin(unsigned int min){
    this->min = min;
}

Hora::~Hora(){}

