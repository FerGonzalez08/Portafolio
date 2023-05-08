#include "AsignaturaNuevoCalculo.h"
#include <iostream>
#include <algorithm>

AsignaturaNuevoCalculo::AsignaturaNuevoCalculo(string nombre, int codigo){
	
}
float AsignaturaNuevoCalculo::calcularNotaFinal(){
	float notaEvaluacionContinua=(this->notas[0]*100/30)+(this->notas[1]*100/30);	
	float notaExamenfinal=(this->notas[2]*100/40);	 
	float notaf=notaEvaluacionContinua<notaExamenfinal?notaExamenfinal:notaEvaluacionContinua;
	this->notaFinal=notaf;
	return notaf;
};