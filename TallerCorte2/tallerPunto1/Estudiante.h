#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include "Asignatura.h"

using namespace std;
class Estudiante
{
	public:
		Estudiante(int codigo, string nombre, string correo);
		~Estudiante();
		
		int getCodigo();
		void setCodigo(int codigo);
		string getNombreCompleto();
		void setNombreCompleto(string nombres);
		string getCorreoElectronico();
		void setCorreoElectronico(string correo);
		int getDocumento();
		void setDocumento(int doc);
		//se devuelve una referencia para no duplicar el objeto
		Asignatura* getMateria() ;
		void setMateria(const Asignatura &as);			
		
	protected:
	
	private:
		int codigo;
		string nombreCompleto;
		string correoElectronico;
		int documento;
		Asignatura materia;
};

#endif