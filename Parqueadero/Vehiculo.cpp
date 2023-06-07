#include "Vehiculo.h"
using namespace std;

void Vehiculo::setPlaca(string placa) {
    this->placa = placa;
}

void Vehiculo::setTipo(string tipo) {
    this->tipo = tipo;
}

void Vehiculo::setTiempoIngreso(time_t tiempoIngreso) {
    this->tiempoIngreso = tiempoIngreso;
}

std::string Vehiculo::getPlaca() {
    return placa;
}

std::string Vehiculo::getTipo() {
    return tipo;
}

time_t Vehiculo::getTiempoIngreso() {
    return tiempoIngreso;
}