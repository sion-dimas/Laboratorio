#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string.h>
#include <string.h>
using namespace std;

class Cliente
{
    public:
        Cliente(int id, string n, string a);
        virtual ~Cliente();

        int getIdCliente();

        string  getNombre();

        string getApellido();

    protected:

    private:
        int idCliente;
        string nombre;
        string apellido;
};


#endif // CLIENTE_H
