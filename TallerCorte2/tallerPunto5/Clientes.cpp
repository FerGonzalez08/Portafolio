#include "Clientes.h"
#include <string>
#include <iostream>
using namespace std;

Clientes::Clientes()
{
}
void Clientes::datosCliente (){
	Cliente persona1;
	
	cout << "ingrese los datos del cliente" << endl;
	cout << "ingrese el nombre ";
	cin >> persona1.nombre;
	cout << "ingrese el apellido ";
	cin >> persona1.apellido;
	cout << "ingrese el numero ";
	cin >> persona1.numero[10];
	cout << "ingrese el email ";
	cin >> persona1.email;
	
	cout << persona1.nombre;
}