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
    Date(const Date &);
    int getDia();
    int getMes();
    int getAnio();
    ~Date();
};

#endif
