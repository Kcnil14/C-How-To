// Calculates exponentiation using base and power from user
// Chapter 6_36 Uses recursion per specifications 

#include <iostream>
using namespace std; 

int calcExpo(int base, int power); 

int main() 
{
	int userBase = 0; 
	int userPower = 0;

	//Getting base and power from user
	cout << "Enter base and the power it should be raised to. " << endl; 
	cin >> userBase >> userPower; 

	int userAnswer = calcExpo(userBase, userPower); 
	
	cout << userAnswer << endl; 
} 

int calcExpo(int base, int power)
{
	 
	
	//Recursive function first testing base case then to recursion
	if (power == 1) 
	{
		return base;
	}
	else	
	{
		return base * calcExpo(base, power - 1); 
	}
	
} 
	 
