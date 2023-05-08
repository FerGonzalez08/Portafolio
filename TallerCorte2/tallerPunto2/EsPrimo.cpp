#include "EsPrimo.h"
#include <iostream>
using namespace std;

EsPrimo::EsPrimo(){
}
int EsPrimo::getNumero(){
	return numero;
}
void EsPrimo::setNumero(int numero){
	this -> numero = numero;
}
bool EsPrimo::calcularPrimo(int numero){
	if (numero== 1){
		return false;
	}
	else if (numero%2 == 0){
		return false;
	}
	else{
		return true;
	}
}
