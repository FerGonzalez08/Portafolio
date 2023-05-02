#include <iostream>

using namespace std;

float raizAproximacion(int numeroInicial){
	if (numeroInicial == 1){
		return 1;
	}
	else if (numeroInicial == 0){
		return 0;
	}
	double aprox = numeroInicial / 2.0;
    double error = 1e-10;

    while (abs(numeroInicial - aprox*aprox) > error) {
        aprox = (aprox + numeroInicial/aprox) / 2.0;
    }

    return aprox;
}

double factorial (int numeroInicial){
	 if (numeroInicial == 0) {
        return 1;   
    } 
	else {
        return numeroInicial * factorial(numeroInicial-1);  
    }
}

bool esPrimo(int numeroInicial){
	if (numeroInicial== 1){
		return false;
	}
	else if (numeroInicial%2 == 0){
		return false;
	}
	else{
		return true;
	}
}

main (){
	int numeroInicial; 
	int factor;
	int raiz; 	
	
	cout << "ingrese el numero que desea usar para las operaciones" << endl;
	cin >> numeroInicial;
	cout << "la raiz cuadrada de " << numeroInicial << " es " << raizAproximacion(numeroInicial) << endl; 
	cout << "el factorial del numero " << numeroInicial << " es " << factorial(numeroInicial) << endl;
	if (esPrimo(numeroInicial) == true){
		cout << "el numero " << numeroInicial << " es primo";
	}	
	else{
		cout << "el numero " << numeroInicial << " NO es primo";
	}
}