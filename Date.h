#pragma once
#include <string>
#include <iostream>

class Date {
public:
	Date(int monthSelected, int daySelected, int yearSelected)
	{ //Assigning monthName to data member month 

		if (monthSelected > 0 || monthSelected <= 12) {

			month = monthSelected;
		}

		if (daySelected > 0 || daySelected <= 31) {

			day = daySelected; 
		}

		if (yearSelected > 0) {

			year = yearSelected; 
		}

	}

	//Get and Set functions 

	void setMonth(int monthSelected) {

		month = monthSelected;

	}

	int getMonth() const {

		return month;
	}

	void setDay(int daySelected) {
		 
		day = daySelected; 
	}

	int getDay() const {

		return day; 
	}

	void setYear(int yearSelected) {

		year = yearSelected; 
	}

	int getYear() const {

		return year; 
	}

	void displayDate() {

		std::cout << month << "/" << day << "/" << year << std::endl; 
	}

private: 
	int month{ 1 }; // data member for Date representing month
	int day{ 0 }; 
	int year{ 0 }; 
};
