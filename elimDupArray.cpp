// Do not store duplicate numbers in array 
// Chapter 7_13

#include <array>
#include <iostream>
#include <algorithm>

using namespace std; 

int main()
{
	//Declaring array to store user numbers 
	const int sizeArray = 20;
	array<int, sizeArray>numStore = {};
	array<int, sizeArray>noDuplicate = {};

	//user to track position on second array 
	int counter = 0;

	//Getting numbers from user 
	int userNum = 0;

	for (int i = 0; i < sizeArray; i++)
	{
		cout << "Enter 20 numbers between 10 and 100. " << endl;
		cin >> userNum;

		//Check to make sure the number is within boundaries 
		if (userNum >= 10 && userNum <= 100)
		{
			numStore[i] = userNum; 
			
		}
		else
		{
			//Prompt the user if they enter number out of range 
			while (userNum < 10 || userNum > 100)
			{
				cout << "Number is not between 10 and 100 inclusive. " << endl;
				cout << "Enter number between 10 and 100. " << endl;
				cin >> userNum;
				numStore[i] = userNum;
			}
		}
	}
	
	cout << endl; 

	//Sorting the complete array of numbers to use binary search
	sort(numStore.begin(), numStore.end()); 

	for (int i = 0; i < numStore.size(); i++)
	{
		//Sorting Duplicate array each time to account for new values added
		sort(noDuplicate.begin(), noDuplicate.end());

		bool inArray = binary_search(noDuplicate.begin(), noDuplicate.end(), numStore[i]);

		//Checking to see if value from user's array is already in the no-duplicate array 
		if (inArray == false)
		{
			noDuplicate[i] = numStore[i];			
		}
		else
		{
			noDuplicate[i] = 0; 
		}

		//Outputting all values that are not duplicates 
		if (noDuplicate[i] != 0)
		{
			cout << noDuplicate[i] << endl; 
		}
	}
}
