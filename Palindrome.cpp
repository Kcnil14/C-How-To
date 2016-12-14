//Program to see if user entered palindrome 
//Chp4_26

#include <iostream> 

using namespace std; 

int main() 
{
	int uNum = 0; 
	int digits[5]; 
	
	//Get input from user 
	cout << "Enter a 5 digit number." << endl; 
	cin >> uNum;
	
	cout << uNum << endl; 
	
	//Check to make sure number is 5 digits 
	if (uNum < 10000 or uNum > 99999) 
	{
		cout << "Enter a 5 digit number." << endl; 
		cin >> uNum; 
	}

	//Using for loop to split number 
	for (int counter = 0; counter < 5; counter++) 
	{
		if (counter != 0)
		{
	
			uNum = uNum / 10;
			int modNum = uNum % 10; 
			digits[counter] = modNum;
		
		}
		else
		{
			digits[counter] = uNum % 10; 
		}
		 
	}

	if (digits[0] == digits[4] && digits[1] == digits[3])
	{
		cout << "The number you entered is a palindrome." << endl;
	}
	else
	{
		cout << "The number you entered is not a palindrome." << endl; 
	}
}		
