//Question 3/7 Demonstrating the employee class
//setMonthlySalary()
#include <iostream>
#include <string>

#include "Employee.h"
using namespace std; 
int main() {

	Employee employee1{"Bob", "Bob", 100};
	Employee employee2{"Karen", "Kar", 200};

	cout << "First name:" << employee1.getfName(); 
	cout << "\nLast name: " << employee1.getlName();
	cout << "\nMonthly Salary: " << employee1.getMonthlySalary();  
	
	cout << "\nFirst name:" << employee2.getfName(); 
	cout << "\nLast name: " << employee2.getlName();
	cout << "\nMonthly Salary: " << employee2.getMonthlySalary(); 
	

	cout << "\nEnter the percentage increase for the salary.\n "; 
	int percentAmount; 
	cin >> percentAmount; 
	employee1.raise(percentAmount); 

	

	cout << "Enter the percentage increase for the salary.\n "; 
	cin >> percentAmount; 
	employee2.raise(percentAmount);	
	int salary1 = employee1.getMonthlySalary(); 
	
	cout<< "\n";
	cout << "Updated salary for " << employee1.getfName() << " is $" << employee1.getMonthlySalary() << "\n"; 
	cout << "Updated salary for " << employee2.getfName() << " is $" << employee2.getMonthlySalary() << "\n";
} 
		 
