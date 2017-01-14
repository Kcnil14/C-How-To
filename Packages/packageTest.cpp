//Test of TwoDayPackage class and its base class Package

#include <string>
#include <iostream>
#include "TwoDayPackage.h"
using namespace std; 

int main()
{


	TwoDayPackage  myPackage2("Sam", "456 address", "c City", "c State", 6543, "Sharron", "9876 address", "d City", "d State", 6543, 4.0, 7.0, 2.0); 

	cout << myPackage2.calculateCost() << endl ; 	
}
