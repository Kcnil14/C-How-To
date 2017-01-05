//Implementation of member functions in Rectangle.h
//Chapter 9_11

#include <iostream>
#include <stdexcept>
#include "Rectangle.h"

using namespace std; 

//Rectangle constructor 
Rectangle::Rectangle(double lSide, double wSide)
	:widthSide(wSide), lengthSide(lSide)
{
	//setLength(lSide); 
	//setWidth(wSide); 
	//lengthSide = lSide; 
	//widthSide = wSide; 
}

void Rectangle::setLength(double lSide)
{
	if (lSide >= 0.0 && lSide <= 20.0)
	{
		lengthSide = lSide; 
	}
	else
	{
		throw invalid_argument("Length must be between 0.0 and 20.0"); 
	}
}

void Rectangle::setWidth(double wSide)
{
	if (wSide >= 0.0 && wSide <= 20.0)
	{
		widthSide = wSide; 
	}
	else
	{
		throw invalid_argument("Width must be between 0.0 and 20.0");
	}
}

double Rectangle::getWidth() const
{
	return widthSide; 
}

double Rectangle::getLength() const
{
	return lengthSide; 
}

double Rectangle::calcPerimeter()
{
	double myPerimeter = (2 * lengthSide) + (2 * widthSide); 

	return myPerimeter; 
}

double Rectangle::calcArea()
{
	double myArea = lengthSide * widthSide; 

	return myArea; 
}
