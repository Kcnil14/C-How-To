//Implemntation of Building.h

#include <iostream>
#include "Building.h"

using namespace std; 

//constructor for Building object
Building::Building(const double eUse, const double gUse)
{
	setMonthlyGas(gUse); 
	setMonthlyElectric(eUse); 
}

//set and get gas
void Building::setMonthlyGas(double gUse)
{
	if (gUse >= 0.0)
	{
		gasUse = gUse; 
	}
	else
	{
		cout << "Gas use can't be negative." << endl; 
	}
}

double Building::getMonthlyGas() const
{
	return gasUse; 
}

void Building::setMonthlyElectric(double eUse)
{
	if (eUse >= 0.0)
	{
		electricUse = eUse; 
	}
	else
	{
		cout << "Electric use can't be negative." << endl; 
	}
}

double Building::getMonthlyElectric() const
{
	return electricUse; 
}

//override getCarbonFootprint virtual function
void Building::getCarbonFootprint() const
{
	double gasCalc = getMonthlyGas() * .00548; 
	double elecCalc = getMonthlyElectric() * .005925; 

	double myCFootprint = gasCalc + elecCalc;  

	cout << "Building carbon footprint is " << myCFootprint << "metric tons per combined Kwh and therm." << endl; 
}
