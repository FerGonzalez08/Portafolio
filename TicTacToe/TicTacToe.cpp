#include <iostream>
#include "TicTacToe.h"

using namespace std;

//constructor
TicTacToe::TicTacToe(){
	cout << "Hola binevenidos a Tic Tac Toe" << "\n\n";
	cout << "el jugador 1 tendra la figura 'X' \n";
	cout << "el jugador 2 tendra la figura 'O'" << "\n" ;
	
}

//métodos	
void TicTacToe :: pintarMatriz(){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3;j++){
			cout << matriz [i][j] << " ";
		}
	cout << endl;
	}
}
	
void TicTacToe::ponerCoordenadas(){
	int x;
	int y;
	bool validadorCoordenadas;
	
	do {
		cout << "jugador con la figura " << jugadorActual << " ingrese las coordenadas. Ejemplo 1 2" << endl << endl;
		do{
			cin >> x >> y;
			if (x<0 || x>2 && y<0 || y>2){
				validadorCoordenadas = false;
				cout << "por favor ingrese un valor entre 0 y 2" << endl;
			}
			else{
				validadorCoordenadas = true;
			}
		}while (validadorCoordenadas != true);
		
		
			if (matriz[x][y] == '*'){
			matriz[x][y] = jugadorActual;
			}
			else{
				cout << "!!!!!POR FAVOR INGRESE OTRAS COORDENADAS, ESA CASILLA YA ESTA OCUPADA¡¡¡¡¡" << endl;
			}
	
	}while (matriz[x][y] != jugadorActual);
	if (jugadorActual == 'X'){
			jugadorActual = 'O';
		}
		else {
			jugadorActual = 'X';
		};
};

bool TicTacToe::validarGanador(){
	int i = 0;
	i++;
	if(i==5){
		cout << "empate";
		return true;
	}
	if (matriz [0][0] == 'X' && matriz [0][1] == 'X' && matriz [0][2] == 'X' ||
		matriz [1][0] == 'X' && matriz [1][1] == 'X' && matriz [1][2] == 'X' ||
		matriz [2][0] == 'X' && matriz [2][1] == 'X' && matriz [2][2] == 'X' ||
		matriz [0][0] == 'X' && matriz [1][0] == 'X' && matriz [2][0] == 'X' ||
		matriz [0][1] == 'X' && matriz [1][1] == 'X' && matriz [2][1] == 'X' ||
		matriz [0][2] == 'X' && matriz [1][2] == 'X' && matriz [2][2] == 'X' ||
		matriz [0][0] == 'X' && matriz [1][1] == 'X' && matriz [2][2] == 'X' ||
		matriz [0][2] == 'X' && matriz [1][1] == 'X' && matriz [2][0] == 'X' ){
			return true;		
	}
	else if (matriz [0][0] == 'O' && matriz [0][1] == 'O' && matriz [0][2] == 'O' ||
		matriz [1][0] == 'O' && matriz [1][1] == 'O' && matriz [1][2] == 'O' ||
		matriz [2][0] == 'O' && matriz [2][1] == 'O' && matriz [2][2] == 'O' ||
		matriz [0][0] == 'O' && matriz [1][0] == 'O' && matriz [2][0] == 'O' ||
		matriz [0][1] == 'O' && matriz [1][1] == 'O' && matriz [2][1] == 'O' ||
		matriz [0][2] == 'O' && matriz [1][2] == 'O' && matriz [2][2] == 'O' ||
		matriz [0][0] == 'O' && matriz [1][1] == 'O' && matriz [2][2] == 'O' ||
		matriz [0][2] == 'O' && matriz [1][1] == 'O' && matriz [2][0] == 'O' ){
			return true;		
	}								
};

bool TicTacToe::validarEmpate(){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3;j++){
			if(matriz [i][j] == '*'){
				return false;
			}
		}
	}	
};



