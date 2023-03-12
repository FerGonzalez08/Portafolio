#include <iostream>
using namespace std;

//This program was made to find the determinant of a 3 x 3 matrix.
int main()
{
	int mat[3][3];
	int i;
	int j;
	int det1;
	int det2;
	int detTotal;
	
    cout << "This programm will find the determinant of a 3 x 3 matrix.\n\n";
    
//This loop will ask the values for the positions of the matrix.
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << "please enter the value of the " << "position "<< i + 1 << "," << j + 1 << "\n";
			cin >> mat[i][j];
		}
	}
//This loop will print the matrix.	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << "\n";
	}
    
 //These operations will find the determinant.
    det1 = (mat[0][0] * mat[1][1] * mat[2][2]) + (mat[0][1] * mat[1][2] * mat[2][0]) + (mat[0][2] * mat[1][0] * mat[2][1]);
    det2 = (mat[2][0] * mat[1][1] * mat[0][2]) + (mat[2][1] * mat[1][2] * mat[0][0]) + (mat[2][2] * mat[1][0] * mat[0][1]);
    detTotal = det1 - det2;
    
 //This sentence will show the result.
    cout << "\nThe determinant is: " << detTotal;

    return 0;
}
