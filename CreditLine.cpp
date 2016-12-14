//Member functions for CreditLine class

#include <iostream>
#include "CreditLine.h"

using namespace std; 

//constructor to initialize CreditLine object

CreditLine::CreditLine(string name)
{
	setCreditLine(name); 
} //end of constructor 

void CreditLine::setCreditLine( string name ) 
{
	creditName = name; 
}

string CreditLine::getCreditLine() const 
{
	return creditName; 
}

void CreditLine::calcCurrentCredit() const 
{
	int account_num = 0; 
	
	cout << "Enter account number (or -1 to quit):\n"; 
	cin >> account_num; 

	//Loop to control repitition of calculating credit
	while (account_num != -1) 
	{
		double begin_balance = 0.0; 
		cout << "Enter beginning balance: "; 
		cin >> begin_balance; 
		
		double total_charges = 0.0; 
		cout << "Enter total charges: "; 
		cin >> total_charges; 

		double total_credit = 0.0; 
		cout << "Enter total credit: "; 
		cin >> total_credit; 

		double credit_limit = 0.0; 
		cout << "Enter credit limit: "; 
		cin >> credit_limit; 

		//calculating new balance 
		double new_balance = begin_balance + total_charges - total_credit; 
		cout << "New balance is " << new_balance << endl; 

		//check if new balance exceeds credit limit 
		if (new_balance > credit_limit) 
		{
			cout << "Account: " << account_num << endl; 
			cout << "Credit Limit: " << credit_limit << endl; 
			cout << "Balance: " << new_balance << endl; 
			cout << "Credit Limit Exceeded . " << endl; 
		}
		
		//start loop again if needed 
		cout << "Enter account number (or -1 to quit):\n"; 
		cin >> account_num;

	} 
} 

