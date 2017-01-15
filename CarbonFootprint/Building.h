//Building.h 
//Chp12_16

#ifndef BUILDING_H
#define BUILDING_H

#include "CarbonFootprint.h"

class Building : public CarbonFootprint 
{
public:
	Building(const double, const double); //constructor  
	virtual ~Building() {} // destructor 

	void setMonthlyGas(double); 
	double getMonthlyGas() const; 

	void setMonthlyElectric(double); 
	double getMonthlyElectric() const; 

	virtual void getCarbonFootprint() const override; 
private:
	double electricUse; 
	double gasUse;
}; 

#endif 
