#ifndef DATE_H
#define DATE_H

class Date {

private:
    int dia;
    int mes;
    int anio;
public:
    Date();
    Date(int, int, int);
    Date(Date &);
    int getDia();
    void setDia(int);
    int getMes();
    void setMes(int);
    int getAnio();
    void setAnio(int);
    ~Date();

};

#endif
