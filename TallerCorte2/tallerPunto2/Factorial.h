#ifndef FACTORIAL_H
#define FACTORIAL_H
#include <iostream>
using namespace std;

class Factorial
{
	public:
		Factorial();
		double calcularFactorial (int numero);
		int getNumero();
		void setNumero(int numero);
	protected:
		int numero;
};

#endif