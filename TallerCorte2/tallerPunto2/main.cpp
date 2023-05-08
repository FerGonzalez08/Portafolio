#include <iostream>
#include "RaizAproximacion.h"
#include "Factorial.h"
#include "EsPrimo.h"
using namespace std;

int main(int argc, char** argv) {
	int numeroDeseado; 
	RaizAproximacion raizNum;
	Factorial factorialNum;
	EsPrimo primoNum;
	
	cout << "ingrese el numero que desea usar para las operaciones" << endl;
	cin >> numeroDeseado;
	cout << "la raiz cuadrada de " << numeroDeseado << " es " << raizNum.calcularRaiz(numeroDeseado)  << endl; 
	cout << "el factorial del numero " << numeroDeseado << " es " << factorialNum.calcularFactorial(numeroDeseado) << endl;
	if (primoNum.calcularPrimo(numeroDeseado) == true){
		cout << "el numero " << numeroDeseado << " es primo";
	}
	else if (numeroDeseado == 1){
		cout << "el numero " << numeroDeseado << " no es ni par ni primo";
	}	
	else{
		cout << "el numero " << numeroDeseado << " es par";
	}
	return 0;
}