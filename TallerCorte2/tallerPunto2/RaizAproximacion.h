#ifndef RAIZAPROXIMACION_H
#define RAIZAPROXIMACION_H
#include <iostream>
using namespace std;

class RaizAproximacion
{
	public:
		RaizAproximacion();
		float calcularRaiz (int numero);
		int getNumero();
		void setNumero(int numero);
	protected:
		int numero;
};

#endif