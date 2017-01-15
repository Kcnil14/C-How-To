//Implemntation of member functions Car.h
//Chp12_16

#include <iostream>
#include "Car.h"

using namespace std; 

//constructor for a Car object
Car::Car(const double carMiles, const double carGallons)
{
	setMilesDriven(carMiles); 
	setGallonsUsed(carGallons); 
}

//set miles and gallons 
void Car::setMilesDriven(double carMiles)
{
	if (carMiles >= 0.0)
	{
		miles = carMiles; 
	}
	else
	{
		cout << "Miles must be >= 0." << endl; 
	}
}

double Car::getMilesDriven() const 
{
	return miles; 
}

void Car::setGallonsUsed(double carGallons)
{
	if (carGallons >= 0.0)
	{
		gallons = carGallons; 
	}
	else
	{
		cout << "Gallons must be >= 0." << endl; 
	}
}

double Car::getGallonsUsed() const 
{
	return gallons; 
}

void Car::calcMPG()
{
	mpg = getGallonsUsed() * getMilesDriven(); 
}

double Car::getMPG() const 
{
	return mpg; 
}

//override CarbonFootprint's virtual function
void Car::getCarbonFootprint() const
{
	double myCarbonFootprint =  mpg * 8.9; 
	cout << "Car's carbon footprint is " << myCarbonFootprint << "kg per gallon" << endl;
} 
	
 
