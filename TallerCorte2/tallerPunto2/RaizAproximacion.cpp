#include "RaizAproximacion.h"
#include <iostream>
#include <cmath>
using namespace std;

RaizAproximacion::RaizAproximacion()
{
}
int RaizAproximacion::getNumero(){
	return numero;
}
void RaizAproximacion::setNumero(int numero){
	this -> numero = numero;
}
float RaizAproximacion::calcularRaiz (int numero){
	if (numero == 1){
		return 1;
	}
	else if (numero == 0){
		return 0;
	}
	double aprox = numero / 2.0;
    double error = 1e-10;

    while (abs(numero - aprox*aprox) > error) {
        aprox = (aprox + numero/aprox) / 2.0;
    }

    return aprox;
}