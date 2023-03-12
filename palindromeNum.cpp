#include <iostream>
#include <vector>

using namespace std;
//This program was made to identify if a number is a palindrome.

// This function is used to reverse the number the user has introduce.
int reverse (int n)
{
	int i;
	int revNum;
	int rem;
	
	while (n != 0)
	{
		rem = n % 10;
		revNum = revNum * 10 + rem;
		n /= 10;
	}	
	return revNum;
}

//This main function will call the other functions
int main(int argc, char** argv) 
{
	int n;
	int rev;
	int add;
			
	cout << "enter a number ";
	cin >> n;
	rev = reverse (n);
	
	do
	{
		//cout << "";
		cout << rev << "\n";
		if (n == rev)
		{
			cout << rev << "\n";
			cout << "its a palindrome";	
			break;
		}
		else
		{
			add = rev + n;
			n = add;
			rev = reverse (n);
		}
	} while ( rev != add );	
	
	if (rev == add)
		{
			cout << rev << " is a palindrome";
		}
	return 0;			
}