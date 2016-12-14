//makes a hollow square based on size passed in by user

#include <iostream>

using namespace std; 

int main() 
{
	int sizeOf = 0; 
	
	//Getting user input 
	cout << "Enter the size of square.\n"; 
	cin >> sizeOf; 

	//Writing first row of square 
	int astCount = 0; 
	
	while(astCount < sizeOf) 
	{
		cout << "*"; 
		astCount++; 
	}

	//resetting astCount for the last line of square
	astCount = 0; 

	//Adding portion of square with spacing 
	int space = sizeOf - 2; 
	
	cout << "\n"; 

	//Used to keep track of how tall square should be 	
	int colHeight = 0; 
	
	while (colHeight < space) 
	{
		cout << "*"; 
		
		//loop to keep track of spacing along rol
		int spaceCounter = 0; 
			
		while( spaceCounter < space)
		{
			cout << " "; 
			spaceCounter++; 
		}
		
		cout << "*\n"; 
		colHeight++; 
	}

	//Last loop to complete last line of square
	while(astCount < sizeOf)
	{
		cout << "*"; 
		astCount++; 
	}
}	
