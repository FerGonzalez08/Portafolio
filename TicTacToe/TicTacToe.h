#ifndef TICTACTOE_H
#define TICTACTOE_H
using namespace std;
class TicTacToe
{
	protected:
		struct Coordenada{
			int x;
			int y;
		};
		struct Coordenada jugador1;
		struct Coordenada jugador2;
		
	public:
		//constructor
		TicTacToe();
		
		//getter
		int getX();
		int getY();
		
		//setter
		void setX(int x);
		void setY(int y);
		
		//métodos
		void pintarMatriz (char matriz[3][3]);
		bool validarGanador ();
		void realizarJugadaJugador1();
		void pintarJugadas();
};	

#endif