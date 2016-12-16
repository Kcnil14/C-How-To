//Finding the pythagorean triples from 0 -500. 
// Chp 5_200

#include <iostream>
#include <cmath>

using namespace std; 

int main() 
{
	int side1 = 0; 
	int side2 = 0; 
	int side3 = 0;
	int numOfTrip = 0; 	

	//Testing combinations of all 500 numbers
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <= 500; j++)
		{

			for (int k = 1 ; k <= 500; k++)	
			{

				side1 = pow(i, 2); 
				side2 = pow(j, 2);
				side3 = pow(k, 2); 
				
				int comboSides = side1 + side2; 
				
				if (comboSides == side3)
				{
					cout << i << ", " << j << ", and " << k << " are Pythagorean Triples. " << endl;
					numOfTrip++;  
				}
			}
		}
	}

	cout << "Total number of Pythagorean Triples: " << numOfTrip;

} 
 
