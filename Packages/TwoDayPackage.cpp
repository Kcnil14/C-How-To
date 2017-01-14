//Implementation of TwoDayPackage.h member functions
//chapter 11_9


#include <iostream>
#include "TwoDayPackage.h"

using namespace std; 

//Constructor for TwoDayPackage
TwoDayPackage::TwoDayPackage(const string &sName, const string &sAddress, const string &sCity, const string &sState, int sZip, const string &rName, const string &rAddress, const string &rCity, const string &rState, int rZip, double pWeight, double pCostPerOz, double flatFee):Package(sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip, pWeight, pCostPerOz)
{
	setFlatFee(flatFee);
}


//get and set functions 
void TwoDayPackage::setFlatFee(double flatFee)
{
	if (flatFee >= 0)
	{	
		fFee = flatFee; 
	}
	else
	{
		cout << "Flat fee must be >= 0." << endl; 
	}
}

double TwoDayPackage::getFlatFee() const
{
	return fFee; 
}

double TwoDayPackage::calculateCost() const
{
	return getFlatFee() + Package::calculateCost(); 
}


