#ifndef ASIGNATURANUEVOCALCULO_H
#define ASIGNATURANUEVOCALCULO_H

#include "Asignatura.h"

class AsignaturaNuevoCalculo : public Asignatura
{
	public:
		AsignaturaNuevoCalculo(string nombre, int codigo);
		float calcularNotaFinal ();
	protected:
};

#endif