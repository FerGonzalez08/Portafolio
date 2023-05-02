#ifndef CLIENTES_H
#define CLIENTES_H
#include <string>
using namespace std;

class Clientes
{
	public:
		Clientes();
		get
	protected:
		struct datosCliente
			string nombre;
			string apellido;
			int numero;
			string email;
		
		datosCliente (string nombre, string apellido, int numero, string email){
			this -> nombre = nombre; 
			this -> apellido = apellido;
			this -> numero = numero;
			this -> email = email;
		}	
};

#endif