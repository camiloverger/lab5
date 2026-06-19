#include "Date.h"

using namespace std;

Date::Date() : dia(28), mes(9), anio(1981){}

Date::Date (int dia, int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

Date::Date (Date &date){
    dia = date.dia;
    mes = date.mes;
    anio = date.anio;
}

int Date::getDia(){
    return this->dia;
}

void Date::setDia(int dia){
    this->dia = dia;
}

int Date::getMes(){
    return this->mes;
}

void Date::setMes(int mes){
    this->mes = mes;
}

int Date::getAnio(){
    return this->anio;
}

void Date::setAnio(int anio){
    this->anio = anio;
}

Date::~Date(){}
