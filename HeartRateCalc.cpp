#include <iostream>
#include <string>
#include "HeartRate.h"

using namespace std; 

int main() {

	HeartRates myRate{ "Rui", "Lin", 12, 20, 1987 };


	//Calculating age 
	int myAge = myRate.ageInYears(); 

	//Outputing heartrate values stored in constructor with the get methods 
	cout << "Your first name is " << myRate.getfName() << ". \n";
	cout << "Your last name is " << myRate.getlName() << ".\n";
	cout << "DOB is " << myRate.getBirthMonth() << "/" << myRate.getBirthDay() << "/" << myRate.getBirthYear() << "\n";
	cout << "Age is " << myAge; 

	int myMaxHeart = myRate.maxHeartRate(myAge); 
	cout << "\nMax heart rate is " << myMaxHeart; 

	cout << myRate.targetHeartRate(myMaxHeart); 
	
	

	int pausePrg; 
	cin >> pausePrg; 
}
