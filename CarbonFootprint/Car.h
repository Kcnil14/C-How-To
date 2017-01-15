//Car.h
//Chp12_16

#ifndef CAR_H
#define CAR_H

#include "CarbonFootprint.h"

class Car : public CarbonFootprint
{
public: 

	Car(const double, const double); //constructor  
	virtual ~Car() {} //destructor

	void setMilesDriven(double); 
	double getMilesDriven() const; 

	void setGallonsUsed(double); 
	double getGallonsUsed() const; 

	void calcMPG(); 
	double getMPG() const;
 	
	virtual void getCarbonFootprint() const override;  
private: 
	double miles; 
	double gallons; 
	double mpg; 
}; 
#endif
 
