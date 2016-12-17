// Make diamond 

#include <iostream>

using namespace std; 

int main() 
{
	int number = 5; 

	for (int i = 1; i <= number + 1; i++)
	{
		for (int j = i; j <= number; j++)
		{
			cout << " "; 
		}
		
		for (int k = 0; k < i; k++)
		{
			cout << "*";
			
			if (k >= 1)
			{
				cout << "*"; 
			} 
		}
	
		cout << "\n"; 
	}
	
	for (int i = 1; i<= number + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " "; 
		}

		for (int k = number * 2 - i; k >= i; k--)
		{
			cout << "*";
			
		}
		
		cout << "\n"; 
	}
} 
