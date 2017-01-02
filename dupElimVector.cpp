// Eliminate duplicate values from vector based on user input 
//Chapter 7_14

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main()
{
	int numOfVal = 20; 
	int userVal = 0; 

	//Initializing vector to store user values 
	vector<int> nonDupVals; 

	for (int i = 0; i < numOfVal; i++)
	{
		cout << "Enter 20 values between 10 and 100. " << endl;
		cin >> userVal;

		//Check to make sure value is within specified range 
		if (userVal >= 10 && userVal <= 100)
		{
			
			//Sort the vector each time to prep for binary search 
			sort(nonDupVals.begin(), nonDupVals.end()); 

			//Checking vector to see if its already included in array. If not add it to vector. 
			bool inVector = binary_search(nonDupVals.begin(), nonDupVals.end(), userVal); 

			if (inVector == false)
			{
				nonDupVals.push_back(userVal); 
			}
		}
		// Prompt the user to re-enter the value if not between specification 
		else
		{
			while (userVal < 10 || userVal > 100)
			{
				cout << "Number is not between 10 and 100 inclusive. " << endl;
				cout << "Enter number between 10 and 100. " << endl;
				cin >> userVal;
			}
		}
	}

	//Printing unique values from user 
	for (int i = 0; i < nonDupVals.size(); i++)
	{
		cout << nonDupVals[i] << endl; 
	}

}
