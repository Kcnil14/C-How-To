//TwoDayPackage function prototypes 
//Chap 11_9

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <string>
#include "Package.h"

class TwoDayPackage:public Package
{
public:
	TwoDayPackage(const std::string &, const std::string &, const std::string &, const std::string &, int, const std::string &, const std::string &, const std::string &, const std::string &, int, double = 0.0, double = 0.0, double = 0.0);

	void setFlatFee(double); 
	double getFlatFee() const; 

	double calculateCost() const;

private:
	double fFee; 
};

#endif
