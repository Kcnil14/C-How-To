// Calculate volume of cylinder
// Chapter 6_10

#include <iostream>
#include <cmath>

using namespace std; 

//function prototype 

inline double volume(double uRadius, double uHeight);

int main() 
{
	double radius = 0.0;
	double height = 0.0; 

	cout << "Enter circle radius and height. " << endl; 
	cin >> radius >> height;  

	cout << volume(radius, height) << endl; 
}	

inline double volume(double uRadius, double uHeight)
{
	double circleVolume = 3.14159 * pow(uRadius , 2) * uHeight; 
	
	return circleVolume; 
} 
