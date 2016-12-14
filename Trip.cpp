// Member functions for Trip class 
#include <string>
#include <iostream>
#include "Trip.h"

using namespace std; 

//constructor for Trip 
Trip::Trip(string name) 
{
	setTripName(name); 
} //end of trip constructor 

//set trip naem 
void Trip::setTripName(string name)
{
	tripName = name; 
}

//get trip name
string Trip::getTripName() const 
{
	return tripName; 
}

//calculate MPG 
void Trip::calcMPG() const 
{
	double totalMPG = 0.0; 
	int gallons = 0; 
	int miles = 0; 

	cout << "Enter miles driven (-1 to quit):\n "; 
	cin >> miles; 

	while( miles != -1) 
	{
		cout << "Enter gallons used: \n"; 
		cin >> gallons; 
		
		double currentMPG = 0.0; 
		currentMPG = static_cast<double>(miles)/gallons; 

		cout << "MPG this trip: " << currentMPG << endl; 

		totalMPG = totalMPG + currentMPG; 
		cout << "Total MPG: " << totalMPG << endl; 

		cout << "Enter miles driven (-1 to quit): \n"; 
		cin >> miles; 
	} 
 } 
