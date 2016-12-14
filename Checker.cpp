#include <iostream> 

using namespace std;

int main() 
{
	int number = 8; 

	for (int col_counter = 0; col_counter < number ; col_counter++) 
	{
		if (col_counter % 2 != 0) 
		{
			cout << " "; 
		}

		for (int row_counter = 0; row_counter < number; row_counter++) 
		{
			cout << "* ";
		}
	
		cout << endl; 	
	}
}
