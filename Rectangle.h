//Rectangle class definition 
//Ch9_11

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
	Rectangle(double = 1.0, double = 1.0); //default constructor

	void setLength(double); //set rectangle length
	void setWidth(double); //set width length 
	double getLength() const; //return rectangle length 
	double getWidth() const; //return rectangle width 
	double calcPerimeter(); //calculate perimeter
	double calcArea(); //calculate area 

private:
	double lengthSide; 
	double widthSide; 
};
#endif
