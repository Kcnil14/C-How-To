//Implementation of member functions in Bicycle.h
//Chp12_16

#include <iostream>
#include "Bicycle.h" 

using namespace std; 

Bicycle::Bicycle(const double dBiked)
{
	setCycledDistance(dBiked); 
}

//set and get functions
void Bicycle::setCycledDistance(double dBiked)
{
	if (dBiked >= 0.0)
	{
		distance = dBiked; 
	}
	else
	{
		cout << "Distance must be >= 0." << endl; 
	}
}

double Bicycle::getCycledDistance() const
{
	return distance; 
}

//override carbonfootprint virtual function 
//The .0001 value is made up. 
void Bicycle::getCarbonFootprint() const
{
	double myCarbonFootprint = distance * .0001; 
	cout << "Bicycle's carbon footprint is " <<  myCarbonFootprint << endl; 
}
