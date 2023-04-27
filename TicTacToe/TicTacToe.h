#ifndef TICTACTOE_H
#define TICTACTOE_H
using namespace std;

struct Coordenada{
	int x;
	int y;
};
	
class TicTacToe{
	public:
		//constructor
		TicTacToe();
		
		//atributos
		char matriz [3][3]= {{'*','*','*'}, {'*','*','*'}, {'*','*','*'} };
		Coordenada jugada;
		char jugadorActual = 'X';
		
		//métodos
		void pintarMatriz ();
		void ponerCoordenadas();
		bool validarGanador();
		bool validarEmpate();
				
	protected:	
		
};	

#endif