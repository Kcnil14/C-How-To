//Calculate the range of salary for all employees 
//Chapter 7 Problem 10

#include <iostream>
#include <array>
#include <iomanip>

using namespace std; 

void calcSalary(int numEmployees, double empSalary[]); 

int main()
{
	//Getting number of employees from user
	int numOfEmp = 0; 
	cout << "Enter number of employees. " << endl; 
	cin >> numOfEmp; 

	//Stack overflow "Is it possible to allow a user to enter array size with keyboard?" 
	double* salesArray = new double[numOfEmp]; 

	calcSalary(numOfEmp, salesArray); 

	int holdStop = 0; 
	cin >> holdStop; 


}

void calcSalary(int numEmployees, double empSalary[])
{ 
	//Defining the array to hold frequency of sales 
	const int maxLabelCategory = 9;
	array<unsigned int, maxLabelCategory> salesFreq{}; 

	for (int i = 0; i < numEmployees; i++)
	{
		cout << "Enter employee salary. \n" << endl; 
		cin >> empSalary[i];  

		double salary = empSalary[i]; 
		double commision = salary * .09 + 200; 
		cout << commision << endl; 
		empSalary[i] = commision; 

		//Assigning each employee sale to a commision range 
		if (commision >= 200.00 && commision <= 299.99)
		{
			++salesFreq[0]; 
		}
		else if (commision >= 300.00 && commision <= 399.99)
		{
			++salesFreq[1]; 
		} 
		else if (commision >= 400.00 && commision <= 499.99)
		{
			++salesFreq[2]; 
		}
		else if (commision >= 500.00 && commision <= 599.99)
		{
			++salesFreq[3]; 
		}
		else if (commision >= 600.00 && commision <= 699.99)
		{
			++salesFreq[4]; 
		}
		else if (commision >= 700.00 && commision <= 799.99)
		{
			++salesFreq[5]; 
		}
		else if (commision >= 800.00 && commision <= 899.99)
		{
			++salesFreq[6]; 
		}
		else if (commision >= 900.00 && commision <= 999.99)
		{
			++salesFreq[7]; 
		}
		else if (commision > 1000.00)
		{
			++salesFreq[8]; 
		}
		else
		{
			cout << "Error" << endl; 
		}

	}


	cout << "Range" << setw(13) << "\t\t\tNumber of Employees\n" << endl;

	for (int i = 0; i < maxLabelCategory; i++)
	{
		//Creating the labels 
		if (0 == i)
		{
			cout << "    $200 - 299"; 
			cout << "\t\t\t\t" <<salesFreq[0]; 
		}
		else if (8 == i)
		{
			cout << "$1000 and over"; 
			cout << "\t\t\t\t" << salesFreq[8]; 
		}
		else
		{
			cout << "    $" <<(i + 2) * 100 << " - " << ((i +2) * 100) + 99; 
			cout << "\t\t\t\t" << salesFreq[i]; 
		}

		cout << endl; 
	}

	cout << "______________\t\t  _______________" << endl;

	
}
