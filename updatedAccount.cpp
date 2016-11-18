//Create and manipulate account object. 

#include <iostream>
#include <string>
#include "Account.h"

using namespace std; 

void displayAccount(Account myAccount) {

	//Outputting the account name and balance
	cout << myAccount.getName() << " balance is $" << myAccount.getBalance() << "\n";
}

int main() {

	Account account1{"Jane Green", 50 };
	Account account2{ "John Blue", -8 }; 

	//display initial balance of each obj
	displayAccount(account1); 
	displayAccount(account2); 

	//Prompting user for input on deposit amount 
	cout << "\n\nEnter depsoit amount for account1: "; 
	int depositAmount; 

	//obtains user input
	cin >> depositAmount; 
	cout << "adding " << depositAmount << " to account1 balance"; 
	account1.deposit(depositAmount); 

	//display blances 

	displayAccount(account1); 


	//Repeating deposit process for second account 
	cout << "\n\n Enter deposit amount for account2: "; //prompt 
	cin >> depositAmount; 
	cout << "adding " << depositAmount << " to account2 balance"; 
	account2.deposit(depositAmount); 

	displayAccount(account2); 

	cout << "\n Enter withdraw amount for account1: ";
	int withdrawValue; 
	cin >> withdrawValue; 
	cout << "Withdrawing requested amount. "; 
	account1.withdraw(withdrawValue);

	//display final balances 
	displayAccount(account1);
	displayAccount(account2);

}
