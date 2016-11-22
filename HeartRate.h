#pragma once
#pragma once
#include <string>
#include <iostream>

class HeartRates {

public:
	//Heart rate constructor with full name and dob 
	HeartRates(std::string fName, std::string lName, int birthMonth, int birthDay, int birthYear)
		:firstName{ fName }, lastName{ lName } { //list initializer for strings

												 //Initialzing the dob 
		if (birthMonth > 0) {

			month = birthMonth;
		}

		if (birthDay > 0) {

			day = birthDay;
		}

		if (birthYear > 0) {

			year = birthYear;
		}
	}

	void setfName(std::string fName) {

		firstName = fName;
	}

	std::string getfName() const {

		return firstName;
	}

	void setlName(std::string lName) {

		lastName = lName;
	}

	std::string getlName() const {

		return lastName;
	}

	void setBirthMonth(int birthMonth) {

		month = birthMonth;
	}

	int getBirthMonth() const {

		return month;
	}

	void setBirthDay(int birthDay) {

		day = birthDay;
	}

	int getBirthDay() const {

		return day;
	}

	void setBirthYear(int birthYear) {

		year = birthYear;
	}

	int getBirthYear() const {

		return year;
	}

	int ageInYears() {

		//Getting variables for user to pass in date
		int todayMonth;
		int todayDay;
		int todayYear;
		int currentAge;

		std::cout << "Enter today's month. \n";
		std::cin >> todayMonth;
		std::cout << "Enter today's day. \n";
		std::cin >> todayDay;
		std::cout << "Enter today's year. \n";
		std::cin >> todayYear;

		if (month < todayMonth && day > todayDay) {

			currentAge = todayYear - year;
		}
		else if (month <= todayMonth && day <= todayDay) {

			currentAge = todayYear - year;
		}
		else {

			currentAge = todayYear - year - 1;
		}

		return currentAge;
	}

	int maxHeartRate(int age) {

		//Calculates the maximum reccommended heart rate 

		int maxHeartRate = 220 - age; 

		return maxHeartRate; 
	}

	int targetHeartRate(int maxRate) {

		//Calculates target heart rate based on age and max rate 

		double myMax = maxRate; 
		double lowerLimit = maxRate * .5; 
		double upperLimit = maxRate * .8; 

		std::cout << "\n Lower limit of your target heart rate is " << lowerLimit << ".\n"; 
		std::cout << "\n Upper limit of your target hear rate is " << upperLimit << ".\n"; 
    
    //Tried making this return void but wouldn't work so now it returns 0
		return 0; 
	}
private:

	std::string firstName;
	std::string lastName;
	int month{ 1 };
	int day{ 1 };
	int year{ 0 };
};
