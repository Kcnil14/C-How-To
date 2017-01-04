//Member function definition for Complex.h
// Chapter9_5
#include <iostream>
#include "Complex.h"

using namespace std; 

Complex::Complex(double realPortion, double imaginePortion)
	: real(realPortion), imaginary(imaginePortion)
{
} // end 

void Complex::setComplex(double realNum, double imagineNum)
{
	setReal(realNum); 
	setImage(imagineNum); 
}

void Complex::setReal(double realNum)
{
	real = realNum; 
}

void Complex::setImage(double imagineNum)
{
	imaginary = imagineNum; 
}

double Complex::getRealNum() const
{
	return real; 
}

double Complex::getImagNum() const
{
	return imaginary; 
}
void Complex::addComplex(double realNum1, double realNum2, double imagineNum1, double imagineNum2)
{
	double addedReal = realNum1 + realNum2; 
	double addedImaginary = imagineNum1 + imagineNum2; 

	real = addedReal; 
	imaginary = addedImaginary; 
}

void Complex::subtractComplex(double realNum1, double realNum2, double imagineNum1, double imagineNum2)
{
	double subtractReal = realNum1 - realNum2; 
	double subtractImaginary = imagineNum1 - imagineNum2; 

	real = subtractReal; 
	imaginary = subtractImaginary; 
}

void Complex::printComplex()
{
	cout << "( " << real << " , " << imaginary << ")" << endl; 
}
