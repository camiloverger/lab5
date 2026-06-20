#ifndef HORA_H
#define HORA_H

class Hora
{
private:
    unsigned int h;
    unsigned min;
public:
    Hora();
    Hora(unsigned int, unsigned int);
    unsigned int getH();
    void setH(unsigned int);
    unsigned int getMin();
    void setMin(unsigned int);
    ~Hora();
};


#endif // HORA_H