//Find the largest number in a set of 10 

#include <iostream>

using namespace std; 

int main()
{
	int counter = 0; 
	int number = 0; 
	int largest = 0; 

	while ( counter < 10 )
	{
		cout << "Enter a number . " << endl; 
		cin >> number; 

		//check to seee if largest number

		if (number < 0)
		{
			largest = largest; 
		}

		if ( number > largest )
		{
			largest = number; 
		}
	
		counter ++; 
	}

	cout << "The largest number is " << largest << endl; 
} 

	
