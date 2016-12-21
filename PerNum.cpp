// Find all the "perfect numbers" between a user specified range 
// Perfect number is divisor + quotient + 1 = dividend

#include <iostream>
#include <vector>
using namespace std; 

int main() 
{
	//Getting number of integers from user 
	int userNumber = 0; 
	cout << "Enter the number of integers to search for the perfect numbers. " << endl; 
	cin >> userNumber; 

	for (int dividend = 1; dividend < userNumber + 1; dividend++) 
	{
	
		//Using a vector to hold the divisors for printing later 
		vector<int> divisors; 

		int divisorTracker = 0; 
	
		for (int divisor = 1; divisor < dividend + 1; divisor++) 
		{

			if (dividend % divisor == 0 && divisor != dividend)
			{
				int quotient = dividend / divisor; 
				if (divisor != 1 && dividend % divisor == 0) 
				{
					divisorTracker += quotient;
					divisors.push_back(quotient); 	

				}
			}
			

		}
		
		if (divisorTracker + 1 == dividend && dividend !=1) 
		{
			cout << "Divisors are: \n"; 
			
			for (int i = 0; i < divisors.size(); i++) 
			{
				cout << divisors.at(i) << endl; 
			}
			
			cout << "Perfect number: " << dividend << endl;
			cout << "\n";  
		}	

	} 
}

