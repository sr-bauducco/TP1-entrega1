#include "Estado.h"

Estado::Estado(string estado)
{   this estado = estado;
    Estado.Setestado_atual(estado)
}

Estado::~Estado()
{
    //dtor
}

Estado::Estado(const Estado& other)
{
    //copy ctor
}

Estado& Estado::operator=(const Estado& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
