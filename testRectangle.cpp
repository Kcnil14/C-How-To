//Testing the Rectangle class 
//Chapter 9_11
#include <iostream>
#include "Rectangle.h"

using namespace std; 

int main()
{
	Rectangle myRectangle(2.0,3.0); 
	
	cout << myRectangle.getLength() << endl ; 
	cout << myRectangle.getWidth() << endl; 

	cout << myRectangle.calcArea() << endl; 
	cout << myRectangle.calcPerimeter() << endl; 

	myRectangle.setLength(5.0); 

	cout << myRectangle.getLength(); 
}
