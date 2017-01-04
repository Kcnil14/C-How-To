//Member functions in Complex.cpp
//Chapter 9_5

#ifndef COMPLEX_H
#define COMPLEX_H

//Complex class definition 
class Complex
{
public: 
	Complex(double = 0.0, double = 0.0); //default constructor 
	void setComplex(double, double); // set complex number 
	void setReal(double); //set real potion 
	void setImage(double); // set imaginary portion 
	double getRealNum() const; // return complex number
	double getImagNum() const; 
	void addComplex(double, double, double, double); // add two complex numbers 
	void subtractComplex(double, double, double, double); // subtract two complex numbers 
	void printComplex(); // Print complex number

private: 
	double real; // real portion of complex number
	double imaginary; // imaginary portion of complex number
};

#endif
