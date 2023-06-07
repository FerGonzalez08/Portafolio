#ifndef PARQUEADERO_H
#define PARQUEADERO_H
#include "Vehiculo.h"
using namespace std;

enum Moneda {
    MIL_PESOS = 1,
    DOS_MIL_PESOS,
    CINCO_MIL_PESOS,
    DIEZ_MIL_PESOS,
    VEINTE_MIL_PESOS,
    CINCUENTA_MIL_PESOS
};

class Parqueadero {
    private:
        Vehiculo carros[20];
        Vehiculo motos[7];
        int espaciosCarrosDisponibles;
        int espaciosMotosDisponibles;

    public:
        Parqueadero();
        void registrarVehiculo();
        void mostrarEspaciosDisponibles();
        void realizarPago();
};

#endif