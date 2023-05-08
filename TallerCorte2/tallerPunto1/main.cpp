#include <iostream>
#include <string>
#include <vector>
#include <cctype> // para usar la función toupper

#include "Asignatura.h"
#include "Estudiante.h"


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calcularNotaMasAlta(vector<Estudiante> lista);

int main(int argc, char** argv) {
	
	// Dado que el usuario puede crear dos o mas estudiantes para calcular la nota, es necesario crear
	//un vector para almacenar los estudiantes ya que nos permite el manejo de memoria dinámica
	vector<Estudiante> listaEstudiantes;
	char salida='-';
	cout<<"Bienvenido al programa para calcular notas de estudiantes "<<endl;
	
	do{	
	
	//system("cls")	;
		cout<<"Ingresa los siguientes datos para calcular la nota del estudiante: "<<endl;
		int code;
		string nombreApellido;
		string email;
		cout<<" Codigo del estudiante "<<endl;
		cin>>code;
		cout<<"Nombre y apellidos del estudiante "<<endl;
		cin.ignore();
		getline(cin, nombreApellido);
		cout<<"Correo electrónico del estudiante "<<endl;
		getline(cin, email);
		Estudiante e (code,nombreApellido,email);		
		
		cout<<"Ingresa el nombre de la asignatura "<<endl;
		string materia;		
		getline(cin, materia);		
		cout<<"Ingresa el codigo de la asignatura "<<endl;
		int codigoMateria;
		cin>>codigoMateria;

		//se crea un arreglo para almacenar las notas del estudiante
		float notasAlumno[3]={0,0,0};
		cout<<" ingresa la primera nota (30%)"<<endl;
		cin>>notasAlumno[0];
		cout<<" ingresa la la segunda nota (30%)"<<endl;
		cin>>notasAlumno[1];
		cout<<" ingresa la nota del examen final (40%)"<<endl;
		cin>>notasAlumno[2];
		//Creamos el objeto asignatura
		Asignatura a(materia, codigoMateria);
		//pasamos las notas a la asignatura
		a.setNotas(notasAlumno);
		//Asignamos la asignatura al estudiante	
		 e.setMateria(a);
		//Dado que se devuelve un puntero hacia la asignatura por eso se debe llamar con un apuntador
		 e.getMateria()->calcularNotaFinal();		 
		cout<<"la nota final del estudiante "<<e.getNombreCompleto()<<" en la materia "<<e.getMateria()->getNombreAsignatura()<<" es "<<e.getMateria()->getNotaFinal()<<endl;						
		listaEstudiantes.push_back(e);
		cout<<"la nota mas alta de los "<<listaEstudiantes.size()<<" estudiantes es "<<calcularNotaMasAlta(listaEstudiantes)<<endl;
		
		cout<<"  ------ ------------- --------------- "<<endl;
		cout<<" Deseas ingresar otro estudiante? (S/N)"<<endl;
		cin>>salida;
		
		
	}while(toupper(salida)=='S');
	
	
	return 0;
}

float calcularNotaMasAlta(vector<Estudiante> lista){
	float notaMasAlta=lista.at(0).getMateria()->getNotaFinal();
	for(Estudiante e:lista){
		if(notaMasAlta<e.getMateria()->getNotaFinal()){
			notaMasAlta = e.getMateria()->getNotaFinal();
		}
	}
	
	return notaMasAlta;
}