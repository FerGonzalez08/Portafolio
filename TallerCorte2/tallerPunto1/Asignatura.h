
#include <iostream>
#ifndef ASIGNATURA_H
#define ASIGNATURA_H

using namespace std;

class Asignatura
{
	public:
		Asignatura(string nombre, int codigo);
		Asignatura();
		~Asignatura();
		
		string getNombreAsignatura();
		void setNombreAsignatura(string nombre);
		int getCodigo();
		void setCodigo(int codigo);
		float* getNotas();
		void setNotas(float n[]);
	
		float getNotaFinal();
		void setNotaFinal( float nota);
				
		float calcularNotaFinal ();
		string nombreAsignatura;
		int codigo;
		float notaFinal;
		float notas[3];
		
	protected:
	
	private:
		
		
};

#endif