#ifndef DTLECTOR_H
#define DTLECTOR_H

#include "DtUsuario.h"
#include "Date.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class DtLector : public DtUsuario
{
private:
    Date fechaRegistro;
public:
    DtLector();
    DtLector(string, string, string, Date);
    DtLector(const DtLector &);
    Date getFechaRegistro();
    ~DtLector();
};




#endif // DTLECTOR_H