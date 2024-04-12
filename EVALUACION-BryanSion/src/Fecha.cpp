#include "Fecha.h"
#include <iostream>
#include <string.h>
using namespace std;


Fecha::Fecha(int d, int m, int a)
{
    this -> dia = d;
    this -> mes = m;
    this -> anio = a;
    //ctor
}

Fecha::~Fecha()
{
    //dtor
}

void Fecha::mostrarFecha()
{
    cout << dia << "/" << mes << "/" << anio;
}
