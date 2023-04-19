#include "TicTacToe.h"
#include <iostream>
using namespace std;

//constructor
TicTacToe::TicTacToe(){	
}

//getter
	int TicTacToe::getX(){
		return jugador1.x;
	}
	int TicTacToe::getY(){
		return jugador1.y;
	}
	
//setter
	void TicTacToe::setX(int x){
		this->jugador1.x = x;
	}
	void TicTacToe::setY(int y){
		this->jugador1.y = y;
	}
	
//métodos	
void TicTacToe::  pintarMatriz (char matriz[3][3]){
	for (int i=0; i<3; i++){
				for (int j=0; j<3; j++){
					 cout << "["<<i<<","<<j<<"] ";	 
				}
				cout << endl << endl;
			}
};

void TicTacToe::realizarJugadaJugador1(){
	int nuevaX;
	int nuevaY;
	bool validador = true;
	
	cout << "ingresa coordenada en X " << endl;
	cin >> nuevaX;
	/*do{
		if(nuevaX >= 3){
			validador = false;	
			cout << "por favor ingrese un numero entre 0 y 2" << endl;
		}
		else{
			validador = true;
		}
	}while (validador != true);*/
	setX(nuevaX);
	
	cout << "ingresa coordenada en Y " << endl;
	cin >> nuevaY;
	setX(nuevaY);
};

//void TicTacToe::
/*bool TicTacToe::validarGanador(){
		int matriz [3][3];
			if ((matriz [0][0] == 'x') && (matriz [0][1] == 'x') && (matriz [0][2] == 'x')){
				cout << "el ganador es el jugador 1";
			}
			else if ((matriz [1][0] == 'x') && (matriz [1][1] == 'x') & (matriz [1][2] == 'x')){
				cout << "el ganador es el jugador 1";
			}
			else if ((matriz [2][0] == 'x') && (matriz [2][1] == 'x') & (matriz [2][2] == 'x')){
				cout << "el ganador es el jugador 1";
			}
			
			else if ((matriz [0][0] == 'x') && (matriz [1][1] == 'x') & (matriz [2][2] == 'x')){
				cout << "el ganador es el jugador 1";
			}
			else if ((matriz [0][2] == 'x') && (matriz [1][1] == 'x') & (matriz [2][0] == 'x')){
				cout << "el ganador es el jugador 1";
			}	
		}
};*/



