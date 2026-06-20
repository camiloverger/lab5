#ifndef RELOJ_H
#define RELOJ_H

#include "Date.h"
#include "Hora.h"

class Reloj
{
private:
    static Reloj* instancia;
    Date fecha;
    Hora hora;
    Reloj();
    ~Reloj();
public:
    static Reloj* getInstancia();
    Date getFecha();
    void setFecha(Date);
    Hora getHora();
    void setHora(Hora);
};



#endif // RELOJ_H
