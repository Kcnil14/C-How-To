//Bicycle.h
//Chp12_16

#ifndef BICYCLE_H
#define BICYCLE_H

#include "CarbonFootprint.h"

class Bicycle : public CarbonFootprint
{
public: 
	Bicycle(const double); //constructor 
	virtual ~Bicycle() {} //destructor 

	void setCycledDistance(double); 
	double getCycledDistance() const; 

	virtual void getCarbonFootprint() const override; 

private:
	double distance; 
}; 

#endif 
