#include <iostream>
#include "TicTacToe.h"
using namespace std;

char matriz[3][3];
bool fin;

	
int main(int argc, char** argv) {

	TicTacToe pintar;
	TicTacToe jugadaJugador1;
	TicTacToe jugadaJugador2;
	
	cout << "Hola binevenidos a Tic Tac Toe" << "\n\n";
	cout << "el jugador 1 tendra la figura 'X' \n";
	cout << "el jugador 2 tendra la figura 'O'" << "\n\n" ;
	cout << "a continuacion, se muestran las coordenadas del tablero"<< endl;
		
	//do{
	
	pintar.pintarMatriz(matriz);
	cout << "jugador 1 por favor elija las coordenadas donde desea situar su figura 'X'"<< endl << endl;

	jugadaJugador1.realizarJugadaJugador1();
	
	/*do{
		cout << "eje x ";
		cin >> jugador1.x;
		if (jugador1.x >= 3 ){
			validador = false;
			cout << "por favor ingrese un valor entre el 0 y el 2" << endl;
		}
		else{
			validador = true;
		}
		
		cout << "eje y ";
		cin >> jugador1.y;
		if (jugador1.y >= 3 ){
			validador = false;
			cout << "por favor ingrese un valor entre el 0 y el 2"<< endl;;
		}
		else{
			validador = true;
		}
			
	}while (validador != true);	
	
	if (validador == true){
		jugadaJugador1.realizarJugada1(jugador1.x, jugador1.y, char matriz) ;
		pintar.pintarMatriz(matriz);
	}
	validador = false;
	
	//}while (fin != true);*/
}