#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "Cliente.h"
#include "Fecha.h"
#include "Pago.h"
#define ELS 5 /// Tamaño del arreglo

class Prestamo
{
    public:
        Prestamo();
        Prestamo (int np, Cliente *cli, Fecha *fa, float ma);
        virtual ~Prestamo();

        int getNumeroPrestamo();
        void setNumeroPrestamo(int np);

        Cliente *getCliente();
        void setCliente(Cliente *cli);

        void setFechaAprobacion(Fecha *fa);
        Fecha *getFechaAprobacion();

        void setMontoAprobado(float ma);
        float getMontoAprobado();

        bool hacerPago(Pago *pg);

        Pago **getLstPagos();

        float getSaldoPendiente();

        int getContadorPagos();

    protected:

    private:
        int numeroPrestamo;
        Cliente *cliente;
        Fecha *fechaAprobacion;
        float montoAprobado;
        Pago *lstPagos[ELS];
        float saldoPendiente;
        int contadorPagos;
};

#endif // PRESTAMO_H
