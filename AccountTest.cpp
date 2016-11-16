//Create and manipulate account object. 

#include <iostream>
#include <string>
#include "Account.h"

using namespace std; 

int main() {

	Account account1{"Jane Green", 50 };
	Account account2{ "John Blue", -8 }; 

	//display initial balance of each obj
	cout << "account1: " << account1.getName() << "Balance is $ " << account1.getBalance(); 

	cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance(); 

	cout << "\n\nEnter depsoit amount for account1: "; //prompt
	int depositAmount; 
	cin >> depositAmount; //obtains user input
	cout << "adding " << depositAmount << " to account1 balance"; 
	account1.deposit(depositAmount); 

	//display blances 

	cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance(); 

	cout << "\n\n Enter deposit amount for account2: "; //prompt 
	cin >> depositAmount; 
	cout << "adding " << depositAmount << " to account2 balance"; 
	account2.deposit(depositAmount); 

	cout << "\n Enter withdraw amount for account1: ";
	int withdrawValue; 
	cin >> withdrawValue; 
	cout << "Withdrawing requested amount. "; 
	account1.withdraw(withdrawValue);

	//display final balances 
	cout << "\n\naccount1: " << account1.getName() << " balance is $ " << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl; 
}
