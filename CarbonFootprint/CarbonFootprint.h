//Abstract base class CarbonFootprint.h 
//Ch12_16

#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

class CarbonFootprint
{
public:
	virtual ~CarbonFootprint() {}; // virtual destructor 

	//abstract function for calculating carbon footprint 
	virtual void getCarbonFootprint() const = 0;

}; 

#endif
