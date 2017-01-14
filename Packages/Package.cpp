//Implementation of package.h
//Ch11_9

#include <iostream>
#include <string>
#include "Package.h"
using namespace std; 

//Implementing constructor 
Package::Package(string sName, string sAddress, string sCity, string sState, int sZip, string rName, string rAddress, string rCity, string rState, int rZip, double pWeight, double cPerOz)
	:senderName(sName),senderAddress(sAddress), senderCity(sCity), senderState(sState), senderZip(sZip), recipName(rName), recipAddress(rAddress), recipCity(rCity), recipState(rState), recipZip(rZip)
{
	setWeight(pWeight); 
	setCostPerOunce(cPerOz); 
}

void Package::setSenderName(string sName)
{
	senderName = sName;
}

string Package::getSenderName() const
{
	return senderName; 
}

void Package::setSenderAddress(string sAddress)
{
	senderAddress = sAddress; 
}

string Package::getSenderAddress() const 
{
	return senderAddress; 
}

void Package::setSenderCity(string sCity)
{
	senderCity = sCity; 
}

string Package::getSenderCity() const
{
	return senderCity; 
}

void Package::setSenderState(string sState)
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

 
void Package::setRecName(string rName)
{
	recipName = rName; 
}

string Package::getRecName() const
{
	return recipName; 
}

void Package::setRecAddress(string rAddress)
{
	recipAddress = rAddress; 
}

string Package::getRecAddress() const 
{
	return recipAddress; 
}

void Package::setRecZip(int rZip)
{
	recipZip = rZip; 
}

int Package::getRecZip() const 
{
	return recipZip; 
}


void Package::setCostPerOunce(double cPerOz)
{
	if (cPerOz >= 0)
	{
		costPerOunce = cPerOz; 
	}
	else 
	{
		cout << "Enter positive value for cost per ounce." << endl;
	} 
}

double Package::getCostPerOunce() const
{
	return costPerOunce; 
}

void Package::setWeight(double pWeight)
{
	if (pWeight >= 0)
	{
		weight = pWeight; 
	}
	else
	{
		cout << "Enter positive value for package weight." << endl; 
	}
}

double Package::getWeight() const
{
	return weight; 
}

double Package::calculateCost()
{
	double totalCost = getWeight() * getCostPerOunce();  
//	totalCost = weight * costPerOunce; 

	return totalCost; 
}
