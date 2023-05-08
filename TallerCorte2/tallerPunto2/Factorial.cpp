#include "Factorial.h"
#include <iostream>
using namespace std;

Factorial::Factorial()
{
}
int Factorial::getNumero(){
	return numero;
}
void Factorial::setNumero(int numero){
	this -> numero = numero;
}
double Factorial::calcularFactorial (int numero){
	if (numero == 0) {
        return 1;   
    } 
	else {
        return numero * calcularFactorial(numero-1);  
    }
}