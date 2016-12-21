// Find the least common multiple of 2 numbers 
// Chapter 6_31

#include <iostream> 

using namespace std; 

int findLCM(int num1, int num2); 

int main() 
{
	int userNum1 = 0; 
	int userNum2 = 0; 
	
	//Getting numbers from user 
	cout << "Enter two integers to find the least common multiple. " << endl; 
	cin >> userNum1 >> userNum2; 

	//Using the function to calculate LCM
	int lcm = findLCM(userNum1, userNum2); 

	cout << "The least common multiple is " << lcm << endl; 
}

int findLCM(int num1, int num2) 
{
	bool noMultiple = true; 
	int divisor = 1; 
	int maxNum = num1 * num2; 
	int lcMultiple = 0; 
	
	// Testing for LCM 
	while (noMultiple == true) 
	{
		if (divisor % num1 == 0 && divisor <= maxNum) 
		{
			if(divisor % num2 == 0)
			{
				
			 	lcMultiple = divisor;
				noMultiple = false;  
			}
		}
		
		divisor++; 	
	}

	return lcMultiple; 
}	
		
