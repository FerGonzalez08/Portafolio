#include <iostream>

#include "Estudiante.h"
#include "Asignatura.h"

using namespace std;

Estudiante::Estudiante(int codigo, string nombre, string correo)
{
	this->codigo=codigo;
	this->nombreCompleto=nombre;
	this->correoElectronico=correo;
	this->documento=0;
	
	
}

Estudiante::~Estudiante()
{
}

int Estudiante::getCodigo(){
	return this->codigo;
}
void Estudiante::setCodigo(int codigo){
	this->codigo=codigo;	
}
string Estudiante::getNombreCompleto(){
	return this->nombreCompleto;
}
void Estudiante::setNombreCompleto(string nombres){
	this->nombreCompleto=nombres;
}
string Estudiante::getCorreoElectronico(){
	return this->correoElectronico;
}
void Estudiante::setCorreoElectronico(string correo){
	this->correoElectronico=correo;
}
int Estudiante::getDocumento(){
	return this->documento;
}
void Estudiante::setDocumento(int doc){
	this->documento=doc;
}
Asignatura* Estudiante::getMateria() {
	return &materia;
}
void Estudiante::setMateria(const Asignatura &as){
	materia=as;
}