//Prints a string (array) using a recursive function with void type
//Chapter 7_30
#include <array>
#include <iostream>
#include <string>
using namespace std; 

void printArray(string myString, int startPosit, int endPosit); 

int main()
{
	//Getting user input 
	string userInput = " ";
	cout << "Enter data for array. " << endl; 
	getline(cin, userInput); 

	//Getting indices for array
	int startPosit = 0; 
	int endPosit = userInput.length(); 

	printArray(userInput, startPosit, endPosit); 

}

void printArray(string myString, int startPosit, int endPosit)
{
	if (startPosit == endPosit)
	{
		return; 
	}
	else
	{
		cout << myString[startPosit]; 
		printArray(myString, startPosit + 1, endPosit); 
	}
}
