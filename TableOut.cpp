//program to print out table with n * 10, 100, 1000

#include <iostream>
using namespace std; 

int main()

{
	int counter = 0; 

	cout << "N\t10*N\t100*N\t1000*N\t" << endl; 
	cout << "\n"; 

	while (counter < 5)
	{
		int current_num = counter +1; 
		
		int num10 = current_num * 10; 
		int num100 = current_num * 100; 
		int num1000 = current_num * 1000; 

		cout << current_num << "\t" << num10 << "\t" << num100 << "\t" << num1000 << "\t" << endl; 
		counter++; 
	}
}	
