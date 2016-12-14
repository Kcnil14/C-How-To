// Defining the employee class for Employee 

#include <string>

class Employee {

public: 
	Employee(std::string firstName, std::string lastName, int monthlySalary = 0)
		:fName{firstName}, lName{lastName}{
			if (monthlySalary > 0) {
				mSalary = monthlySalary; 
			}
	}

	//get and set functions for each parameter 
	
	void setfName(std::string firstName) {
		fName = firstName; 
	}

	std::string getfName() const {
		return fName; 
	}

	void setlName(std::string lastName) {
		lName = lastName; 
	}

	std::string getlName() const {
		return lName; 
	}

	void setMonthlySalary(int monthlySalary) {
		mSalary = monthlySalary; 
	}
	
	int getMonthlySalary() const {
		return mSalary; 
	}
	
	void raise(int percentAmount) {
		int increaseAmount = mSalary * percentAmount /100; 	
		mSalary = mSalary + increaseAmount; 
	} 
private: 
	std::string fName; 
	std::string lName; 
	int mSalary;
};   	
