// Calculate total parking charges for the day 
// Chapter 6_12 

#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
 

int costPerCar(int totalCars, double carHours[]); 
 
int main() {

	// Variables to record hours per car, total hours, and charges	

	int numOfCars = 3; 
	double hourPerCar[numOfCars]; 

	// Get hours parked for each customer 
	for (int i = 0; i < numOfCars; i++)
	{
		double usersHours = 0.0; 
	
		cout << "Enter hours parked. " << endl; 
		cin >> usersHours; 

		hourPerCar[i] = usersHours;
		
	}
	double test; 

	test  = costPerCar(numOfCars, hourPerCar); 	
}

int costPerCar(int totalCars, double carHours[])
{
	double chargesPerCar[totalCars]; 
	double totalCharges = 0.0;
	double totalHours = 0.0;  

	// Determining the charge per car
	for (int i = 0; i < totalCars; i++)
	{
		double thisCarHours = carHours[i]; 
		double carCharges = 0.0; 
	
		if (thisCarHours > 0.0 &&  thisCarHours <= 3.0)
		{ 
			carCharges = 2.00; 
		}
		else if (thisCarHours > 3.0 && thisCarHours < 24.0)
		{
		
			double partialHours = (round(thisCarHours) - 3) * .5;
		
			carCharges = partialHours + 2.00;  
		}
		else if (thisCarHours >= 24.0)
		{
			carCharges = 10.00; 
		}
		else
		{
			cout << "Invalid hours entered. " << endl; 
		}
		chargesPerCar[i] = carCharges;
		totalHours += carHours[i]; 	
		totalCharges += carCharges;  
	}
	
	cout <<  setw(15) << "Car\t" << setw(15) <<  "Hours\t"  << setw(15) <<  "Charge\t" << endl;
	cout << fixed << setprecision(2);
 	
	// Printing out car info.
	for (int i = 0; i < totalCars; i++)
	{
		cout  << setw(15)  << i + 1 << "\t" << setw(15) << carHours[i] << "\t" << setw(15) << chargesPerCar[i] << endl; 
	}	
	
	cout << setw(15) << "TOTAL\t" << setw(15) << totalHours << "\t" << setw(15) << totalCharges << endl; 

	return 0;  
} 
