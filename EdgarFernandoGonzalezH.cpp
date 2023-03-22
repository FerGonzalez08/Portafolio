#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

main ()
{
	int n;
	int i, j, k;
	char opt;
	bool cont = false;
	int mitad;
	int may;
	
	srand((unsigned) time(NULL));
	printf ("defina el tama%co del arreglo\n",164);
	cin >> n;
	int arr [n];
	int arrmay[n];
	
	do
	{
		cout << "que tipo de llenado desea?\n";
		cout << "a) Automatico\n";
		cout << "b) Manual\n\n";
		cin >> opt;
		
		if ( (opt == 'a') || (opt == 'b') )
		{
			cont = true;
		}
		else 
		{
			cout << "por favor ingrese una opcion valida entre a) o b)\n";
		}
	}while (cont == false);
	
	cont = false;
		
	switch (opt)
	{
		case 'a':
		{
			n = n-1;
			for (i = 0; i < n ; i++)
			{
				arr[i] = 100 + (rand() % 101);	
			}
			for (j = 0; j <= n; j++)
			{
				cout << arr[j] << ", ";
			}
			mitad = n/2;
			cout << "\n\nel valor de la mitad del arreglo es el " << arr[mitad] << "\n";
			
			for (j = 0; j<n; j++)
			{
				if (arr[j] % 2 == 0)
				{
					cout << "\nes par "<<arr[j];
				}
				else
				{
					cout << "\nes impar "<<arr[j];
				}			
			}
			cout << "\n \n";
			for (j = 0; j<n; j++)
			{
				for (k=j+1; k<n; k++)
				{
					if ( (arr[k] < arr[j]))
					{
						may = arr[k];
						arr [k] = arr [j];
						arr [j] = may;
					}	
				}						
			}
			for (j=0; j<n; j++)			
			{
				cout << arr [j] << " \n";
			}
			cout << "el numero menor es "<<arr[0] << " y el numero mayor es " << arr[n-1];
		
						
		}	 
		break;
		
		case 'b':
		{
			for (i = 0; i < n ; i++)
			{
				do
				{
					cout << "ingrese el dato #" << i+1 << " ";
					cin >> arr[i];
					if ( (arr[i] >= 0) && (arr[i] <= 99) )
					{
						cont = true;
					}
					else
					{
						cout << "por favor ingrese un numero entre 0 y 99\n";  
					}	
				}while (cont == false);			
			}
			for (j = 0; j <= n; j++)
			{
				cout << arr[j] << ", ";
			}
			mitad = n/2;
			cout << "\n\nel valor de la mitad del arreglo es el " << arr[mitad] << "\n";
			
			for (j = 0; j<n; j++)
			{
				if (arr[j] % 2 == 0)
				{
					cout << "\nes par "<<arr[j];
				}
				else
				{
					cout << "\nes impar "<<arr[j];
				}			
			}
			cout << "\n \n";
			for (j = 0; j<n; j++)
			{
				for (k=j+1; k<n; k++)
				{
					if ( (arr[k] < arr[j]))
					{
						may = arr[k];
						arr [k] = arr [j];
						arr [j] = may;
					}	
				}						
			}
			for (j=0; j<n; j++)			
			{
				cout << arr [j] << " \n";
			}
			cout << "el numero menor es "<<arr[0] << " y el numero mayor es " << arr[n-1];
			
		}
		break;		
	}
	return 0;
}