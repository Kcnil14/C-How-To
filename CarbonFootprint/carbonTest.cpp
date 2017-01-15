//Test program for carbon footprint and Building, Car, Bicycle derived classes
//Ch12_16 

#include <iostream>
#include <vector>
#include "CarbonFootprint.h"
#include "Building.h"
#include "Car.h"
#include "Bicycle.h"

using namespace std; 

int main() 
{
	//Implmenting vector of objects with Carbon Footprint 
	//Includes vector of base-class pointers to iterate p588

	vector <CarbonFootprint *> carbonProducers(3); 

	//Initializing the vector. Have to delete them later 

	carbonProducers[0] = new Bicycle(1.0); 
	carbonProducers[1] = new Car(2.0, 5.0); 
	carbonProducers[2] = new Building(4.0,143.0); 

	//The following is based on examples on page 589
	//using pointer to access each element in vector
	//allows polymorphic behavior 

	for (CarbonFootprint *cPtr : carbonProducers) 
	{
		cPtr->getCarbonFootprint(); 
	}

	//Releasing the dynamically allocated memory 
	for (const CarbonFootprint *cPtr : carbonProducers)
	{
		delete cPtr; 
	} 
}
