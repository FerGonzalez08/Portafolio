#include <iostream>
#include <cmath>
//This program is made to calculate the value of x in the equation = ax^2 + bx + c = 0. 
//Edgar Fernando González H - 67001008 - 07/02/2023

using namespace std;

// This function recieves the values for a,b and c. It operates adding.
float QuadraticX1 (int numA, int numB, int numC)
{
	float totalX1;
		
	totalX1 = (-numB + (sqrt ((numB * numB) - (4 * numA * numC)))) / (2 * numA);
	 
	return totalX1;
}

// This function recieves the values for a,b and c. It operates substracting.
float QuadraticX2 (int numA, int numB, int numC)
{
	float totalX2;
	
	totalX2 = (-numB - (sqrt ((numB * numB) - (4 * numA * numC)))) / (2 * numA);
	
	
	return totalX2; 
}
// This function invoques the functions QuadraticX1 and X2 to find the values of x.
int main(int argc, char** argv) 
{
	int numbA;
	int numbB;
	int numbC;
	float x1;
	float x2;
		
	cout << "type the value of a: ";
	cin >> numbA;
	
	cout << "type the value of b: ";
	cin >> numbB;
	
	cout << "type the value of c: ";
	cin >> numbC;
	
	x1 = QuadraticX1 (numbA, numbB, numbC);
	x2 = QuadraticX2 (numbA, numbB, numbC);
	
	cout << "the value of x1 is = " << x1 << endl;
	cout << "the value of x2 is = " << x2 << endl;
}