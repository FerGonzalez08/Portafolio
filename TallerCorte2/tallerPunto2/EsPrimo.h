#ifndef ESPRIMO_H
#define ESPRIMO_H
#include <iostream>
using namespace std;

class EsPrimo
{
	public:
		EsPrimo();
		bool calcularPrimo(int numero);
		int getNumero();
		void setNumero(int numero);
	protected:
		int numero;
};

#endif