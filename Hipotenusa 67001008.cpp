#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float calcularHipotenusa (int cat1, int cat2)
{
	int power = pow(cat1,2) + pow (cat2,2);
	float res = sqrt (power);
	
	return res;
}

main ()
{
	int cat1;
	int cat2;
	float resultado;
	int opcion;
	string salida;
	bool sal = false;
	int i; 
	int j;
	string arr[cat1][cat2];
	
	do
	{		
		cout << "\n\nSelect one Choise\n\n";
		cout << "1. Resize Figure\n";
		cout << "2. Calculate the Hypotenuse\n";
		cout << "3. Print Figure\n";
		cout << "4. Exit\n\n";
		cin >>opcion;
				
		switch (opcion)
		{
			case 1:
			{
				cout << "Enter the first states ";
				cin >> cat1;
				cout << "Enter the Second states ";
				cin >> cat2;
			} 
			break;
				
			case 2:
			{
				resultado = calcularHipotenusa (cat1, cat2);
				cout << "the hipotenusa number are " <<  resultado << "\n\n";		
			}
			break;
				
			case 3:
			{
				
				for (i = 0; i < cat1; i++)
				{
					for (j = 0; j < cat2; j++)
					{
						if ( (i==0) || (j==0) )
						{
							cout << " * ";
						}
						else if ( (i==cat1 - 1) || (j==cat1 - 1) )
						{
							cout << " * ";	
						}
						else 
						{
							cout << "   ";
						}						
					}
					cout << "\n";
				}				
			}
			break;
			
			case 4:
			{
				cout << "do you want to Exit? Y o N ";
				cin >> salida;
				if ( (salida == "Y") || (salida == "y") )
				{
					cout << "are you shure? ";
					cin >> salida;
					if ( (salida == "Y") || (salida == "y") )
					{
						sal = true;
						if (sal == true)
						{
							exit;
						}	
					}
					
				}
			}	
			break;				
		}
	}while (sal!=true);
}
/*
int a; // anchura
int b; // altura
float h; // hipotenusa
float hipotenusa();
int numbers ();


int main(){

	cout<<"Wellcome Please select a number from the menu: \n";
	numbers();
	hipotenusa ();
	
	return 0;
}


// funcion para seleccionar los valores
int numbers(int a, int b){
	cout<< "Please secet the First number A: \n";
	cin>>a;
	cout<<"Now Please select the Second number B:  \n";
	cin>>b;
	return a, b;
}


// funcion para calcular la hipotenusa
float hipotenusa (float h){ // POW es para elevar al cuadrado y SQRT es para Raiz
	if ((a+b) > 0){
		cout<<"the hipotenusa for this numbers are: "<<h<<endl;
		h=sqrt ((a*a)+(b*b));
		return h;
	}
	else{
		cout<<"No possible to operate, please select other number";
	}
	return 0;
}*/