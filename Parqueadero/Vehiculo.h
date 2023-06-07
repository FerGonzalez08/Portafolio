#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

class Vehiculo {
    private:
        string placa;
        string tipo;
        time_t tiempoIngreso;

    public:
        void setPlaca(std::string placa);
        void setTipo(std::string tipo);
        void setTiempoIngreso(time_t tiempoIngreso);
        string getPlaca();
        string getTipo();
        time_t getTiempoIngreso();
};

#endif