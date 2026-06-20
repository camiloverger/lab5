#include "Date.h"

using namespace std;

Date::Date() : dia(28), mes(9), anio(1981){}

Date::Date (int dia, int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

Date::Date (const Date &date){
    dia = date.dia;
    mes = date.mes;
    anio = date.anio;
}

int Date::getDia(){
    return this->dia;
}


int Date::getMes(){
    return this->mes;
}

int Date::getAnio(){
    return this->anio;
}

Date::~Date(){}
