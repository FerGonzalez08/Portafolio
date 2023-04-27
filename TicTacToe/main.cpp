#include <iostream>
#include "TicTacToe.h"
using namespace std;

int main(int argc, char** argv) {
	
	TicTacToe jugar;
	jugar.pintarMatriz();
	
	for (int i = 0; i < 9; i++){
		jugar.ponerCoordenadas();
		cout << endl;
		jugar.pintarMatriz();
		cout << "__________________" << endl << endl;
		jugar.validarGanador();
		if (jugar.validarGanador() == true){
			cout << "Felicitaciones eres el ganador";
			break;
		}
		jugar.validarEmpate();
		if (jugar.validarEmpate() == true){
			cout << "!!!Empate¡¡¡";
			break;
		}
	}
}
	
	


			

	
	
	
	

