//Counting the frequency of the sum of two dice rolls 
//Chapter 7_16

#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

using namespace std; 

int main()
{
	//Generating random numbers 
	default_random_engine diceSeed(static_cast<unsigned int>(time(0))); 
	uniform_int_distribution<unsigned int> randomInt(1, 6); 

	//The number of possible sums from two dice
	//Using 13 to be able to start counter at 2
	const size_t myArraySize = 11; 
	array<unsigned int, myArraySize> sumFreq = {}; 

	for (int i = 0; i < 36000; i++)
	{
		int die1 = randomInt(diceSeed);
		int die2 = randomInt(diceSeed);

		int sum = die1 + die2;

		int arrayIndex = sum - 2; 

		//used to increment the correct indice for sum value 
		++sumFreq[arrayIndex]; 
	}

	cout << "Sum" << setw(13) << "Number of Times" << setw(13) << "Reasonable" << endl; 

	for (int i = 0; i < sumFreq.size(); i++)
	{
		//Calculating the ratio of sum to total 
		double reasonable = static_cast<double>(sumFreq[i]) / 36000; 

		cout << setw(4) << i + 2 << setw(13) << sumFreq[i] << setw(13) << reasonable << endl; 
		
	}

}

