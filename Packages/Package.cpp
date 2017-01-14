//Implementation of member functions package.h
//Chapter11_9

#include <iostream>
#include "Package.h"
using namespace std; 

//Constructor for package class
Package::Package(const string &sName, const string &sAddress, const string &sCity, const string &sState, int sZip, const string &rName, const string &rAddress, const string &rCity, const string &rState, int rZip, double pWeight, double pCostPerOz): senderName(sName), senderAddress(sAddress), senderCity(sCity), senderState(sState), senderZip(sZip), recipName(rName), recipAddress(rAddress), recipCity(rCity), recipState(rState), recipZip(rZip)
{
	//Validating data members not in initalizer list
	setWeight(pWeight); 
	setPricePerOz(pCostPerOz); 

}

void Package::setSenderName(const string &sName)
{
	senderName = sName; 
}

string Package::getSenderName() const
{
	return senderName; 
}

void Package::setSenderAddress(const string &sAddress)
{
	senderAddress = sAddress; 
}

string Package::getSenderAddress() const
{
	return senderAddress; 
}

void Package::setSenderCity(const string &sCity)
{
	senderCity = sCity; 
}

string Package::getSenderCity() const
{
	return senderCity; 
}

void Package::setSenderState(const string &sState)
{
	senderState = sState; 
}

string Package::getSenderState() const
{
	return senderState;
}

void Package::setSenderZip(int sZip)
{
	senderZip = sZip; 
}

int Package::getSenderZip() const 
{
	return senderZip; 
}

void Package::setRecipName(const string &rName)
{
	recipName = rName; 
}

string Package::getRecipName() const 
{
	return recipName; 
}

void Package::setRecipAddress(const string &rAddress)
{
	recipAddress = rAddress; 
}

string Package::getRecipAddress() const
{
	return recipAddress; 
}

void Package::setRecipCity(const string &rCity)
{
	recipCity = rCity; 
}

string Package::getRecipCity() const
{
	return recipCity; 
}

void Package::setRecipState(const string &rState)
{
	recipState = rState; 
}

string Package::getRecipState() const
{
	return recipState; 
}

void Package::setRecipZip(int rZip)
{
	recipZip = rZip; 
}

int Package::getRecipZip() const
{
	return recipZip; 
}

void Package::setWeight(double pWeight)
{

	if (pWeight >= 0.0)
	{
		weight = pWeight; 
	}
	else
	{
		cout << "Must be >= 0." << endl; 
	}
}

double Package::getWeight() const 
{
	return weight; 
}

void Package::setPricePerOz(double pCostPerOz)
{
	if (pCostPerOz >= 0.0)
	{
		perOz = pCostPerOz; 
	}
	else
	{
		cout << "Must be >= 0.0" << endl; 
	}
}

double Package::getPricePerOz() const
{
	return perOz; 
}


double Package::calculateCost() const
{
	return getPricePerOz() * getWeight(); 
}
