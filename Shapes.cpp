// Priting 4 shapes based on Chp5_13

#include <iostream>
using namespace std; 

int main()
{
	int number = 10; 

	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
	
		cout << "\n"; 
	}

	cout << "\n"; 
	for (int i = 1; i <= number; i++)
	{
	
		for (int j = i; j <= number; j++ )
		{
			cout << "*"; 
		}
		
		cout << "\n"; 
	}
	
	cout << "\n"; 
	
	for (int i = 1; i <= number; i++)
	{
		for (int j = i; j <= number; j++)
		{
			cout << " "; 
		}
		
		for (int k = 0; k < i; k++)
		{	
			cout << "*";
		}	
	
		cout << "\n";  
	}
	
	cout << "\n"; 
		
	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; j < i ; j++)
		{
			cout << " "; 
		}
		
		for (int k = number; k >= i  ; k--)	
		{
			cout << "*"; 
		}
	
		cout << "\n"; 
	}
}		 

