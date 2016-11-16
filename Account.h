#include <string>


class Account {

public: 
	//Account constructor w 2 param
	Account(std::string accountName, int initalBalance)
		: name{ accountName } {

		if (initalBalance > 0) {
			balance = initalBalance;
		}
	}

	void deposit(int depositAmount) {
		if (depositAmount > 0) {
			balance = balance + depositAmount; 
		}
	}

	void withdraw(int withdrawAmount) {
		if (withdrawAmount > balance) {
			std::cout << "Withdraw amount exceeded account balance"; 
		}
		else {
			balance = balance - withdrawAmount; 
		}


	}

	int getBalance() const {
		return balance; 
	}

	void setName(std::string accountName) {
		name = accountName; 
	}

	std::string getName() const {
		return name; 
	}
private: 
	std::string name; 
	int balance{ 0 }; 
};
