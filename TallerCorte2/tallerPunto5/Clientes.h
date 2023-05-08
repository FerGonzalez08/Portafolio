#ifndef CLIENTES_H
#define CLIENTES_H
#include <string>
using namespace std;

class Clientes
{
	public:
		// atributos
		struct Cliente{
			string nombre;
			string apellido;
			int numero [10];
			string email;
		};
		
		// constructor
		Clientes();
		
		// métodos
		void datosCliente();
	protected:
		
			
		
		
		
};

#endif