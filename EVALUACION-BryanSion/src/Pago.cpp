#include "Pago.h"

Pago::Pago(Fecha *fp, float mp)
{
    this -> fechaPago = fp;
    this -> montoPago = mp;
    //ctor
}

Pago::~Pago()
{
    //dtor
}

Fecha* Pago::getFechaPago()
{
    return this -> fechaPago;
}

float Pago::getMontoPago()
{
    return this -> montoPago;
}
