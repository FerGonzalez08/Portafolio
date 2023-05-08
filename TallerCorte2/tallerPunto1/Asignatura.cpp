#include "Asignatura.h"
#include <iostream>
#include <algorithm>

using namespace std;
Asignatura::Asignatura(){
}
Asignatura::Asignatura(string nombre, int codigo)
{
	this->nombreAsignatura=nombre;
	this->codigo=codigo;
	this->notaFinal=0;	
	notas[0] = 0;
	notas[1] = 0;
	notas[2] = 0;
}

Asignatura::~Asignatura()
{	
}

string Asignatura::getNombreAsignatura(){ return this->nombreAsignatura;}
void Asignatura::setNombreAsignatura(string nombre){ this->nombreAsignatura=nombre;}
int Asignatura::getCodigo(){ return this->codigo;}
void Asignatura::setCodigo(int codigo){ this->codigo=codigo;}
float* Asignatura::getNotas(){ return this->notas;}
void Asignatura::setNotas(float n[]){ copy(n, n+3, notas); }
float Asignatura::getNotaFinal()  { return this->notaFinal;}
void Asignatura::setNotaFinal(float nota){this->notaFinal=nota;}

//se Calcula la nota final
float Asignatura::calcularNotaFinal(){
	float notaEvaluacionContinua=(this->notas[0]*30/100)+(this->notas[1]*30/100);	
	float notaExamenfinal=(this->notas[2]*40/100);	 
	float notaf=notaEvaluacionContinua<notaExamenfinal?notaExamenfinal:notaEvaluacionContinua;
	this->notaFinal=notaf;
	return notaf;
}

